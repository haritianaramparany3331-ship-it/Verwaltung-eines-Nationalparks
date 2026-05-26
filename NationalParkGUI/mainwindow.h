#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tierliste.h"
#include "personalliste.h"

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

private slots:
    void on_saeugetierPushButton_clicked();

    void on_vogelPushButton_clicked();

    void on_reptilPushButton_clicked();

    void on_binaerSpeichernPushButton_clicked();

    void on_binaerLadenPushButton_clicked();

    void on_rangerPushButton_clicked();

    void on_verwaltungPushButton_clicked();

    void on_wissenschaftlerinPushButton_clicked();

    void on_csvSpeichernPushButton_clicked();

    void on_csvLadenPushButton_clicked();

    void on_actionPersonal_csv_triggered();

    void on_actionFull_Screen_triggered();

    void on_actionMinimize_triggered();

    void on_actionNormal_triggered();

private:
    Ui::MainWindow *ui;
    Tierliste animalList;
    Personalliste personalList;
};
#endif // MAINWINDOW_H
