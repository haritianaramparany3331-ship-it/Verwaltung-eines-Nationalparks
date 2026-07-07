#include "wegenetzfenster.h"
#include "ui_wegenetzfenster.h"
#include <QPainter>
#include <QPen>
#include <QColor>

wegenetzFenster::wegenetzFenster(NationalparkGraph &graph,
                                 QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::wegenetzFenster)
    , graph(graph)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    setWindowTitle("Wegenetz");
    baueOberflaeche();
    zeichneKarte();
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
        QPen pen(Qt::black);
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
