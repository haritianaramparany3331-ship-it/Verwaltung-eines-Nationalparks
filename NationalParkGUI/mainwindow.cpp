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
    for (auto &tier : animalList.getFauna()){
        QListWidgetItem *listWidgetItem = new QListWidgetItem(QString::fromStdString(tier->getInfo()));
        ui->tierListWidget->addItem(listWidgetItem);
    }
    ui->statusBar->showMessage("Liste aktualisiert", 2000);
}

void MainWindow::aktualisierePersonalListWidget(){
    ui->personenListWidget->clear();
    for (auto &personal : personalList.getPersonal()){
        QListWidgetItem *listWidgetItem = new QListWidgetItem(QString::fromStdString(personal->getInfo()));
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

