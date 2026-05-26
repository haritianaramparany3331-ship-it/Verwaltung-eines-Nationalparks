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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Wildtier- & Personalverwaltung");
    this->showMaximized();
    this->setStyleSheet(R"(
QWidget {
    background-color: #F4F7F2;
    color: #1E1E1E;
    font-family: Arial;
    font-size: 12px;
}

QLabel {
    color: #1E1E1E;
    font-weight: 500;
}

QLineEdit {
    background-color: white;
    border: 1px solid #C9D1C8;
    border-radius: 6px;
    padding: 2px;
    selection-background-color: #7BAE7F;
}

QLineEdit:focus {
    border: 2px solid #2F5D50;
    background-color: #FFFFFF;
}

QPushButton {
    background-color: #2F5D50;
    color: white;
    border: none;
    border-radius: 8px;
    padding: 6px 12px;
    font-weight: 600;
}

QPushButton:hover {
    background-color: #3F6F60;
}

QPushButton:pressed {
    background-color: #24463D;
}

/* =========================
   🟡 SECONDARY BUTTON STYLE
   (optional class usage)
========================= */

QPushButton[secondary="true"] {
    background-color: transparent;
    color: #2F5D50;
    border: 2px solid #2F5D50;
}

QPushButton[secondary="true"]:hover {
    background-color: #E7F0EA;
}

/* =========================
   🔴 DANGER BUTTON (DELETE)
========================= */

QPushButton[danger="true"] {
    background-color: #C0392B;
    color: white;
}

QPushButton[danger="true"]:hover {
    background-color: #A93226;
}

/* =========================
   📋 LIST WIDGET
========================= */

QListWidget {
    background-color: white;
    border: 1px solid #D6DDD5;
    border-radius: 10px;
    padding: 6px;
    outline: none;
    font-size: 13px;
}

/* einzelne Items */
QListWidget::item {
    background-color: transparent;
    padding: 8px;
    margin: 2px 0px;
    border-radius: 6px;
}

/* Hover Effekt */
QListWidget::item:hover {
    background-color: #E7F0EA;
}

/* Ausgewähltes Item */
QListWidget::item:selected {
    background-color: #2F5D50;
    color: white;
}

/* Optional: wenn selected aber unfocused */
QListWidget::item:selected:!active {
    background-color: #7BAE7F;
    color: white;
}

/* Scrollbar */
QScrollBar:vertical {
    background: #F4F7F2;
    width: 10px;
    border-radius: 5px;
}

QScrollBar::handle:vertical {
    background: #7BAE7F;
    border-radius: 5px;
}

QScrollBar::handle:vertical:hover {
    background: #2F5D50;
}

QScrollBar::add-line:vertical,
QScrollBar::sub-line:vertical {
    height: 0px;
}

/* =========================
   📦 GROUP BOX
========================= */

QGroupBox {
    border: 1px solid #C9D1C8;
    border-radius: 10px;
    margin-top: 10px;
    padding: 10px;
    font-weight: bold;
    color: #2F5D50;
    background-color: #F9FBF8;
}

QGroupBox::title {
    subcontrol-origin: margin;
    left: 10px;
    padding: 0 5px 0 5px;
}

/* =========================
   📏 SCROLLBAR (CLEAN LOOK)
========================= */

QScrollBar:vertical {
    background: #F4F7F2;
    width: 10px;
    border-radius: 5px;
}

QScrollBar::handle:vertical {
    background: #7BAE7F;
    border-radius: 5px;
}

QScrollBar::handle:vertical:hover {
    background: #2F5D50;
}

)");

    //ui->tierlisteListView.
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_saeugetierPushButton_clicked()
{
    bool valid = true;
    std::string bezeichnung;
    aufStringPruefen(ui->nameWildtierLineEdit, valid, bezeichnung);

    int alter;
    aufIntZahlPruefen(ui->alterWildtierLineEdit, valid, alter);

    std::string fellfarbe;
    aufStringPruefen(ui->fellfarbeLineEdit, valid, fellfarbe);

    if (valid){
        Saeugetier *s = new Saeugetier(bezeichnung, alter, fellfarbe);
        animalList.insertAnimal(s);
        aktualisiereWildtierListWidget();
        ui->nameWildtierLineEdit->clear();
        ui->alterWildtierLineEdit->clear();
        ui->fellfarbeLineEdit->clear();
        ui->statusbar->showMessage("Tier vom Typ Saeugetier in die Liste hinzugefuegt", 2000);
    }
}


