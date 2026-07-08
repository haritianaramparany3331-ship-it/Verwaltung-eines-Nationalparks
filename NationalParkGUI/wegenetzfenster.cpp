#include "wegenetzfenster.h"
#include "ui_wegenetzfenster.h"
#include <QPainter>
#include <QPen>
#include <QMessageBox>

wegenetzFenster::wegenetzFenster(NationalparkGraph &graph,
                                 QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::wegenetzFenster)
    , graph(graph)
{
    ui->setupUi(this);
    resize(1000, 600);
    scene = new QGraphicsScene(this);
    setWindowTitle("Wegenetz");
    baueOberflaeche();
    zeichneKarte();
    aktualisiereWegSperrenComboBox();
    aktualisiereOrtComboBoxen();
    if (graph.getKnoten().empty() || graph.getKanten().empty()){
        QMessageBox::information(this, "Wegenetz",
                                 "Es sind noch keine Orte/Wege geladen.\n"
                                 "Laden Sie die erstmal in der Menüleiste hoch.");
    }
}

wegenetzFenster::~wegenetzFenster()
{
    delete ui;
}

void wegenetzFenster::baueOberflaeche(){
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
}

void wegenetzFenster::zeichneKarte(){
    scene->clear();
    ortKnoten.clear();
    wegeKanten.clear();

    const auto &kanten = graph.getKanten();
    for (size_t i = 0; i<kanten.size(); i++){
        const Orte *start = graph.findeOrt(kanten[i].getStart());
        const Orte *ziel = graph.findeOrt(kanten[i].getZiel());
        if (start == nullptr || ziel == nullptr) continue;
        QPen pen(kanten[i].istGesperrt() ? Qt::gray : Qt::black);
        pen.setWidth(2);
        QGraphicsLineItem *linie = scene->addLine(start->getX(),
                                                  start->getY(),
                                                  ziel->getX(),
                                                  ziel->getY(),
                                                  pen);

        wegeKanten[static_cast<int>(i)] = linie;
    }

    for (const auto &ort : graph.getKnoten()){
        QGraphicsEllipseItem *knoten = scene->addEllipse(ort.getX()-KNOTEN_RADIUS,
                                                          ort.getY()-KNOTEN_RADIUS,
                                                          2*KNOTEN_RADIUS,
                                                          2*KNOTEN_RADIUS,
                                                          QPen(Qt::black),
                                                          QBrush(Qt::white));

        ortKnoten[ort.getId()] = knoten;
        QGraphicsTextItem *text = scene->addText(QString::fromStdString(ort.getName()));
        text->setPos(ort.getX()+KNOTEN_RADIUS+2, ort.getY()-KNOTEN_RADIUS-4);
    }
}

void wegenetzFenster::aktualisiereWegSperrenComboBox(){
    ui->wegSperrenComboBox->clear();
    const auto &kanten = graph.getKanten();
    for (size_t i=0; i<kanten.size(); i++){
        const Orte *start = graph.findeOrt(kanten[i].getStart());
        const Orte *ziel = graph.findeOrt(kanten[i].getZiel());
        if (start == nullptr || ziel == nullptr) continue;
        QString beschriftung = QString::fromStdString(start->getName()) +
                               " <-> " +
                               QString::fromStdString(ziel->getName());
        ui->wegSperrenComboBox->addItem(beschriftung, static_cast<int>(i));
    }
}

void wegenetzFenster::aktualisiereOrtComboBoxen(){
    ui->bfsComboBox->clear();
    ui->startWegComboBox->clear();
    ui->zielWegComboBox->clear();
    for (const auto &ort : graph.getKnoten()){
        QString name = QString::fromStdString(ort.getName());
        ui->bfsComboBox->addItem(name, ort.getId());
        ui->startWegComboBox->addItem(name, ort.getId());
        ui->zielWegComboBox->addItem(name, ort.getId());
    }
}

void wegenetzFenster::on_wegEntsperrenPushButton_clicked()
{
    int index = ui->wegSperrenComboBox->currentData().toInt();
    const auto &kanten = graph.getKanten();
    if (index<0 || static_cast<std::size_t>(index) >= kanten.size()) return;
    graph.wegEntsperren(kanten[static_cast<std::size_t>(index)].getStart(),
                     kanten[static_cast<std::size_t>(index)].getZiel());
    zeichneKarte();
}


void wegenetzFenster::on_wegSperrenPushButton_clicked()
{
    int index = ui->wegSperrenComboBox->currentData().toInt();
    const auto &kanten = graph.getKanten();
    if (index<0 || static_cast<std::size_t>(index) >= kanten.size()) return;
    graph.wegSperren(kanten[static_cast<std::size_t>(index)].getStart(),
                     kanten[static_cast<std::size_t>(index)].getZiel());
    zeichneKarte();
}

void wegenetzFenster::loescheMarkierung(){
    for (auto it = ortKnoten.begin(); it != ortKnoten.end(); ++it){
        it->second->setBrush(QBrush(Qt::white));
    }
}

void wegenetzFenster::markiereOrte(const std::vector<int> &orteIds){
    for (const int id : orteIds){
        auto it = ortKnoten.find(id);
        if (it != ortKnoten.end()){
            it->second->setBrush(QBrush(Qt::green));
        }
    }
}

void wegenetzFenster::markierePfad(const std::vector<int> &pfad){
    loeschePfadMarkierung();
    QPen hervorhebung(Qt::red);
    hervorhebung.setWidth(4);
    for (size_t i = 0; i+1<pfad.size(); ++i){
        const Wege* weg = graph.findeWeg(pfad[i], pfad[i + 1]);
        int wegIndex = weg ? static_cast<int>(weg - graph.getKanten().data()) : -1;
        auto it = wegeKanten.find(wegIndex);
        if (it != wegeKanten.end()){
            it->second->setPen(hervorhebung);
            aktuellerPfad.push_back(wegIndex);
        }
    }
}

void wegenetzFenster::loeschePfadMarkierung(){
    const auto &weg = graph.getKanten();
    for (int index : aktuellerPfad){
        auto it = wegeKanten.find(index);
        if (it == wegeKanten.end()) continue;
        QPen pen(weg[static_cast<std::size_t>(index)].istGesperrt() ? QColor(Qt::gray) : QColor(Qt::black));
        pen.setWidth(2);
        it->second->setPen(pen);
    }
    aktuellerPfad.clear();
}

void wegenetzFenster::on_bfsMarkierenPushButton_clicked()
{
    loescheMarkierung();
    int start = ui->bfsComboBox->currentData().toInt();
    std::vector<int> erreichbareOrte = graph.bfsFrom(start);
    markiereOrte(erreichbareOrte);
}


void wegenetzFenster::on_bfsMarkierungEntfernenPushButton_clicked()
{
    loescheMarkierung();
}


void wegenetzFenster::on_dijkstraStartenPushButton_clicked()
{
    int start = ui->startWegComboBox->currentData().toInt();
    int ziel = ui->zielWegComboBox->currentData().toInt();
    NationalparkGraph::DijkstraErgebnis ergebnis = graph.kuerzesterWeg(start, ziel);
    if (ergebnis.erreichbar) markierePfad(ergebnis.pfad);
    else{
        loeschePfadMarkierung();
        QMessageBox::information(this, "Kein Weg", "Wegen Störungen ist das Ziel leider nicht erreichbar");
    }
}


void wegenetzFenster::on_pfadmarkierungEntfernenPushButton_clicked()
{
    loeschePfadMarkierung();
}

