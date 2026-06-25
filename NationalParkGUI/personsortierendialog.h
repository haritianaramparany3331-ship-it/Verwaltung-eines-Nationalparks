#ifndef PERSONSORTIERENDIALOG_H
#define PERSONSORTIERENDIALOG_H

#include <QDialog>
#include "angestellter.h"

namespace Ui {
class personSortierenDialog;
}

class personSortierenDialog : public QDialog
{
    Q_OBJECT

public:
    explicit personSortierenDialog(QWidget *parent, std::vector<Angestellter*> personal);
    ~personSortierenDialog();
    std::vector<Angestellter*> getSortierteListe() const;
    void aktualisiereVorschau();
    void sortiere();
    void zeigeVorschau();

private slots:
    void on_auswahlComboBox_currentTextChanged(const QString &arg1);

    void on_richtungRadioButton_toggled(bool checked);

    void on_referenzGehaltSpinBox_valueChanged(int arg1);

private:
    Ui::personSortierenDialog *ui;
    std::vector<Angestellter*> originalListe;
    std::vector<Angestellter*> sortierteListe;
    bool aufsteigend = true;
};

#endif // PERSONSORTIERENDIALOG_H
