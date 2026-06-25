#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "tierliste.h"
#include "spezies.h"
#include "saeugetier.h"
#include "vogel.h"
#include "reptil.h"
#include "personalliste.h"
#include "angestellter.h"
#include "ranger.h"
#include "verwaltung.h"
#include "wissenschaftler.h"
#include "hilffunktionenGUI.h"
#include <QDesktopServices>
#include <QUrl>
#include <QApplication>
#include <QMessageBox>
#include "tierbearbeitendialog.h"
#include "personbearbeiten.h"
#include "hilffunktionen.h"
#include "personalstatistik.h"
#include "tierstatistik.h"
#include "tiersortierendialog.h"
#include "personsortierendialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Wildtier- & Personalverwaltung");
    this->showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::aktualisiereWildtierListWidget(){
    ui->tierListWidget->clear();
    for (auto &tier : gefilterteAnimalList()){
        QListWidgetItem *listWidgetItem = new QListWidgetItem(QString::fromStdString(tier->getInfo()));
        std::ostringstream os;
        os << *tier;
        listWidgetItem->setToolTip(QString::fromStdString(os.str()));
        ui->tierListWidget->addItem(listWidgetItem);
    }
    ui->statusBar->showMessage("Liste aktualisiert", 2000);
}

void MainWindow::aktualisierePersonalListWidget(){
    ui->personenListWidget->clear();
    for (auto &personal : gefiltertePersonalList()){
        QListWidgetItem *listWidgetItem = new QListWidgetItem(QString::fromStdString(personal->getInfo()));
        std::ostringstream os;
        os << *personal;
        listWidgetItem->setToolTip(QString::fromStdString(os.str()));
        ui->personenListWidget->addItem(listWidgetItem);
    }
    ui->statusBar->showMessage("Liste aktualisiert", 2000);
}

void MainWindow::on_actionTiere_laden_JSON_triggered()
{
    animalList.tierJsonLaden();
    aktualisiereWildtierListWidget();
    ui->statusBar->showMessage("Tiere von tier.json geladen", 2000);
}


void MainWindow::on_actionTiere_speichern_JSON_triggered()
{
    animalList.tierJsonSpeichern();
    ui->statusBar->showMessage("Tiere in tier.json gespeichert", 2000);
}


void MainWindow::on_actionPersonen_laden_JSON_triggered()
{
    personalList.personJsonLaden();
    aktualisierePersonalListWidget();
    ui->statusBar->showMessage("Personal von person.json geholt", 2000);
}


void MainWindow::on_actionPersonen_speichern_JSON_triggered()
{
    personalList.personJsonSpeichern();
    ui->statusBar->showMessage("Personal in person.json gespeichert", 2000);
}


void MainWindow::on_actionBeenden_triggered()
{
    QMessageBox::StandardButton antwort = QMessageBox::question(
        this,
        "Beenden",
        "Wirklich beenden?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (antwort == QMessageBox::Yes) {
        QApplication::quit();
    }
}


void MainWindow::on_actionFull_screen_triggered()
{
    showMaximized();
    ui->statusBar->showMessage("Resized in full screen", 2000);
}


void MainWindow::on_actionMinimize_triggered()
{
    showMinimized();
    ui->statusBar->showMessage("Minimized", 2000);
}


void MainWindow::on_actionNormal_triggered()
{
    showNormal();
    ui->statusBar->showMessage("Resized in normal", 2000);
}


void MainWindow::on_actiontier_json_triggered()
{
    bool erfolg = QDesktopServices::openUrl(
        QUrl::fromLocalFile("tier.json")
        );

    if (erfolg) {
        ui->statusBar->showMessage("tier.json geöffnet", 2000);
    } else {
        ui->statusBar->showMessage("Fehler: tier.json nicht gefunden", 2000);
    }
}


void MainWindow::on_actionperson_json_triggered()
{
    bool erfolg = QDesktopServices::openUrl(
        QUrl::fromLocalFile("person.json")
        );

    if (erfolg) {
        ui->statusBar->showMessage("person.json geöffnet", 2000);
    } else {
        ui->statusBar->showMessage("Fehler: person.json nicht gefunden", 2000);
    }
}

void MainWindow::on_tierverwaltungPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_personenverwaltungPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_zurueckInTierverwaltungsseitePushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_zurueckInPersonenverwaltungsseitePushButoon_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_tierLadenPushButton_clicked()
{
    animalList.tierJsonLaden();
    aktualisiereWildtierListWidget();
    ui->statusBar->showMessage("Tiere von tier.json geladen", 2000);
}