void MainWindow::on_vogelPushButton_clicked()
{
    bool valid = true;
    std::string bezeichnung;
    aufStringPruefen(ui->nameWildtierLineEdit, valid, bezeichnung);

    int alter;
    aufIntZahlPruefen(ui->alterWildtierLineEdit, valid, alter);

    double fluegelspannweite;
    aufDoubleZahlPruefen(ui->fluegelspannweiteLineEdit, valid, fluegelspannweite);

    if (valid){
        Vogel *v = new Vogel(bezeichnung, alter, fluegelspannweite);
        animalList.insertAnimal(v);
        aktualisiereWildtierListWidget();
        ui->nameWildtierLineEdit->clear();
        ui->alterWildtierLineEdit->clear();
        ui->fluegelspannweiteLineEdit->clear();
        ui->statusbar->showMessage("Tier vom Typ Vogel in die Liste hinzugefuegt", 2000);
    }
}


void MainWindow::on_reptilPushButton_clicked()
{
    bool valid = true;
    std::string bezeichnung;
    aufStringPruefen(ui->nameWildtierLineEdit, valid, bezeichnung);

    int alter;
    aufIntZahlPruefen(ui->alterWildtierLineEdit, valid, alter);

    bool giftig;
    aufBoolPruefen(ui->giftigLineEdit, valid, giftig);

    if (valid){
        Reptil *r = new Reptil(bezeichnung, alter, giftig);
        animalList.insertAnimal(r);
        aktualisiereWildtierListWidget();
        ui->nameWildtierLineEdit->clear();
        ui->alterWildtierLineEdit->clear();
        ui->giftigLineEdit->clear();
        ui->statusbar->showMessage("Tier vom Typ Reptil in die Liste hinzugefuegt", 2000);
    }
}

void MainWindow::aktualisiereWildtierListWidget(){
    ui->TierlisteListWidget->clear();
    for (auto &tier : animalList.getFauna()){
        QListWidgetItem *listWidgetItem = new QListWidgetItem(QString::fromStdString(tier->getInfo()));
        ui->TierlisteListWidget->addItem(listWidgetItem);
    }
}

void MainWindow::aktualisierePersonalListWidget(){
    ui->personalListeListWidget->clear();
    for (auto &personal : personalList.getPersonal()){
        QListWidgetItem *listWidgetItem = new QListWidgetItem(QString::fromStdString(personal->getInfo()));
        ui->personalListeListWidget->addItem(listWidgetItem);
    }
}


void MainWindow::on_binaerSpeichernPushButton_clicked()
{
    animalList.binaerSpeichern();
    aktualisiereWildtierListWidget();
    ui->statusbar->showMessage("Liste in datei.bin gespeichert", 2000);
}


void MainWindow::on_binaerLadenPushButton_clicked()
{
    animalList.binaerLaden();
    aktualisiereWildtierListWidget();
    ui->statusbar->showMessage("Liste von datei.bin geholt", 2000);
}


void MainWindow::on_rangerPushButton_clicked()
{
    bool valid = true;
    std::string nachname;
    aufStringPruefen(ui->nachnameLineEdit, valid, nachname);

    std::string vorname;
    aufStringPruefen(ui->vornameLineEdit, valid, vorname);

    int personalnummer;
    aufIntZahlPruefen(ui->persoNumLineEdit, valid, personalnummer);

    int stundenzahl;
    aufIntZahlPruefen(ui->stundenzahlLineEdit, valid, stundenzahl);

    double gehalt;
    aufDoubleZahlPruefen(ui->gehaltLineEdit, valid, gehalt);

    std::string revier;
    aufStringPruefen(ui->revierLineEdit, valid, revier);

    std::string einsatzbereich;
    aufStringPruefen(ui->einsatzbereichLineEdit, valid, einsatzbereich);

    if (valid){
        Ranger *r = new Ranger(nachname, vorname, personalnummer, stundenzahl, gehalt, revier, einsatzbereich);
        personalList.insertPersonal(r);
        aktualisierePersonalListWidget();
        ui->nachnameLineEdit->clear();
        ui->vornameLineEdit->clear();
        ui->persoNumLineEdit->clear();
        ui->stundenzahlLineEdit->clear();
        ui->gehaltLineEdit->clear();
        ui->revierLineEdit->clear();
        ui->einsatzbereichLineEdit->clear();
        ui->statusbar->showMessage("Angestellter vom Typ Ranger in die Liste hinzugefuegt", 2000);
    }
}

