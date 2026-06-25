/********************************************************************************
** Form generated from reading UI file 'personbearbeiten.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONBEARBEITEN_H
#define UI_PERSONBEARBEITEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personBearbeiten
{
public:
    QAction *actionBeenden;
    QAction *actiontier_json;
    QAction *actionperson_json;
    QAction *actionFull_screen;
    QAction *actionMinimize;
    QAction *actionNormal;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *personBearbeitenHauptseite;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *berufWaehlenLabel;
    QPushButton *rangerWaehlenPushButton;
    QPushButton *verwalterWaehlenPushButton;
    QPushButton *wissenschaftlerWaehlenPushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *rangerBearbeitenSeite;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QPushButton *zurueckInRangerBearbeitenPushButton;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *nachnameInRangerLabel;
    QLineEdit *nachnameInRangerLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *vornameInRangerLabel;
    QLineEdit *vornameInRangerLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *persoNumInRangerLabel;
    QLineEdit *persoNumInRangerLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *stundenzahlInRangerLabel;
    QLineEdit *stundenzahlInRangerLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *gehaltInRangerLabel;
    QLineEdit *gehaltInRangerLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *revierLabel;
    QLineEdit *revierLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *einsatzbereichLabel;
    QLineEdit *einsatzbereichLineEdit;
    QSpacerItem *verticalSpacer_4;
    QPushButton *hinzufuegenInRangerBearbeitenPushButton;
    QWidget *verwalterBearbeitenSeite;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_8;
    QPushButton *zurueckInVerwalterPushButoon;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_16;
    QLabel *nachnameInVerwalterLabel;
    QLineEdit *nachnameInVerwalterLineEdit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *vornameInVerwalterLabel;
    QLineEdit *vornameInVerwalterLineEdit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *persoNumInVerwalterLabel;
    QLineEdit *persoNumInVerwalterLineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *stundenzahlInVerwLabel;
    QLineEdit *stundenzahlInVerwalterLineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *gehaltInVerwalterLabel;
    QLineEdit *gehaltInVerwalterLineEdit;
    QHBoxLayout *horizontalLayout_11;
    QLabel *abteilungLabel;
    QLineEdit *abteilungLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *bueroLabel;
    QLineEdit *bueroLineEdit;
    QSpacerItem *verticalSpacer_6;
    QPushButton *hinzufuegenInVerwalterPushButton;
    QWidget *wissenschaftlerBearbeitenSeite;
    QHBoxLayout *horizontalLayout_25;
    QVBoxLayout *verticalLayout_9;
    QPushButton *zurueckInWissPushButton;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_24;
    QLabel *nachnameInWissLabel;
    QLineEdit *nachnameInWissLineEdit;
    QHBoxLayout *horizontalLayout_23;
    QLabel *vornameInWissLabel;
    QLineEdit *vornameInWissLineEdit;
    QHBoxLayout *horizontalLayout_22;
    QLabel *persoNumInWissLabel;
    QLineEdit *persoNumInWissLineEdit;
    QHBoxLayout *horizontalLayout_21;
    QLabel *stundenzahlInWissLabel;
    QLineEdit *stundenzahlInWissLineEdit;
    QHBoxLayout *horizontalLayout_20;
    QLabel *gehaltInWissLabel;
    QLineEdit *gehaltInWissLineEdit;
    QHBoxLayout *horizontalLayout_19;
    QLabel *fachgebietLabel;
    QLineEdit *fachgebietLineEdit;
    QHBoxLayout *horizontalLayout_18;
    QLabel *anzahlStudienLabel;
    QLineEdit *anzahlStudienLineEdit;
    QSpacerItem *verticalSpacer_8;
    QPushButton *hinzufuegenInWissPushButoon;
    QMenuBar *menubar;
    QMenu *menuDatei;
    QMenu *menuDatei_ffnen;
    QMenu *menuView;
    QStatusBar *statusbar;

    void setupUi(QDialog *personBearbeiten)
    {
        if (personBearbeiten->objectName().isEmpty())
            personBearbeiten->setObjectName("personBearbeiten");
        personBearbeiten->resize(480, 640);
        actionBeenden = new QAction(personBearbeiten);
        actionBeenden->setObjectName("actionBeenden");
        actiontier_json = new QAction(personBearbeiten);
        actiontier_json->setObjectName("actiontier_json");
        actionperson_json = new QAction(personBearbeiten);
        actionperson_json->setObjectName("actionperson_json");
        actionFull_screen = new QAction(personBearbeiten);
        actionFull_screen->setObjectName("actionFull_screen");
        actionMinimize = new QAction(personBearbeiten);
        actionMinimize->setObjectName("actionMinimize");
        actionNormal = new QAction(personBearbeiten);
        actionNormal->setObjectName("actionNormal");
        centralwidget = new QWidget(personBearbeiten);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setGeometry(QRect(0, 0, 464, 276));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        personBearbeitenHauptseite = new QWidget();
        personBearbeitenHauptseite->setObjectName("personBearbeitenHauptseite");
        horizontalLayout = new QHBoxLayout(personBearbeitenHauptseite);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(180, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        berufWaehlenLabel = new QLabel(personBearbeitenHauptseite);
        berufWaehlenLabel->setObjectName("berufWaehlenLabel");

        verticalLayout_2->addWidget(berufWaehlenLabel);

        rangerWaehlenPushButton = new QPushButton(personBearbeitenHauptseite);
        rangerWaehlenPushButton->setObjectName("rangerWaehlenPushButton");

        verticalLayout_2->addWidget(rangerWaehlenPushButton);

        verwalterWaehlenPushButton = new QPushButton(personBearbeitenHauptseite);
        verwalterWaehlenPushButton->setObjectName("verwalterWaehlenPushButton");

        verticalLayout_2->addWidget(verwalterWaehlenPushButton);

        wissenschaftlerWaehlenPushButton = new QPushButton(personBearbeitenHauptseite);
        wissenschaftlerWaehlenPushButton->setObjectName("wissenschaftlerWaehlenPushButton");

        verticalLayout_2->addWidget(wissenschaftlerWaehlenPushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(180, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        stackedWidget->addWidget(personBearbeitenHauptseite);
        rangerBearbeitenSeite = new QWidget();
        rangerBearbeitenSeite->setObjectName("rangerBearbeitenSeite");
        horizontalLayout_9 = new QHBoxLayout(rangerBearbeitenSeite);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        zurueckInRangerBearbeitenPushButton = new QPushButton(rangerBearbeitenSeite);
        zurueckInRangerBearbeitenPushButton->setObjectName("zurueckInRangerBearbeitenPushButton");

        verticalLayout_3->addWidget(zurueckInRangerBearbeitenPushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_9->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        nachnameInRangerLabel = new QLabel(rangerBearbeitenSeite);
        nachnameInRangerLabel->setObjectName("nachnameInRangerLabel");

        horizontalLayout_8->addWidget(nachnameInRangerLabel);

        nachnameInRangerLineEdit = new QLineEdit(rangerBearbeitenSeite);
        nachnameInRangerLineEdit->setObjectName("nachnameInRangerLineEdit");

        horizontalLayout_8->addWidget(nachnameInRangerLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        vornameInRangerLabel = new QLabel(rangerBearbeitenSeite);
        vornameInRangerLabel->setObjectName("vornameInRangerLabel");

        horizontalLayout_7->addWidget(vornameInRangerLabel);

        vornameInRangerLineEdit = new QLineEdit(rangerBearbeitenSeite);
        vornameInRangerLineEdit->setObjectName("vornameInRangerLineEdit");

        horizontalLayout_7->addWidget(vornameInRangerLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        persoNumInRangerLabel = new QLabel(rangerBearbeitenSeite);
        persoNumInRangerLabel->setObjectName("persoNumInRangerLabel");

        horizontalLayout_6->addWidget(persoNumInRangerLabel);

        persoNumInRangerLineEdit = new QLineEdit(rangerBearbeitenSeite);
        persoNumInRangerLineEdit->setObjectName("persoNumInRangerLineEdit");

        horizontalLayout_6->addWidget(persoNumInRangerLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        stundenzahlInRangerLabel = new QLabel(rangerBearbeitenSeite);
        stundenzahlInRangerLabel->setObjectName("stundenzahlInRangerLabel");

        horizontalLayout_5->addWidget(stundenzahlInRangerLabel);

        stundenzahlInRangerLineEdit = new QLineEdit(rangerBearbeitenSeite);
        stundenzahlInRangerLineEdit->setObjectName("stundenzahlInRangerLineEdit");

        horizontalLayout_5->addWidget(stundenzahlInRangerLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        gehaltInRangerLabel = new QLabel(rangerBearbeitenSeite);
        gehaltInRangerLabel->setObjectName("gehaltInRangerLabel");

        horizontalLayout_4->addWidget(gehaltInRangerLabel);

        gehaltInRangerLineEdit = new QLineEdit(rangerBearbeitenSeite);
        gehaltInRangerLineEdit->setObjectName("gehaltInRangerLineEdit");

        horizontalLayout_4->addWidget(gehaltInRangerLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        revierLabel = new QLabel(rangerBearbeitenSeite);
        revierLabel->setObjectName("revierLabel");

        horizontalLayout_3->addWidget(revierLabel);

        revierLineEdit = new QLineEdit(rangerBearbeitenSeite);
        revierLineEdit->setObjectName("revierLineEdit");

        horizontalLayout_3->addWidget(revierLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        einsatzbereichLabel = new QLabel(rangerBearbeitenSeite);
        einsatzbereichLabel->setObjectName("einsatzbereichLabel");

        horizontalLayout_2->addWidget(einsatzbereichLabel);

        einsatzbereichLineEdit = new QLineEdit(rangerBearbeitenSeite);
        einsatzbereichLineEdit->setObjectName("einsatzbereichLineEdit");

        horizontalLayout_2->addWidget(einsatzbereichLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        hinzufuegenInRangerBearbeitenPushButton = new QPushButton(rangerBearbeitenSeite);
        hinzufuegenInRangerBearbeitenPushButton->setObjectName("hinzufuegenInRangerBearbeitenPushButton");

        verticalLayout_5->addWidget(hinzufuegenInRangerBearbeitenPushButton);


        horizontalLayout_9->addLayout(verticalLayout_5);

        stackedWidget->addWidget(rangerBearbeitenSeite);
        verwalterBearbeitenSeite = new QWidget();
        verwalterBearbeitenSeite->setObjectName("verwalterBearbeitenSeite");
        horizontalLayout_17 = new QHBoxLayout(verwalterBearbeitenSeite);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        zurueckInVerwalterPushButoon = new QPushButton(verwalterBearbeitenSeite);
        zurueckInVerwalterPushButoon->setObjectName("zurueckInVerwalterPushButoon");

        verticalLayout_8->addWidget(zurueckInVerwalterPushButoon);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);


        horizontalLayout_17->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        nachnameInVerwalterLabel = new QLabel(verwalterBearbeitenSeite);
        nachnameInVerwalterLabel->setObjectName("nachnameInVerwalterLabel");

        horizontalLayout_16->addWidget(nachnameInVerwalterLabel);

        nachnameInVerwalterLineEdit = new QLineEdit(verwalterBearbeitenSeite);
        nachnameInVerwalterLineEdit->setObjectName("nachnameInVerwalterLineEdit");

        horizontalLayout_16->addWidget(nachnameInVerwalterLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        vornameInVerwalterLabel = new QLabel(verwalterBearbeitenSeite);
        vornameInVerwalterLabel->setObjectName("vornameInVerwalterLabel");

        horizontalLayout_15->addWidget(vornameInVerwalterLabel);

        vornameInVerwalterLineEdit = new QLineEdit(verwalterBearbeitenSeite);
        vornameInVerwalterLineEdit->setObjectName("vornameInVerwalterLineEdit");

        horizontalLayout_15->addWidget(vornameInVerwalterLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        persoNumInVerwalterLabel = new QLabel(verwalterBearbeitenSeite);
        persoNumInVerwalterLabel->setObjectName("persoNumInVerwalterLabel");

        horizontalLayout_14->addWidget(persoNumInVerwalterLabel);

        persoNumInVerwalterLineEdit = new QLineEdit(verwalterBearbeitenSeite);
        persoNumInVerwalterLineEdit->setObjectName("persoNumInVerwalterLineEdit");

        horizontalLayout_14->addWidget(persoNumInVerwalterLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        stundenzahlInVerwLabel = new QLabel(verwalterBearbeitenSeite);
        stundenzahlInVerwLabel->setObjectName("stundenzahlInVerwLabel");

        horizontalLayout_13->addWidget(stundenzahlInVerwLabel);

        stundenzahlInVerwalterLineEdit = new QLineEdit(verwalterBearbeitenSeite);
        stundenzahlInVerwalterLineEdit->setObjectName("stundenzahlInVerwalterLineEdit");

        horizontalLayout_13->addWidget(stundenzahlInVerwalterLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        gehaltInVerwalterLabel = new QLabel(verwalterBearbeitenSeite);
        gehaltInVerwalterLabel->setObjectName("gehaltInVerwalterLabel");

        horizontalLayout_12->addWidget(gehaltInVerwalterLabel);

        gehaltInVerwalterLineEdit = new QLineEdit(verwalterBearbeitenSeite);
        gehaltInVerwalterLineEdit->setObjectName("gehaltInVerwalterLineEdit");

        horizontalLayout_12->addWidget(gehaltInVerwalterLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        abteilungLabel = new QLabel(verwalterBearbeitenSeite);
        abteilungLabel->setObjectName("abteilungLabel");

        horizontalLayout_11->addWidget(abteilungLabel);

        abteilungLineEdit = new QLineEdit(verwalterBearbeitenSeite);
        abteilungLineEdit->setObjectName("abteilungLineEdit");

        horizontalLayout_11->addWidget(abteilungLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        bueroLabel = new QLabel(verwalterBearbeitenSeite);
        bueroLabel->setObjectName("bueroLabel");

        horizontalLayout_10->addWidget(bueroLabel);

        bueroLineEdit = new QLineEdit(verwalterBearbeitenSeite);
        bueroLineEdit->setObjectName("bueroLineEdit");

        horizontalLayout_10->addWidget(bueroLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_10);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        hinzufuegenInVerwalterPushButton = new QPushButton(verwalterBearbeitenSeite);
        hinzufuegenInVerwalterPushButton->setObjectName("hinzufuegenInVerwalterPushButton");

        verticalLayout_7->addWidget(hinzufuegenInVerwalterPushButton);


        horizontalLayout_17->addLayout(verticalLayout_7);

        stackedWidget->addWidget(verwalterBearbeitenSeite);
        wissenschaftlerBearbeitenSeite = new QWidget();
        wissenschaftlerBearbeitenSeite->setObjectName("wissenschaftlerBearbeitenSeite");
        horizontalLayout_25 = new QHBoxLayout(wissenschaftlerBearbeitenSeite);
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        zurueckInWissPushButton = new QPushButton(wissenschaftlerBearbeitenSeite);
        zurueckInWissPushButton->setObjectName("zurueckInWissPushButton");

        verticalLayout_9->addWidget(zurueckInWissPushButton);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);


        horizontalLayout_25->addLayout(verticalLayout_9);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        nachnameInWissLabel = new QLabel(wissenschaftlerBearbeitenSeite);
        nachnameInWissLabel->setObjectName("nachnameInWissLabel");

        horizontalLayout_24->addWidget(nachnameInWissLabel);

        nachnameInWissLineEdit = new QLineEdit(wissenschaftlerBearbeitenSeite);
        nachnameInWissLineEdit->setObjectName("nachnameInWissLineEdit");

        horizontalLayout_24->addWidget(nachnameInWissLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_24);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        vornameInWissLabel = new QLabel(wissenschaftlerBearbeitenSeite);
        vornameInWissLabel->setObjectName("vornameInWissLabel");

        horizontalLayout_23->addWidget(vornameInWissLabel);

        vornameInWissLineEdit = new QLineEdit(wissenschaftlerBearbeitenSeite);
        vornameInWissLineEdit->setObjectName("vornameInWissLineEdit");

        horizontalLayout_23->addWidget(vornameInWissLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_23);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        persoNumInWissLabel = new QLabel(wissenschaftlerBearbeitenSeite);
        persoNumInWissLabel->setObjectName("persoNumInWissLabel");

        horizontalLayout_22->addWidget(persoNumInWissLabel);

        persoNumInWissLineEdit = new QLineEdit(wissenschaftlerBearbeitenSeite);
        persoNumInWissLineEdit->setObjectName("persoNumInWissLineEdit");

        horizontalLayout_22->addWidget(persoNumInWissLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_22);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        stundenzahlInWissLabel = new QLabel(wissenschaftlerBearbeitenSeite);
        stundenzahlInWissLabel->setObjectName("stundenzahlInWissLabel");

        horizontalLayout_21->addWidget(stundenzahlInWissLabel);

        stundenzahlInWissLineEdit = new QLineEdit(wissenschaftlerBearbeitenSeite);
        stundenzahlInWissLineEdit->setObjectName("stundenzahlInWissLineEdit");

        horizontalLayout_21->addWidget(stundenzahlInWissLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_21);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        gehaltInWissLabel = new QLabel(wissenschaftlerBearbeitenSeite);
        gehaltInWissLabel->setObjectName("gehaltInWissLabel");

        horizontalLayout_20->addWidget(gehaltInWissLabel);

        gehaltInWissLineEdit = new QLineEdit(wissenschaftlerBearbeitenSeite);
        gehaltInWissLineEdit->setObjectName("gehaltInWissLineEdit");

        horizontalLayout_20->addWidget(gehaltInWissLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_20);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        fachgebietLabel = new QLabel(wissenschaftlerBearbeitenSeite);
        fachgebietLabel->setObjectName("fachgebietLabel");

        horizontalLayout_19->addWidget(fachgebietLabel);

        fachgebietLineEdit = new QLineEdit(wissenschaftlerBearbeitenSeite);
        fachgebietLineEdit->setObjectName("fachgebietLineEdit");

        horizontalLayout_19->addWidget(fachgebietLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        anzahlStudienLabel = new QLabel(wissenschaftlerBearbeitenSeite);
        anzahlStudienLabel->setObjectName("anzahlStudienLabel");

        horizontalLayout_18->addWidget(anzahlStudienLabel);

        anzahlStudienLineEdit = new QLineEdit(wissenschaftlerBearbeitenSeite);
        anzahlStudienLineEdit->setObjectName("anzahlStudienLineEdit");

        horizontalLayout_18->addWidget(anzahlStudienLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_18);


        verticalLayout_11->addLayout(verticalLayout_10);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_8);

        hinzufuegenInWissPushButoon = new QPushButton(wissenschaftlerBearbeitenSeite);
        hinzufuegenInWissPushButoon->setObjectName("hinzufuegenInWissPushButoon");

        verticalLayout_11->addWidget(hinzufuegenInWissPushButoon);


        horizontalLayout_25->addLayout(verticalLayout_11);

        stackedWidget->addWidget(wissenschaftlerBearbeitenSeite);

        verticalLayout->addWidget(stackedWidget);

        menubar = new QMenuBar(personBearbeiten);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 480, 17));
        menuDatei = new QMenu(menubar);
        menuDatei->setObjectName("menuDatei");
        menuDatei_ffnen = new QMenu(menuDatei);
        menuDatei_ffnen->setObjectName("menuDatei_ffnen");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        statusbar = new QStatusBar(personBearbeiten);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(0, 0, 3, 22));

        menubar->addAction(menuDatei->menuAction());
        menubar->addAction(menuView->menuAction());
        menuDatei->addAction(menuDatei_ffnen->menuAction());
        menuDatei->addAction(actionBeenden);
        menuDatei_ffnen->addAction(actiontier_json);
        menuDatei_ffnen->addAction(actionperson_json);
        menuView->addAction(actionFull_screen);
        menuView->addAction(actionMinimize);
        menuView->addAction(actionNormal);

        retranslateUi(personBearbeiten);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(personBearbeiten);
    } // setupUi

    void retranslateUi(QDialog *personBearbeiten)
    {
        personBearbeiten->setWindowTitle(QCoreApplication::translate("personBearbeiten", "MainWindow", nullptr));
        actionBeenden->setText(QCoreApplication::translate("personBearbeiten", "Beenden", nullptr));
        actiontier_json->setText(QCoreApplication::translate("personBearbeiten", "tier.json", nullptr));
        actionperson_json->setText(QCoreApplication::translate("personBearbeiten", "person.json", nullptr));
        actionFull_screen->setText(QCoreApplication::translate("personBearbeiten", "Full screen", nullptr));
        actionMinimize->setText(QCoreApplication::translate("personBearbeiten", "Minimize", nullptr));
        actionNormal->setText(QCoreApplication::translate("personBearbeiten", "Normal", nullptr));
        berufWaehlenLabel->setText(QCoreApplication::translate("personBearbeiten", "Beruf w\303\244hlen", nullptr));
        rangerWaehlenPushButton->setText(QCoreApplication::translate("personBearbeiten", "Ranger", nullptr));
        verwalterWaehlenPushButton->setText(QCoreApplication::translate("personBearbeiten", "Verwalter", nullptr));
        wissenschaftlerWaehlenPushButton->setText(QCoreApplication::translate("personBearbeiten", "Wissenschaftler", nullptr));
        zurueckInRangerBearbeitenPushButton->setText(QCoreApplication::translate("personBearbeiten", "Zur\303\274ck", nullptr));
        nachnameInRangerLabel->setText(QCoreApplication::translate("personBearbeiten", "Nachname:", nullptr));
        vornameInRangerLabel->setText(QCoreApplication::translate("personBearbeiten", "Vorname:", nullptr));
        persoNumInRangerLabel->setText(QCoreApplication::translate("personBearbeiten", "Personalnummer:", nullptr));
        stundenzahlInRangerLabel->setText(QCoreApplication::translate("personBearbeiten", "Stundenzahl:", nullptr));
        gehaltInRangerLabel->setText(QCoreApplication::translate("personBearbeiten", "Gehalt:", nullptr));
        revierLabel->setText(QCoreApplication::translate("personBearbeiten", "Revier:", nullptr));
        einsatzbereichLabel->setText(QCoreApplication::translate("personBearbeiten", "Einsatzbereich:", nullptr));
        hinzufuegenInRangerBearbeitenPushButton->setText(QCoreApplication::translate("personBearbeiten", "Hinzuf\303\274gen", nullptr));
        zurueckInVerwalterPushButoon->setText(QCoreApplication::translate("personBearbeiten", "Zur\303\274ck", nullptr));
        nachnameInVerwalterLabel->setText(QCoreApplication::translate("personBearbeiten", "Nachname:", nullptr));
        vornameInVerwalterLabel->setText(QCoreApplication::translate("personBearbeiten", "Vorname:", nullptr));
        persoNumInVerwalterLabel->setText(QCoreApplication::translate("personBearbeiten", "Personalnummer:", nullptr));
        stundenzahlInVerwLabel->setText(QCoreApplication::translate("personBearbeiten", "Stundenzahl:", nullptr));
        gehaltInVerwalterLabel->setText(QCoreApplication::translate("personBearbeiten", "Gehalt:", nullptr));
        abteilungLabel->setText(QCoreApplication::translate("personBearbeiten", "Abteilung:", nullptr));
        bueroLabel->setText(QCoreApplication::translate("personBearbeiten", "B\303\274ro:", nullptr));
        hinzufuegenInVerwalterPushButton->setText(QCoreApplication::translate("personBearbeiten", "Hinzuf\303\274gen", nullptr));
        zurueckInWissPushButton->setText(QCoreApplication::translate("personBearbeiten", "Zur\303\274ck", nullptr));
        nachnameInWissLabel->setText(QCoreApplication::translate("personBearbeiten", "Nachname:", nullptr));
        vornameInWissLabel->setText(QCoreApplication::translate("personBearbeiten", "Vorname:", nullptr));
        persoNumInWissLabel->setText(QCoreApplication::translate("personBearbeiten", "Personalnummer:", nullptr));
        stundenzahlInWissLabel->setText(QCoreApplication::translate("personBearbeiten", "Stundenzahl:", nullptr));
        gehaltInWissLabel->setText(QCoreApplication::translate("personBearbeiten", "Gehalt:", nullptr));
        fachgebietLabel->setText(QCoreApplication::translate("personBearbeiten", "Fachgebiet:", nullptr));
        anzahlStudienLabel->setText(QCoreApplication::translate("personBearbeiten", "Studienanzahl:", nullptr));
        hinzufuegenInWissPushButoon->setText(QCoreApplication::translate("personBearbeiten", "Hinzuf\303\274gen", nullptr));
        menuDatei->setTitle(QCoreApplication::translate("personBearbeiten", "Datei", nullptr));
        menuDatei_ffnen->setTitle(QCoreApplication::translate("personBearbeiten", "Datei \303\266ffnen", nullptr));
        menuView->setTitle(QCoreApplication::translate("personBearbeiten", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personBearbeiten: public Ui_personBearbeiten {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONBEARBEITEN_H