void MainWindow::on_tierSpeichernPushButton_clicked()
{
    animalList.tierJsonSpeichern();
    ui->statusBar->showMessage("Tiere in tier.json gespeichert", 2000);
}


void MainWindow::on_personenLadenPushButton_clicked()
{
    personalList.personJsonLaden();
    aktualisierePersonalListWidget();
    ui->statusBar->showMessage("Personal von person.json geholt", 2000);
}


void MainWindow::on_personenSpeichernPushButton_clicked()
{
    personalList.personJsonSpeichern();
    ui->statusBar->showMessage("Personal in person.json gespeichert", 2000);
}

void MainWindow::on_neuInPersonenVerwaltungsseitePushButton_clicked()
{
    personBearbeiten *personenFenster = new personBearbeiten(this);
    if (personenFenster->exec() == QDialog::Accepted){
        Angestellter *a = personenFenster->getNeuePerson();
        if (a != nullptr) personalList.getPersonal().push_back(a);
    }
    ui->statusBar->showMessage("Neue Person hinzugefügt", 2000);
    aktualisierePersonalListWidget();
}


void MainWindow::on_neuInTierverwaltungsseitePushButton_clicked()
{
    tierBearbeitenDialog *tierFenster = new tierBearbeitenDialog(this);
    if (tierFenster->exec() == QDialog::Accepted){
        Spezies *s = tierFenster->getNeuesTier();
        if (s != nullptr) animalList.getFauna().push_back(s);
    }
    ui->statusBar->showMessage("Neues Tier hinzugefügt", 2000);
    aktualisiereWildtierListWidget();
}

void MainWindow::tierNeuBearbeiten(){
    int row = ui->tierListWidget->currentRow();
    if (row<0) return;
    tierBearbeitenDialog *tierFenster = new tierBearbeitenDialog(this);
    if (tierFenster->exec() == QDialog::Accepted){
        animalList.getFauna().erase(animalList.getFauna().begin() + row);
        Spezies *s = tierFenster->getNeuesTier();
        if (s != nullptr) animalList.getFauna().push_back(s);
        ui->statusBar->showMessage("Tier bearbeitet", 2000);
        aktualisiereWildtierListWidget();
    }
    else{
        ui->statusBar->showMessage("Abgebrochen", 2000);
    }
    delete tierFenster;
}

void MainWindow::personNeuBearbeiten(){
    int row = ui->personenListWidget->currentRow();
    if (row<0) return;
    personBearbeiten *personenFenster = new personBearbeiten(this);
    if (personenFenster->exec() == QDialog::Accepted){
        personalList.getPersonal().erase(personalList.getPersonal().begin() + row);
        Angestellter *a = personenFenster->getNeuePerson();
        if (a != nullptr) personalList.getPersonal().push_back(a);
        ui->statusBar->showMessage("Person bearbeitet", 2000);
        aktualisierePersonalListWidget();
    }
    else{
        ui->statusBar->showMessage("Abgebrochen", 2000);
    }
    delete personenFenster;
}


void MainWindow::on_personBearbeitenPushButton_clicked()
{
    personNeuBearbeiten();
}


void MainWindow::on_tierBearbeitenPushButton_clicked()
{
    tierNeuBearbeiten();
}


void MainWindow::on_statistikTierPushButton_clicked()
{
    TierStatistik t = animalList.berechneStatistik();
    std::string text = "Gesamt: " + std::to_string(t.gesamt) + "\n" +
                       "Reptilen: " + std::to_string(t.reptil) + "\n" +
                       "Saeugetiere: " + std::to_string(t.sauegetier) + "\n" +
                       "Vögel: " + std::to_string(t.vogel) + "\n" +
                       "Giftige Reptilen: " + std::to_string(t.giftigeReptile) + "\n" +
                       "Schwere Saeugetiere (+2000kg): " + std::to_string(t.schwereSauegetiere) + "\n" +
                       "Breite Vögel (+60cm): " + std::to_string(t.breiteVögel) + "\n" +
                       "Gefaehrdete Tiere: " + std::to_string(t.gefaehrdeteTiere) + "\n" +
                       "Raubtiere: " + std::to_string(t.raubtiere) + "\n" +
                       "Alte Tiere (+20jA): " + std::to_string(t.alteTiere);

    QMessageBox::information(this, "Statistik", QString::fromStdString(text));
}


