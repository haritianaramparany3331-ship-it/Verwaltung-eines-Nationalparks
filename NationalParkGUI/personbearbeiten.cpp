#include "personbearbeiten.h"
#include "ranger.h"
#include "ui_personbearbeiten.h"
#include "tierbearbeitendialog.h"
#include "ui_tierbearbeitendialog.h"
#include <QDesktopServices>
#include <QUrl>
#include <QApplication>
#include <QMessageBox>
#include "hilffunktionenGUI.h"
#include "verwaltung.h"
#include "wissenschaftler.h"

bool validInPersonDatei = true;

personBearbeiten::personBearbeiten(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::personBearbeiten)
{
    ui->setupUi(this);
}

personBearbeiten::~personBearbeiten()
{
    delete ui;
}

void personBearbeiten::on_actiontier_json_triggered()
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


void personBearbeiten::on_actionperson_json_triggered()
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


void personBearbeiten::on_actionBeenden_triggered()
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


void personBearbeiten::on_actionFull_screen_triggered()
{
    showMaximized();
}


void personBearbeiten::on_actionMinimize_triggered()
{
    showMinimized();
}


void personBearbeiten::on_actionNormal_triggered()
{
    showNormal();
}


void personBearbeiten::on_rangerWaehlenPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void personBearbeiten::on_verwalterWaehlenPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void personBearbeiten::on_wissenschaftlerWaehlenPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void personBearbeiten::on_zurueckInRangerBearbeitenPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void personBearbeiten::on_zurueckInVerwalterPushButoon_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void personBearbeiten::on_zurueckInWissPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void personBearbeiten::on_hinzufuegenInRangerBearbeitenPushButton_clicked()
{
    erstelleNeuePerson();
    if (!validInPersonDatei){
        QMessageBox::warning(this, "Fehler", "Füllen Sie die Felder richtig aus");
        return;
    }
    QMessageBox::StandardButton antwort = QMessageBox::question(
        this,
        "Hinzufuegen",
        "Wollen Sie wirklich den Ranger zur Liste hinzufügen?",
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


void personBearbeiten::on_hinzufuegenInVerwalterPushButton_clicked()
{
    erstelleNeuePerson();
    if (!validInPersonDatei){
        QMessageBox::warning(this, "Fehler", "Füllen Sie die Felder richtig aus");
        return;
    }
    QMessageBox::StandardButton antwort = QMessageBox::question(
        this,
        "Hinzufuegen",
        "Wollen Sie wirklich den Verwalter zur Liste hinzufügen?",
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


void personBearbeiten::on_hinzufuegenInWissPushButoon_clicked()
{
    erstelleNeuePerson();
    if (!validInPersonDatei){
        QMessageBox::warning(this, "Fehler", "Füllen Sie die Felder richtig aus");
        return;
    }
    QMessageBox::StandardButton antwort = QMessageBox::question(
        this,
        "Hinzufuegen",
        "Wollen Sie wirklich den Wissenschaftler zur Liste hinzufügen?",
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

void personBearbeiten::erstelleNeuePerson(){
    validInPersonDatei = true;
    int index = ui->stackedWidget->currentIndex();
    switch (index) {
    case 1:{
        std::string vorname;
        aufStringPruefen(ui->vornameInRangerLineEdit, validInPersonDatei, vorname);

        std::string nachname;
        aufStringPruefen(ui->nachnameInRangerLineEdit, validInPersonDatei, nachname);

        int persoNum;
        aufIntZahlPruefen(ui->persoNumInRangerLineEdit, validInPersonDatei, persoNum);

        int stundenzahl;
        aufIntZahlPruefen(ui->stundenzahlInRangerLineEdit, validInPersonDatei, stundenzahl);

        double gehalt;
        aufDoubleZahlPruefen(ui->gehaltInRangerLineEdit, validInPersonDatei, gehalt);

        std::string revier;
        aufStringPruefen(ui->revierLineEdit, validInPersonDatei, revier);

        std::string einsatzbereich;
        aufStringPruefen(ui->einsatzbereichLineEdit, validInPersonDatei, einsatzbereich);

        if (validInPersonDatei){
            delete neuePerson;
            neuePerson = new Ranger(nachname,
                                       vorname,
                                       persoNum,
                                       stundenzahl,
                                       gehalt,
                                       revier,
                                       einsatzbereich
                                       );
        }
        break;
    }
    case 2:{
        std::string vorname;
        aufStringPruefen(ui->vornameInVerwalterLineEdit, validInPersonDatei, vorname);

        std::string nachname;
        aufStringPruefen(ui->nachnameInVerwalterLineEdit, validInPersonDatei, nachname);

        int persoNum;
        aufIntZahlPruefen(ui->persoNumInVerwalterLineEdit, validInPersonDatei, persoNum);

        int stundenzahl;
        aufIntZahlPruefen(ui->stundenzahlInVerwalterLineEdit, validInPersonDatei, stundenzahl);

        double gehalt;
        aufDoubleZahlPruefen(ui->gehaltInVerwalterLineEdit, validInPersonDatei, gehalt);

        std::string abteilung;
        aufStringPruefen(ui->abteilungLineEdit, validInPersonDatei, abteilung);

        std::string buero;
        aufStringPruefen(ui->bueroLineEdit, validInPersonDatei, buero);

        if (validInPersonDatei){
            delete neuePerson;
            neuePerson = new Verwaltung(nachname,
                                    vorname,
                                    persoNum,
                                    stundenzahl,
                                    gehalt,
                                    abteilung,
                                    buero
                                    );
        }
        break;
    }
    case 3:{
        std::string vorname;
        aufStringPruefen(ui->vornameInWissLineEdit, validInPersonDatei, vorname);

        std::string nachname;
        aufStringPruefen(ui->nachnameInWissLineEdit, validInPersonDatei, nachname);

        int persoNum;
        aufIntZahlPruefen(ui->persoNumInWissLineEdit, validInPersonDatei, persoNum);

        int stundenzahl;
        aufIntZahlPruefen(ui->stundenzahlInWissLineEdit, validInPersonDatei, stundenzahl);

        double gehalt;
        aufDoubleZahlPruefen(ui->gehaltInWissLineEdit, validInPersonDatei, gehalt);

        std::string fachgebiet;
        aufStringPruefen(ui->fachgebietLineEdit, validInPersonDatei, fachgebiet);

        int studienanzahl;
        aufIntZahlPruefen(ui->anzahlStudienLineEdit, validInPersonDatei, studienanzahl);

        if (validInPersonDatei){
            delete neuePerson;
            neuePerson = new Wissenschaftler(nachname,
                                    vorname,
                                    persoNum,
                                    stundenzahl,
                                    gehalt,
                                    fachgebiet,
                                    studienanzahl
                                    );
        }
        break;
    }
    default:{
        neuePerson = nullptr;
        break;
    }
    }
}

Angestellter* personBearbeiten::getNeuePerson() const{
    return neuePerson;
}

