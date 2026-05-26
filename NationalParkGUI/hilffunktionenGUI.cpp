#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hilffunktionenGUI.h"

void aufIntZahlPruefen(QLineEdit *lineEdit, bool &valid, int &attribut){
    bool ok;
    QString string = lineEdit->text();
    string.toDouble(&ok);
    if(!ok || string.isEmpty()){
        lineEdit->setText("Falsch");
        valid = false;
    }
    attribut = string.toInt();
}

void aufDoubleZahlPruefen(QLineEdit *lineEdit, bool &valid, double &attribut){
    bool ok;
    QString string = lineEdit->text();
    string.toDouble(&ok);
    if(!ok || string.isEmpty()){
        lineEdit->setText("Falsch");
        valid = false;
    }
    attribut = string.toDouble();
}

void aufStringPruefen(QLineEdit *lineEdit, bool &valid, std::string &attribut){
    bool ok;
    QString string = lineEdit->text();
    string.toDouble(&ok);
    if(ok || string.isEmpty()){
        lineEdit->setText("Falsch");
        valid = false;
    }
    attribut = string.toStdString();
}

void aufBoolPruefen(QLineEdit *lineEdit, bool &valid, bool &attribut){
    bool ok;
    QString string = lineEdit->text();
    double checkBool = string.toDouble(&ok);
    if (!ok || (checkBool != 0 && checkBool != 1) || string.isEmpty()){
        lineEdit->setText("Falsch");
        valid = false;
    }
    attribut = (checkBool == 1);
}
