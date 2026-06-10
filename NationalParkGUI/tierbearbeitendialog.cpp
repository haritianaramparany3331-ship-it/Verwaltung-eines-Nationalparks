#include "tierbearbeitendialog.h"
#include "hilffunktionenGUI.h"
#include "reptil.h"
#include "saeugetier.h"
#include "ui_tierbearbeitendialog.h"
#include "vogel.h"
#include <QDesktopServices>
#include <QUrl>
#include <QApplication>
#include <QMessageBox>

bool validInTierDatei = true;

tierBearbeitenDialog::tierBearbeitenDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tierBearbeitenDialog)
{
    ui->setupUi(this);
}

tierBearbeitenDialog::~tierBearbeitenDialog()
{
    delete ui;
}

void tierBearbeitenDialog::on_actiontiere_json_2_triggered()
{
    bool erfolg = QDesktopServices::openUrl(
        QUrl::fromLocalFile("tier.json")
        );

    if (erfolg) {
        ui->statusbar->showMessage("tier.json geöffnet", 2000);
    } else {
        ui->statusbar->showMessage("Fehler: tier.json nicht gefunden", 2000);
    }
}


void tierBearbeitenDialog::on_actionpersonal_json_triggered()
{
    bool erfolg = QDesktopServices::openUrl(
        QUrl::fromLocalFile("person.json")
        );

    if (erfolg) {
        ui->statusbar->showMessage("person.json geöffnet", 2000);
    } else {
        ui->statusbar->showMessage("Fehler: person.json nicht gefunden", 2000);
    }
}


void tierBearbeitenDialog::on_actionBeenden_triggered()
{
    QMessageBox::StandardButton antwort = QMessageBox::question(
        this,
        "Beenden",
        "Wirklich beenden?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (antwort == QMessageBox::Yes) {
        this->close();
    }
}


void tierBearbeitenDialog::on_actionFull_screen_triggered()
{
    showMaximized();
}


void tierBearbeitenDialog::on_actionMinimize_triggered()
{
    showMinimized();
}


void tierBearbeitenDialog::on_actionNormal_triggered()
{
    showNormal();
}


void tierBearbeitenDialog::on_saeugetierWaehlenPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void tierBearbeitenDialog::on_reptilWaehlenPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void tierBearbeitenDialog::on_vogelWaehlenPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void tierBearbeitenDialog::on_zurueckInSaeugetierPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void tierBearbeitenDialog::on_zurueckInReptilPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void tierBearbeitenDialog::on_zurueckInVogelPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void tierBearbeitenDialog::on_hinzufuegenInSaeugetierPushButton_clicked()
{
    erstelleNeuesTier();
    if (!validInTierDatei){
        QMessageBox::warning(this, "Fehler", "Füllen Sie alle Felder richtig aus");
        return;
    }
    QMessageBox::StandardButton antwort = QMessageBox::question(
        this,
        "Hinzufuegen",
        "Wollen Sie wirklich das Saeugetier zur Liste hinzufügen?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (antwort == QMessageBox::Yes) {
        accept();
    }
    else{
        ui->stackedWidget->setCurrentIndex(1);
        ui->statusbar->showMessage("Hinzufügen gecancelt", 2000);
    }
}


void tierBearbeitenDialog::on_hinzufuegenInReptilPushButton_clicked()
{
    erstelleNeuesTier();
    if (!validInTierDatei){
        QMessageBox::warning(this, "Fehler", "Füllen Sie alle Felder richtig aus");
        return;
    }
    QMessageBox::StandardButton antwort = QMessageBox::question(
        this,
        "Hinzufuegen",
        "Wollen Sie wirklich den Reptil zur Liste hinzufügen?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (antwort == QMessageBox::Yes) {
        accept();
    }
    else{
        ui->stackedWidget->setCurrentIndex(2);
        ui->statusbar->showMessage("Hinzufügen gecancelt", 2000);
    }
}


void tierBearbeitenDialog::on_hinzufuegenInVogelPushButton_clicked()
{
    erstelleNeuesTier();
    if (!validInTierDatei){
        QMessageBox::warning(this, "Fehler", "Füllen Sie alle Felder richtig aus");
        return;
    }
    QMessageBox::StandardButton antwort = QMessageBox::question(
        this,
        "Hinzufuegen",
        "Wollen Sie wirklich den Vogel zur Liste hinzufügen?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (antwort == QMessageBox::Yes) {
        accept();
    }
    else{
        ui->stackedWidget->setCurrentIndex(3);
        ui->statusbar->showMessage("Hinzufügen gecancelt", 2000);
    }
}

