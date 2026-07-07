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
private:
    Ui::wegenetzFenster *ui;
    NationalparkGraph &graph;
    QGraphicsScene *scene = nullptr;
    std::map<int, QGraphicsEllipseItem*> ortKnoten;
    std::map<int, QGraphicsLineItem*> wegeKanten;
    static constexpr int KNOTEN_RADIUS = 8;
};

#endif // WEGENETZFENSTER_H
