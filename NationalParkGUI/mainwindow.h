#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tierliste.h"
#include "personalliste.h"
#include "nationalparkgraph.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void aktualisiereWildtierListWidget();
    void aktualisierePersonalListWidget();
    void tierNeuBearbeiten();
    void personNeuBearbeiten();
    std::vector<Angestellter*> gefiltertePersonalList();
    std::vector<Spezies*> gefilterteAnimalList();

private slots:
    void on_tierverwaltungPushButton_clicked();

    void on_personenverwaltungPushButton_clicked();

    void on_zurueckInTierverwaltungsseitePushButton_clicked();

    void on_zurueckInPersonenverwaltungsseitePushButoon_clicked();

    void on_tierLadenPushButton_clicked();

    void on_tierSpeichernPushButton_clicked();

    void on_personenLadenPushButton_clicked();

    void on_personenSpeichernPushButton_clicked();

    void on_actionTiere_laden_JSON_triggered();

    void on_actionTiere_speichern_JSON_triggered();

    void on_actionPersonen_laden_JSON_triggered();

    void on_actionPersonen_speichern_JSON_triggered();

    void on_actionBeenden_triggered();

    void on_actionFull_screen_triggered();

    void on_actionMinimize_triggered();

    void on_actionNormal_triggered();

    void on_actiontier_json_triggered();

    void on_actionperson_json_triggered();

    void on_neuInPersonenVerwaltungsseitePushButton_clicked();

    void on_neuInTierverwaltungsseitePushButton_clicked();

    void on_personBearbeitenPushButton_clicked();

    void on_tierBearbeitenPushButton_clicked();

    void on_statistikTierPushButton_clicked();

    void on_statistikPersonPushButton_clicked();

    void on_tierSortierenPushButton_clicked();

    void on_personSortierenPushButton_clicked();

    void on_reptilCheckBox_toggled(bool checked);

    void on_saeugetierCheckBox_toggled(bool checked);

    void on_vogelCheckBox_toggled(bool checked);

    void on_rangerCheckBox_2_toggled(bool checked);

    void on_verwalterCheckBox_3_toggled(bool checked);

    void on_wissCheckBox_toggled(bool checked);

    void on_wegenetzPushButton_clicked();

    void on_actionOrteLaden_JSON_triggered();

    void on_actionWegeLaden_JSON_triggered();

private:
    Ui::MainWindow *ui;
    Tierliste animalList;
    Personalliste personalList;
    NationalparkGraph graph;
};
#endif // MAINWINDOW_H