void MainWindow::on_verwaltungPushButton_clicked()
{
    bool valid = true;
    std::string nachname;
    aufStringPruefen(ui->nachnameLineEdit, valid, nachname);

    std::string vorname;
    aufStringPruefen(ui->vornameLineEdit, valid, vorname);

    int personalnummer;
    aufIntZahlPruefen(ui->persoNumLineEdit, valid, personalnummer);

    int stundenzahl;
    aufIntZahlPruefen(ui->stundenzahlLineEdit, valid, stundenzahl);

    double gehalt;
    aufDoubleZahlPruefen(ui->gehaltLineEdit, valid, gehalt);

    std::string abteilung;
    aufStringPruefen(ui->abteilungLineEdit, valid, abteilung);

    std::string buero;
    aufStringPruefen(ui->bueroLineEdit, valid, buero);

    if (valid){
        Verwaltung *v = new Verwaltung(nachname, vorname, personalnummer, stundenzahl, gehalt, abteilung, buero);
        personalList.insertPersonal(v);
        aktualisierePersonalListWidget();
        ui->nachnameLineEdit->clear();
        ui->vornameLineEdit->clear();
        ui->persoNumLineEdit->clear();
        ui->stundenzahlLineEdit->clear();
        ui->gehaltLineEdit->clear();
        ui->abteilungLineEdit->clear();
        ui->bueroLineEdit->clear();
        ui->statusbar->showMessage("Angestellter vom Typ Verwalter in die Liste hinzugefuegt", 2000);
    }
}


void MainWindow::on_wissenschaftlerinPushButton_clicked()
{
    bool valid = true;
    std::string nachname;
    aufStringPruefen(ui->nachnameLineEdit, valid, nachname);

    std::string vorname;
    aufStringPruefen(ui->vornameLineEdit, valid, vorname);

    int personalnummer;
    aufIntZahlPruefen(ui->persoNumLineEdit, valid, personalnummer);

    int stundenzahl;
    aufIntZahlPruefen(ui->stundenzahlLineEdit, valid, stundenzahl);

    double gehalt;
    aufDoubleZahlPruefen(ui->gehaltLineEdit, valid, gehalt);

    std::string fachgebiet;
    aufStringPruefen(ui->fachgebietLineEdit, valid, fachgebiet);

    int studienanzahl;
    aufIntZahlPruefen(ui->anzahlStudienLineEdit, valid, studienanzahl);

    if (valid){
        Wissenschaftler *w = new Wissenschaftler(nachname, vorname, personalnummer, stundenzahl, gehalt, fachgebiet, studienanzahl);
        personalList.insertPersonal(w);
        aktualisierePersonalListWidget();
        ui->nachnameLineEdit->clear();
        ui->vornameLineEdit->clear();
        ui->persoNumLineEdit->clear();
        ui->stundenzahlLineEdit->clear();
        ui->gehaltLineEdit->clear();
        ui->fachgebietLineEdit->clear();
        ui->anzahlStudienLineEdit->clear();
        ui->statusbar->showMessage("Angestellter vom Typ Wissenschaftler in die Liste hinzugefuegt", 2000);
    }
}


void MainWindow::on_csvSpeichernPushButton_clicked()
{
    personalList.csvSpeichern();
    ui->statusbar->showMessage("Liste in Personal.csv gespeichert", 2000);
}



void MainWindow::on_csvLadenPushButton_clicked()
{
    personalList.csvLaden();
    aktualisierePersonalListWidget();
    ui->statusbar->showMessage("Liste von Personal.csv geholt", 2000);
}


void MainWindow::on_actionPersonal_csv_triggered()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("Personal.csv"));
    ui->statusbar->showMessage("Oeffnen von Personal.csv", 2000);
}


void MainWindow::on_actionFull_Screen_triggered()
{
    showMaximized();
}


void MainWindow::on_actionMinimize_triggered()
{
    showMinimized();
}


void MainWindow::on_actionNormal_triggered()
{
    showNormal();
}

