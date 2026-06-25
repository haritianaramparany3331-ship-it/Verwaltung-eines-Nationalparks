#ifndef TIERSORTIERENDIALOG_H
#define TIERSORTIERENDIALOG_H

#include <QDialog>
#include "spezies.h"
#include <vector>

namespace Ui {
class tierSortierenDialog;
}

class tierSortierenDialog : public QDialog
{
    Q_OBJECT

public:
    explicit tierSortierenDialog(QWidget *parent, std::vector<Spezies*> tiere);
    ~tierSortierenDialog();
    std::vector<Spezies*> getSortierteListe() const;
    void aktualisiereVorschau();
    void sortiere();
    void zeigeVorschau();

private slots:
    void on_AuswahlTierComboBox_currentTextChanged(const QString &arg1);

    void on_richtungTierRadioButton_toggled(bool checked);

    void on_referenzAlterSpinBox_valueChanged(int arg1);

private:
    Ui::tierSortierenDialog *ui;
    std::vector<Spezies*> originalListe;
    std::vector<Spezies*> sortierteListe;
    bool aufsteigend = true;
};

#endif // TIERSORTIERENDIALOG_H
