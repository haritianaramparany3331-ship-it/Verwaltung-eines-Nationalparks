#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <limits>
#include "tierliste.h"
#include "spezies.h"
#include "saeugetier.h"
#include "vogel.h"
#include "reptil.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Wildtier- & Personalverwaltung");
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
    padding: 6px;
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
    QString q_bezeichnung = ui->nameWildtierLineEdit->text();
    bool valid = true;
    bool ok1, ok2, ok3;
    q_bezeichnung.toDouble(&ok1);
    if (ok1 || q_bezeichnung.isEmpty()){
        ui->nameWildtierLineEdit->setText("Falsch");
        valid = false;
    }
    std::string bezeichnung = q_bezeichnung.toStdString();

    QString q_alter = ui->alterWildtierLineEdit->text();
    q_alter.toDouble(&ok2);
    if (!ok2 || q_bezeichnung.isEmpty()){
        ui->alterWildtierLineEdit->setText("Falsch");
        valid = false;
    }
    int alter = q_alter.toInt();

    QString q_fellfarbe = ui->fellfarbeLineEdit->text();
    q_fellfarbe.toDouble(&ok3);
    if (ok3 || q_fellfarbe.isEmpty()){
        ui->fellfarbeLineEdit->setText("Falsch");
        valid = false;
    }
    std::string fellfarbe = q_fellfarbe.toStdString();

    if (valid){
        Saeugetier *s = new Saeugetier(bezeichnung, alter, fellfarbe);
        animalList.insertAnimal(s);
        aktualisiereListWidget();
        ui->nameWildtierLineEdit->clear();
        ui->alterWildtierLineEdit->clear();
        ui->fellfarbeLineEdit->clear();
    }
}


void MainWindow::on_vogelPushButton_clicked()
{
    QString q_bezeichnung = ui->nameWildtierLineEdit->text();
    bool valid = true;
    bool ok1, ok2, ok3;
    q_bezeichnung.toDouble(&ok1);
    if (ok1 || q_bezeichnung.isEmpty()){
        ui->nameWildtierLineEdit->setText("Falsch");
        valid = false;
    }
    std::string bezeichnung = q_bezeichnung.toStdString();

    QString q_alter = ui->alterWildtierLineEdit->text();
    q_alter.toDouble(&ok2);
    if (!ok2 || q_alter.isEmpty()){
        ui->alterWildtierLineEdit->setText("Falsch");
        valid = false;
    }
    int alter = q_alter.toInt();

    QString q_fluegelspannweite = ui->fluegelspannweiteLineEdit->text();
    q_fluegelspannweite.toDouble(&ok3);
    if (!ok3 || q_fluegelspannweite.isEmpty()){
        ui->fluegelspannweiteLineEdit->setText("Falsch");
        valid = false;
    }
    double fluegelspannweite = q_fluegelspannweite.toDouble();

    if (valid){
        Vogel *v = new Vogel(bezeichnung, alter, fluegelspannweite);
        animalList.insertAnimal(v);
        aktualisiereListWidget();
        ui->nameWildtierLineEdit->clear();
        ui->alterWildtierLineEdit->clear();
        ui->fluegelspannweiteLineEdit->clear();
    }
}


void MainWindow::on_reptilPushButton_clicked()
{
    QString q_bezeichnung = ui->nameWildtierLineEdit->text();
    bool valid = true;
    bool ok1, ok2, ok3;
    q_bezeichnung.toDouble(&ok1);
    if (ok1 || q_bezeichnung.isEmpty()){
        ui->nameWildtierLineEdit->setText("Falsch");
        valid = false;
    }
    std::string bezeichnung = q_bezeichnung.toStdString();

    QString q_alter = ui->alterWildtierLineEdit->text();
    q_alter.toDouble(&ok2);
    if (!ok2 || q_alter.isEmpty()){
        ui->alterWildtierLineEdit->setText("Falsch");
        valid = false;
    }
    int alter = q_alter.toInt();

    QString q_giftig = ui->giftigLineEdit->text();
    double checkBool = q_giftig.toDouble(&ok3);
    if (!ok3 || (checkBool != 0 && checkBool != 1) || q_giftig.isEmpty()){
        ui->giftigLineEdit->setText("Falsch");
        valid = false;
    }
    bool giftig = (checkBool == 1);

    if (valid){
        Reptil *r = new Reptil(bezeichnung, alter, giftig);
        animalList.insertAnimal(r);
        aktualisiereListWidget();
        ui->nameWildtierLineEdit->clear();
        ui->alterWildtierLineEdit->clear();
        ui->giftigLineEdit->clear();
    }
}

void MainWindow::aktualisiereListWidget(){
    ui->TierlisteListWidget->clear();
    for (auto &tier : animalList.getFauna()){
        QListWidgetItem *listWidgetItem = new QListWidgetItem(QString::fromStdString(tier->getInfo()));
        ui->TierlisteListWidget->addItem(listWidgetItem);
    }
}


void MainWindow::on_binaerSpeichernPushButton_clicked()
{
    animalList.binaerSpeichern();
    aktualisiereListWidget();
}


void MainWindow::on_binaerLadenPushButton_clicked()
{
    animalList.binaerLaden();
    aktualisiereListWidget();
}

