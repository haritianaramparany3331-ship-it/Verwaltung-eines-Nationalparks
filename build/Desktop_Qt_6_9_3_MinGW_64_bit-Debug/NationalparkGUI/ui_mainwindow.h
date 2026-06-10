/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTiere_laden_JSON;
    QAction *actionTiere_speichern_JSON;
    QAction *actionPersonen_laden_JSON;
    QAction *actionPersonen_speichern_JSON;
    QAction *actionBeenden;
    QAction *actionFull_screen;
    QAction *actionMinimize;
    QAction *actionNormal;
    QAction *actiontier_json;
    QAction *actionperson_json;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *hauptseite;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *nationalparkManagerLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *tierverwaltungPushButton;
    QPushButton *personenverwaltungPushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tierverwaltungsseite;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QPushButton *zurueckInTierverwaltungsseitePushButton;
    QPushButton *neuInTierverwaltungsseitePushButton;
    QPushButton *tierLadenPushButton;
    QPushButton *tierSpeichernPushButton;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *tiereImParkLabel;
    QListWidget *tierListWidget;
    QSpacerItem *horizontalSpacer_6;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *zurueckInPersonenverwaltungsseitePushButoon;
    QPushButton *neuInPersonenVerwaltungsseitePushButton;
    QPushButton *personenLadenPushButton;
    QPushButton *personenSpeichernPushButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *mitarbeiterImParkLabel;
    QListWidget *personenListWidget;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menuBar;
    QMenu *menuDatei;
    QMenu *menuDateien;
    QMenu *menuLaden_JSON;
    QMenu *menuSpeichern_JSON;
    QMenu *menuType_Here;
    QMenu *menuFenster;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(526, 248);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"}\n"
