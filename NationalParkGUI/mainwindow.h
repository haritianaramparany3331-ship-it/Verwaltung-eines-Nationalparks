#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tierliste.h"

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
    void aktualisiereListWidget();

private slots:
    void on_saeugetierPushButton_clicked();

    void on_vogelPushButton_clicked();

    void on_reptilPushButton_clicked();

    void on_binaerSpeichernPushButton_clicked();

    void on_binaerLadenPushButton_clicked();

private:
    Ui::MainWindow *ui;
    Tierliste animalList;
};
#endif // MAINWINDOW_H
