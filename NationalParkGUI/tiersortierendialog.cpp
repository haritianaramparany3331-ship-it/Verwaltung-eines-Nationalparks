#include "tiersortierendialog.h"
#include "ui_tiersortierendialog.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>

tierSortierenDialog::tierSortierenDialog(QWidget *parent, std::vector<Spezies*> tiere)
    : QDialog(parent)
    , ui(new Ui::tierSortierenDialog), originalListe(std::move(tiere))
{
    ui->setupUi(this);
    aktualisiereVorschau();
}

tierSortierenDialog::~tierSortierenDialog()
{
    delete ui;
}

void tierSortierenDialog::aktualisiereVorschau(){
    aufsteigend = ui->richtungTierRadioButton->isChecked();
    sortiere();
    zeigeVorschau();
}

void tierSortierenDialog::sortiere(){
    sortierteListe = originalListe;
    QString auswahl = ui->AuswahlTierComboBox->currentText();
    int referenz = ui->referenzAlterSpinBox->value();
    auto vergleich = [&](Spezies *a, Spezies *b) -> bool{
        if (auswahl == "Bezeichnung"){
            return aufsteigend ? a->getBezeichnung() < b->getBezeichnung()
                               : a->getBezeichnung() > b->getBezeichnung();
        }
        double wertA = 0, wertB = 0;
        if (auswahl == "Alter"){
            wertA = a->getAlter();
            wertB = b->getAlter();
        }
        else if (auswahl == "Differenz zum Referenzalter"){
            wertA = std::abs(a->getAlter() - referenz);
            wertB = std::abs(b->getAlter() - referenz);
        }
        return aufsteigend ? wertA < wertB
                           : wertA > wertB;
    };

    std::sort(sortierteListe.begin(), sortierteListe.end(), vergleich);
}

void tierSortierenDialog::zeigeVorschau(){
    ui->tierSortierenListWidget->clear();
    QString auswahl = ui->AuswahlTierComboBox->currentText();
    int referenz = ui->referenzAlterSpinBox->value();
    bool zeigeDifferenz = (auswahl == "Differenz zum Referenzalter");
    for (const auto &tier : sortierteListe){
        std::string text = tier->getBezeichnung() +
                           "                                  " + std::to_string(tier->getAlter());

        if (zeigeDifferenz){
            int differenz = std::abs(tier->getAlter() - referenz);
            text = text + "                                  " + std::to_string(differenz);
        }
        ui->tierSortierenListWidget->addItem(QString::fromStdString(text));
    }
}

std::vector<Spezies*> tierSortierenDialog::getSortierteListe() const{
    return sortierteListe;
}

void tierSortierenDialog::on_AuswahlTierComboBox_currentTextChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    aktualisiereVorschau();
}

void tierSortierenDialog::on_richtungTierRadioButton_toggled(bool checked)
{
    Q_UNUSED(checked);
    aktualisiereVorschau();
}


void tierSortierenDialog::on_referenzAlterSpinBox_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    aktualisiereVorschau();
}

