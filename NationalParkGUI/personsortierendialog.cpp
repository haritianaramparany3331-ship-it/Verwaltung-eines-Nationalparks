#include "personsortierendialog.h"
#include "ui_personsortierendialog.h"
#include <algorithm>
#include <cmath>
#include <iostream>

personSortierenDialog::personSortierenDialog(QWidget *parent, std::vector<Angestellter*> personal)
    : QDialog(parent)
    , ui(new Ui::personSortierenDialog), originalListe(std::move(personal))
{
    ui->setupUi(this);
    aktualisiereVorschau();
}

personSortierenDialog::~personSortierenDialog()
{
    delete ui;
}

void personSortierenDialog::aktualisiereVorschau(){
    aufsteigend = ui->richtungRadioButton->isChecked();
    sortiere();
    zeigeVorschau();
}

void personSortierenDialog::sortiere(){
    sortierteListe = originalListe;
    QString auswahl = ui->auswahlComboBox->currentText();
    int referenz = ui->referenzGehaltSpinBox->value();
    auto vergleich = [&](Angestellter *a, Angestellter *b) -> bool{
        double wertA = 0, wertB = 0;
        if (auswahl == "Personalnummer"){
            wertA = a->getPersonalnummer();
            wertB = b->getPersonalnummer();
        }
        else if (auswahl == "Gehalt"){
            wertA = a->getGehalt();
            wertB = b->getGehalt();
        }
        else if (auswahl == "Differenz zum Referenzgehalt"){
            wertA = std::abs(a->getGehalt() - referenz);
            wertB = std::abs(b->getGehalt() - referenz);
        }
        return aufsteigend ? wertA < wertB
                           : wertA > wertB;
    };

    std::sort(sortierteListe.begin(), sortierteListe.end(), vergleich);
}

void personSortierenDialog::zeigeVorschau(){
    ui->sortierungListWidget->clear();
    QString auswahl = ui->auswahlComboBox->currentText();
    int referenz = ui->referenzGehaltSpinBox->value();
    bool zeigeDifferenz = (auswahl == "Differenz zum Referenzgehalt");
    for (const auto &person : sortierteListe){
        std::string text = std::to_string(person->getPersonalnummer()) +
                           "                                  " + std::to_string(person->getGehalt());

        if (zeigeDifferenz){
            int differenz = std::abs(person->getGehalt() - referenz);
            text = text + "                                  " + std::to_string(differenz);
        }
        ui->sortierungListWidget->addItem(QString::fromStdString(text));
    }
}

std::vector<Angestellter*> personSortierenDialog::getSortierteListe() const{
    return sortierteListe;
}

void personSortierenDialog::on_auswahlComboBox_currentTextChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    aktualisiereVorschau();
}

void personSortierenDialog::on_richtungRadioButton_toggled(bool checked)
{
    Q_UNUSED(checked);
    aktualisiereVorschau();
}


void personSortierenDialog::on_referenzGehaltSpinBox_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    aktualisiereVorschau();
}