"\n"
""));
        actionTiere_laden_JSON = new QAction(MainWindow);
        actionTiere_laden_JSON->setObjectName("actionTiere_laden_JSON");
        actionTiere_speichern_JSON = new QAction(MainWindow);
        actionTiere_speichern_JSON->setObjectName("actionTiere_speichern_JSON");
        actionPersonen_laden_JSON = new QAction(MainWindow);
        actionPersonen_laden_JSON->setObjectName("actionPersonen_laden_JSON");
        actionPersonen_speichern_JSON = new QAction(MainWindow);
        actionPersonen_speichern_JSON->setObjectName("actionPersonen_speichern_JSON");
        actionBeenden = new QAction(MainWindow);
        actionBeenden->setObjectName("actionBeenden");
        actionFull_screen = new QAction(MainWindow);
        actionFull_screen->setObjectName("actionFull_screen");
        actionMinimize = new QAction(MainWindow);
        actionMinimize->setObjectName("actionMinimize");
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName("actionNormal");
        actiontier_json = new QAction(MainWindow);
        actiontier_json->setObjectName("actiontier_json");
        actionperson_json = new QAction(MainWindow);
        actionperson_json->setObjectName("actionperson_json");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        hauptseite = new QWidget();
        hauptseite->setObjectName("hauptseite");
        verticalLayout_3 = new QVBoxLayout(hauptseite);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        nationalparkManagerLabel = new QLabel(hauptseite);
        nationalparkManagerLabel->setObjectName("nationalparkManagerLabel");

        verticalLayout_2->addWidget(nationalparkManagerLabel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tierverwaltungPushButton = new QPushButton(hauptseite);
        tierverwaltungPushButton->setObjectName("tierverwaltungPushButton");

        horizontalLayout->addWidget(tierverwaltungPushButton);

        personenverwaltungPushButton = new QPushButton(hauptseite);
        personenverwaltungPushButton->setObjectName("personenverwaltungPushButton");

        horizontalLayout->addWidget(personenverwaltungPushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(hauptseite);
        tierverwaltungsseite = new QWidget();
        tierverwaltungsseite->setObjectName("tierverwaltungsseite");
        horizontalLayout_4 = new QHBoxLayout(tierverwaltungsseite);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        zurueckInTierverwaltungsseitePushButton = new QPushButton(tierverwaltungsseite);
        zurueckInTierverwaltungsseitePushButton->setObjectName("zurueckInTierverwaltungsseitePushButton");

        verticalLayout_7->addWidget(zurueckInTierverwaltungsseitePushButton);

        neuInTierverwaltungsseitePushButton = new QPushButton(tierverwaltungsseite);
        neuInTierverwaltungsseitePushButton->setObjectName("neuInTierverwaltungsseitePushButton");

        verticalLayout_7->addWidget(neuInTierverwaltungsseitePushButton);

        tierLadenPushButton = new QPushButton(tierverwaltungsseite);
        tierLadenPushButton->setObjectName("tierLadenPushButton");

        verticalLayout_7->addWidget(tierLadenPushButton);

        tierSpeichernPushButton = new QPushButton(tierverwaltungsseite);
        tierSpeichernPushButton->setObjectName("tierSpeichernPushButton");

        verticalLayout_7->addWidget(tierSpeichernPushButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);


        horizontalLayout_4->addLayout(verticalLayout_7);

        horizontalSpacer_5 = new QSpacerItem(38, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        tiereImParkLabel = new QLabel(tierverwaltungsseite);
        tiereImParkLabel->setObjectName("tiereImParkLabel");

        verticalLayout_6->addWidget(tiereImParkLabel);

        tierListWidget = new QListWidget(tierverwaltungsseite);
        tierListWidget->setObjectName("tierListWidget");

        verticalLayout_6->addWidget(tierListWidget);


        horizontalLayout_4->addLayout(verticalLayout_6);

        horizontalSpacer_6 = new QSpacerItem(38, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        stackedWidget->addWidget(tierverwaltungsseite);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        horizontalLayout_3 = new QHBoxLayout(page_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        zurueckInPersonenverwaltungsseitePushButoon = new QPushButton(page_4);
        zurueckInPersonenverwaltungsseitePushButoon->setObjectName("zurueckInPersonenverwaltungsseitePushButoon");

        verticalLayout_4->addWidget(zurueckInPersonenverwaltungsseitePushButoon);

        neuInPersonenVerwaltungsseitePushButton = new QPushButton(page_4);
        neuInPersonenVerwaltungsseitePushButton->setObjectName("neuInPersonenVerwaltungsseitePushButton");

        verticalLayout_4->addWidget(neuInPersonenVerwaltungsseitePushButton);

        personenLadenPushButton = new QPushButton(page_4);
        personenLadenPushButton->setObjectName("personenLadenPushButton");

        verticalLayout_4->addWidget(personenLadenPushButton);

        personenSpeichernPushButton = new QPushButton(page_4);
        personenSpeichernPushButton->setObjectName("personenSpeichernPushButton");

        verticalLayout_4->addWidget(personenSpeichernPushButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(27, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        mitarbeiterImParkLabel = new QLabel(page_4);
        mitarbeiterImParkLabel->setObjectName("mitarbeiterImParkLabel");

        verticalLayout_5->addWidget(mitarbeiterImParkLabel);

        personenListWidget = new QListWidget(page_4);
        personenListWidget->setObjectName("personenListWidget");

        verticalLayout_5->addWidget(personenListWidget);


        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalSpacer_4 = new QSpacerItem(27, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        stackedWidget->addWidget(page_4);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 526, 19));
        menuDatei = new QMenu(menuBar);
        menuDatei->setObjectName("menuDatei");
        menuDateien = new QMenu(menuDatei);
        menuDateien->setObjectName("menuDateien");
        menuLaden_JSON = new QMenu(menuDatei);
        menuLaden_JSON->setObjectName("menuLaden_JSON");
        menuSpeichern_JSON = new QMenu(menuDatei);
        menuSpeichern_JSON->setObjectName("menuSpeichern_JSON");
        menuType_Here = new QMenu(menuDatei);
        menuType_Here->setObjectName("menuType_Here");
        menuFenster = new QMenu(menuBar);
        menuFenster->setObjectName("menuFenster");
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDatei->menuAction());
        menuBar->addAction(menuFenster->menuAction());
        menuDatei->addAction(menuDateien->menuAction());
        menuDatei->addAction(menuLaden_JSON->menuAction());
        menuDatei->addAction(menuSpeichern_JSON->menuAction());
        menuDatei->addAction(actionBeenden);
        menuDatei->addAction(menuType_Here->menuAction());
        menuDateien->addAction(actiontier_json);
        menuDateien->addAction(actionperson_json);
        menuLaden_JSON->addAction(actionTiere_laden_JSON);
        menuLaden_JSON->addAction(actionPersonen_laden_JSON);
        menuSpeichern_JSON->addAction(actionTiere_speichern_JSON);
        menuSpeichern_JSON->addAction(actionPersonen_speichern_JSON);
        menuFenster->addAction(actionFull_screen);
        menuFenster->addAction(actionMinimize);
        menuFenster->addAction(actionNormal);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionTiere_laden_JSON->setText(QCoreApplication::translate("MainWindow", "Tiere", nullptr));
        actionTiere_speichern_JSON->setText(QCoreApplication::translate("MainWindow", "Tiere", nullptr));
        actionPersonen_laden_JSON->setText(QCoreApplication::translate("MainWindow", "Personen", nullptr));
        actionPersonen_speichern_JSON->setText(QCoreApplication::translate("MainWindow", "Personen", nullptr));
        actionBeenden->setText(QCoreApplication::translate("MainWindow", "Beenden", nullptr));
        actionFull_screen->setText(QCoreApplication::translate("MainWindow", "Full screen", nullptr));
        actionMinimize->setText(QCoreApplication::translate("MainWindow", "Minimize", nullptr));
        actionNormal->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        actiontier_json->setText(QCoreApplication::translate("MainWindow", "tier.json", nullptr));
        actionperson_json->setText(QCoreApplication::translate("MainWindow", "person.json", nullptr));
        nationalparkManagerLabel->setText(QCoreApplication::translate("MainWindow", "Nationalpark Manager", nullptr));
        tierverwaltungPushButton->setText(QCoreApplication::translate("MainWindow", "Tierverwaltung", nullptr));
        personenverwaltungPushButton->setText(QCoreApplication::translate("MainWindow", "Personenverwaltung", nullptr));
        zurueckInTierverwaltungsseitePushButton->setText(QCoreApplication::translate("MainWindow", "Zur\303\274ck", nullptr));
        neuInTierverwaltungsseitePushButton->setText(QCoreApplication::translate("MainWindow", "Neu", nullptr));
        tierLadenPushButton->setText(QCoreApplication::translate("MainWindow", "Tier laden (JSON)", nullptr));
        tierSpeichernPushButton->setText(QCoreApplication::translate("MainWindow", "Tier speichern (JSON)", nullptr));
        tiereImParkLabel->setText(QCoreApplication::translate("MainWindow", "Tiere im Park:", nullptr));
        zurueckInPersonenverwaltungsseitePushButoon->setText(QCoreApplication::translate("MainWindow", "Zur\303\274ck", nullptr));
        neuInPersonenVerwaltungsseitePushButton->setText(QCoreApplication::translate("MainWindow", "Neu", nullptr));
        personenLadenPushButton->setText(QCoreApplication::translate("MainWindow", "Personen laden (JSON)", nullptr));
        personenSpeichernPushButton->setText(QCoreApplication::translate("MainWindow", "Personen speichern (JSON)", nullptr));
        mitarbeiterImParkLabel->setText(QCoreApplication::translate("MainWindow", "Mitarbeiter im Park:", nullptr));
        menuDatei->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuDateien->setTitle(QCoreApplication::translate("MainWindow", "Dateien \303\266ffnen", nullptr));
        menuLaden_JSON->setTitle(QCoreApplication::translate("MainWindow", "Laden (JSON)", nullptr));
        menuSpeichern_JSON->setTitle(QCoreApplication::translate("MainWindow", "Speichern (JSON)", nullptr));
        menuType_Here->setTitle(QCoreApplication::translate("MainWindow", "Type Here", nullptr));
        menuFenster->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