void MainWindow::on_statistikPersonPushButton_clicked()
{
    PersonalStatistik p = personalList.berechneStatistik();
    std::string text = "Gesamt: " + std::to_string(p.gesamt) + "\n" +
                       "Ranger: " + std::to_string(p.ranger) + "\n" +
                       "Verwalter: " + std::to_string(p.verwalter) + "\n" +
                       "Wissenschaftler: " + std::to_string(p.wissenschaftler) + "\n" +
                       "Alte Mitarbeiter: " + std::to_string(p.alteMitarbeiter) + "\n" +
                       "Mitarbeiter mit gutem Gehalt (+2500EUR): " + std::to_string(p.gutesGehalt) + "\n" +
                       "Vollzeitarbeiter (+30Std/Woche): " + std::to_string(p.vollzeit);

    QMessageBox::information(this, "Statistik", QString::fromStdString(text));
}


void MainWindow::on_tierSortierenPushButton_clicked()
{
    tierSortierenDialog *sortierFenster = new tierSortierenDialog(this, animalList.getFauna());
    if (sortierFenster->exec() == QDialog::Accepted){
        animalList.getFauna() = sortierFenster->getSortierteListe();
        ui->statusBar->showMessage("Tiere sortiert", 2000);
        aktualisiereWildtierListWidget();
    }
    else{
        ui->statusBar->showMessage("Abgebrochen");
    }
    delete sortierFenster;
}


void MainWindow::on_personSortierenPushButton_clicked()
{
    personSortierenDialog *sortierFenster = new personSortierenDialog(this, personalList.getPersonal());
    if (sortierFenster->exec() == QDialog::Accepted){
        personalList.getPersonal() = sortierFenster->getSortierteListe();
        ui->statusBar->showMessage("Mitarbeiter sortiert", 2000);
        aktualisierePersonalListWidget();
    }
    else{
        ui->statusBar->showMessage("Abgebrochen");
    }
    delete sortierFenster;
}


void MainWindow::on_reptilCheckBox_toggled(bool checked)
{
    Q_UNUSED(checked);
    aktualisiereWildtierListWidget();
}


void MainWindow::on_saeugetierCheckBox_toggled(bool checked)
{
    Q_UNUSED(checked);
    aktualisiereWildtierListWidget();
}


void MainWindow::on_vogelCheckBox_toggled(bool checked)
{
    Q_UNUSED(checked);
    aktualisiereWildtierListWidget();
}


void MainWindow::on_rangerCheckBox_2_toggled(bool checked)
{
    Q_UNUSED(checked);
    aktualisierePersonalListWidget();
}


void MainWindow::on_verwalterCheckBox_3_toggled(bool checked)
{
    Q_UNUSED(checked);
    aktualisierePersonalListWidget();
}


void MainWindow::on_wissCheckBox_toggled(bool checked)
{
    Q_UNUSED(checked);
    aktualisierePersonalListWidget();
}

std::vector<Angestellter*> MainWindow::gefiltertePersonalList(){
    const auto &alle = personalList.getPersonal();
    std::vector<Angestellter*> sichtbar;
    if (ui->rangerCheckBox_2->isChecked()){
        auto ranger = filter<Ranger>(alle);
        sichtbar.insert(sichtbar.end(), ranger.begin(), ranger.end());
    }
    if (ui->verwalterCheckBox_3->isChecked()){
        auto verwalter = filter<Verwaltung>(alle);
        sichtbar.insert(sichtbar.end(), verwalter.begin(), verwalter.end());
    }
    if (ui->wissCheckBox->isChecked()){
        auto wissenschaftler = filter<Wissenschaftler>(alle);
        sichtbar.insert(sichtbar.end(), wissenschaftler.begin(), wissenschaftler.end());
    }
    return sichtbar;
}

std::vector<Spezies*> MainWindow::gefilterteAnimalList(){
    const auto &alle = animalList.getFauna();
    std::vector<Spezies*> sichtbar;
    if (ui->reptilCheckBox->isChecked()){
        auto reptil = filter<Reptil>(alle);
        sichtbar.insert(sichtbar.end(), reptil.begin(), reptil.end());
    }
    if (ui->saeugetierCheckBox->isChecked()){
        auto saeugetier = filter<Saeugetier>(alle);
        sichtbar.insert(sichtbar.end(), saeugetier.begin(), saeugetier.end());
    }
    if (ui->vogelCheckBox->isChecked()){
        auto vogel = filter<Vogel>(alle);
        sichtbar.insert(sichtbar.end(), vogel.begin(), vogel.end());
    }
    return sichtbar;
}

