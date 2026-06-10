#ifndef TIERBEARBEITENDIALOG_H
#define TIERBEARBEITENDIALOG_H

#include <QDialog>
#include "spezies.h"

namespace Ui {
class tierBearbeitenDialog;
}

class tierBearbeitenDialog : public QDialog
{
    Q_OBJECT

public:
    explicit tierBearbeitenDialog(QWidget *parent = nullptr);
    ~tierBearbeitenDialog();
    Spezies* getNeuesTier() const;
    void erstelleNeuesTier();

private slots:
    void on_actiontiere_json_2_triggered();

    void on_actionpersonal_json_triggered();

    void on_actionBeenden_triggered();

    void on_actionFull_screen_triggered();

    void on_actionMinimize_triggered();

    void on_actionNormal_triggered();

    void on_saeugetierWaehlenPushButton_clicked();

    void on_reptilWaehlenPushButton_clicked();

    void on_vogelWaehlenPushButton_clicked();

    void on_zurueckInSaeugetierPushButton_clicked();

    void on_zurueckInReptilPushButton_clicked();

    void on_zurueckInVogelPushButton_clicked();

    void on_hinzufuegenInSaeugetierPushButton_clicked();

    void on_hinzufuegenInReptilPushButton_clicked();

    void on_hinzufuegenInVogelPushButton_clicked();

private:
    Ui::tierBearbeitenDialog *ui;
    Spezies* neuesTier = nullptr;
};

#endif // TIERBEARBEITENDIALOG_H
