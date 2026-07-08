#ifndef WEGENETZFENSTER_H
#define WEGENETZFENSTER_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>
#include <vector>
#include <map>

#include "nationalparkgraph.h"

namespace Ui {
class wegenetzFenster;
}

class wegenetzFenster : public QDialog
{
    Q_OBJECT

public:
    explicit wegenetzFenster(NationalparkGraph &graph,
                             QWidget *parent = nullptr);
    ~wegenetzFenster();
    void baueOberflaeche();
    void zeichneKarte();
    void aktualisiereWegSperrenComboBox();
    void aktualisiereOrtComboBoxen();
    void loescheMarkierung();
    void markiereOrte(const std::vector<int> &orteIds);
    void markierePfad(const std::vector<int> &pfad);
    void loeschePfadMarkierung();
private slots:
    void on_wegEntsperrenPushButton_clicked();

    void on_wegSperrenPushButton_clicked();

    void on_bfsMarkierenPushButton_clicked();

    void on_bfsMarkierungEntfernenPushButton_clicked();

    void on_dijkstraStartenPushButton_clicked();

    void on_pfadmarkierungEntfernenPushButton_clicked();

private:
    Ui::wegenetzFenster *ui;
    NationalparkGraph &graph;
    QGraphicsScene *scene = nullptr;
    std::map<int, QGraphicsEllipseItem*> ortKnoten;
    std::map<int, QGraphicsLineItem*> wegeKanten;
    std::vector<int> aktuellerPfad;
    static constexpr int KNOTEN_RADIUS = 8;
};

#endif // WEGENETZFENSTER_H