void tierBearbeitenDialog::erstelleNeuesTier(){
    validInTierDatei = true;
    int index = ui->stackedWidget->currentIndex();
    switch (index) {
    case 1:{
        std::string bezeichnung;
        aufStringPruefen(ui->bezeichnungInSaeugetierLineEdit, validInTierDatei, bezeichnung);

        bool gefaehrdet;
        aufBoolPruefen(ui->gefaehrdetInSaeugetierLineEdit, validInTierDatei, gefaehrdet);

        bool raubtier;
        aufBoolPruefen(ui->raubtierInSaeugetierLineEdit, validInTierDatei, raubtier);

        int anzahl;
        aufIntZahlPruefen(ui->anzahlInSaeugetierLineEdit, validInTierDatei, anzahl);

        int alter;
        aufIntZahlPruefen(ui->alterInSaeugetierLineEdit, validInTierDatei, alter);

        bool rudeltier;
        aufBoolPruefen(ui->rudeltierLineEdit, validInTierDatei, rudeltier);

        int tragzeit;
        aufIntZahlPruefen(ui->tragzeitLineEdit, validInTierDatei, tragzeit);

        double durschnittsgewicht;
        aufDoubleZahlPruefen(ui->durschnittsgewichtLineEdit, validInTierDatei, durschnittsgewicht);

        std::string fellfarbe;
        aufStringPruefen(ui->fellfarbeLineEdit, validInTierDatei, fellfarbe);

        if (validInTierDatei){
            delete neuesTier;
            neuesTier = new Saeugetier(bezeichnung,
                                       gefaehrdet,
                                       raubtier,
                                       anzahl,
                                       alter,
                                       rudeltier,
                                       tragzeit,
                                       durschnittsgewicht,
                                       fellfarbe);
        }
        break;
    }
    case 2:{
        std::string bezeichnung;
        aufStringPruefen(ui->bezeichnungInReptilLineEdit, validInTierDatei, bezeichnung);

        bool gefaehrdet;
        aufBoolPruefen(ui->gefaehrdetInReptilLineEdit, validInTierDatei, gefaehrdet);

        bool raubtier;
        aufBoolPruefen(ui->raubtierInReptilLineEdit, validInTierDatei, raubtier);

        int anzahl;
        aufIntZahlPruefen(ui->anzahlInReptilLineEdit, validInTierDatei, anzahl);

        int alter;
        aufIntZahlPruefen(ui->alterInReptilLineEdit, validInTierDatei, alter);

        bool giftig;
        aufBoolPruefen(ui->giftigLineEdit, validInTierDatei, giftig);

        double optTemp;
        aufDoubleZahlPruefen(ui->optTempLineEdit, validInTierDatei, optTemp);

        bool wechselwarm;
        aufBoolPruefen(ui->wechselwarmLineEdit, validInTierDatei, wechselwarm);

        if (validInTierDatei){
            delete neuesTier;
            neuesTier = new Reptil(bezeichnung,
                                   gefaehrdet,
                                   raubtier,
                                   anzahl,
                                   alter,
                                   giftig,
                                   optTemp,
                                   wechselwarm);
        }
        break;
    }
    case 3:{
        std::string bezeichnung;
        aufStringPruefen(ui->bezeichnungInVogelLineEdit, validInTierDatei, bezeichnung);

        bool gefaehrdet;
        aufBoolPruefen(ui->gefaehrdetInVogelLineEdit, validInTierDatei, gefaehrdet);

        bool raubtier;
        aufBoolPruefen(ui->raubtierInVogelLineEdit, validInTierDatei, raubtier);

        int anzahl;
        aufIntZahlPruefen(ui->anzahlInVogelLineEdit, validInTierDatei, anzahl);

        int alter;
        aufIntZahlPruefen(ui->alterInVogelLineEdit, validInTierDatei, alter);

        bool zugvogel;
        aufBoolPruefen(ui->zugvogelLineEdit, validInTierDatei, zugvogel);

        double flugreichweite;
        aufDoubleZahlPruefen(ui->flugreichweiteLineEdit, validInTierDatei, flugreichweite);

        double fluegelspannweite;
        aufDoubleZahlPruefen(ui->fluegelspannweiteLineEdit, validInTierDatei, fluegelspannweite);

        if (validInTierDatei){
            delete neuesTier;
            neuesTier = new Vogel(bezeichnung,
                                  gefaehrdet,
                                  raubtier,
                                  anzahl,
                                  alter,
                                  zugvogel,
                                  flugreichweite,
                                  fluegelspannweite);
        }
        break;
    }
    default:{
        neuesTier = nullptr;
        break;
    }
    }
}

Spezies* tierBearbeitenDialog::getNeuesTier() const{
    return neuesTier;
}
