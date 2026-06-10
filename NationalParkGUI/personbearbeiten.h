#ifndef PERSONBEARBEITEN_H
#define PERSONBEARBEITEN_H

#include "angestellter.h"
#include <QDialog>

namespace Ui {
class personBearbeiten;
}

class personBearbeiten : public QDialog
{
    Q_OBJECT

public:
    explicit personBearbeiten(QWidget *parent = nullptr);
    ~personBearbeiten();
    Angestellter* getNeuePerson() const;
    void erstelleNeuePerson();

private slots:
    void on_actiontier_json_triggered();

    void on_actionperson_json_triggered();

    void on_actionBeenden_triggered();

    void on_actionFull_screen_triggered();

    void on_actionMinimize_triggered();

    void on_actionNormal_triggered();

    void on_rangerWaehlenPushButton_clicked();

    void on_verwalterWaehlenPushButton_clicked();

    void on_wissenschaftlerWaehlenPushButton_clicked();

    void on_zurueckInRangerBearbeitenPushButton_clicked();

    void on_zurueckInVerwalterPushButoon_clicked();

    void on_zurueckInWissPushButton_clicked();

    void on_hinzufuegenInRangerBearbeitenPushButton_clicked();

    void on_hinzufuegenInVerwalterPushButton_clicked();

    void on_hinzufuegenInWissPushButoon_clicked();

private:
    Ui::personBearbeiten *ui;
    Angestellter* neuePerson;
};

#endif // PERSONBEARBEITEN_H
