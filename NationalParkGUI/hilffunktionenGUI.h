#ifndef HILFFUNKTIONENGUI_H
#define HILFFUNKTIONENGUI_H
#include "mainwindow.h"
#include "ui_mainwindow.h"

void aufIntZahlPruefen(QLineEdit *lineEdit, bool &valid, int &attribut);
void aufDoubleZahlPruefen(QLineEdit *lineEdit, bool &valid, double &attribut);
void aufStringPruefen(QLineEdit *lineEdit, bool &valid, std::string &attribut);
void aufBoolPruefen(QLineEdit *lineEdit, bool &valid, bool &attribut);

#endif // HILFFUNKTIONENGUI_H
