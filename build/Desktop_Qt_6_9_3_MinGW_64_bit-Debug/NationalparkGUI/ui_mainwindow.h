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
#include <QtWidgets/QCheckBox>
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
    QAction *actionOrteLaden_JSON;
    QAction *actionWegeLaden_JSON;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_9;
    QStackedWidget *stackedWidget;
    QWidget *hauptseite;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *nationalparkManagerLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *tierverwaltungPushButton;
    QPushButton *personenverwaltungPushButton;
    QPushButton *wegenetzPushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tierverwaltungsseite;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_7;
    QPushButton *zurueckInTierverwaltungsseitePushButton;
    QPushButton *neuInTierverwaltungsseitePushButton;
    QPushButton *tierLadenPushButton;
    QPushButton *tierSpeichernPushButton;
    QPushButton *tierBearbeitenPushButton;
    QPushButton *statistikTierPushButton;
    QPushButton *tierSortierenPushButton;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *tiereImParkLabel;
    QListWidget *tierListWidget;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *reptilCheckBox;
    QCheckBox *saeugetierCheckBox;
    QCheckBox *vogelCheckBox;
    QSpacerItem *horizontalSpacer_6;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QPushButton *zurueckInPersonenverwaltungsseitePushButoon;
    QPushButton *neuInPersonenVerwaltungsseitePushButton;
    QPushButton *personenLadenPushButton;
    QPushButton *personenSpeichernPushButton;
    QPushButton *personBearbeitenPushButton;
    QPushButton *statistikPersonPushButton;
    QPushButton *personSortierenPushButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *mitarbeiterImParkLabel;
    QListWidget *personenListWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *rangerCheckBox_2;
    QCheckBox *verwalterCheckBox_3;
    QCheckBox *wissCheckBox;
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
        actionOrteLaden_JSON = new QAction(MainWindow);
        actionOrteLaden_JSON->setObjectName("actionOrteLaden_JSON");
        actionWegeLaden_JSON = new QAction(MainWindow);
        actionWegeLaden_JSON->setObjectName("actionWegeLaden_JSON");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_9 = new QHBoxLayout(centralwidget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        QFont font;
        font.setBold(true);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8("color: rgb(101, 255, 127);"));
        hauptseite = new QWidget();
        hauptseite->setObjectName("hauptseite");
        horizontalLayout_10 = new QHBoxLayout(hauptseite);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        nationalparkManagerLabel = new QLabel(hauptseite);
        nationalparkManagerLabel->setObjectName("nationalparkManagerLabel");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminal")});
        font1.setPointSize(18);
        font1.setBold(true);
        nationalparkManagerLabel->setFont(font1);
        nationalparkManagerLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(nationalparkManagerLabel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tierverwaltungPushButton = new QPushButton(hauptseite);
        tierverwaltungPushButton->setObjectName("tierverwaltungPushButton");

        horizontalLayout->addWidget(tierverwaltungPushButton);

        personenverwaltungPushButton = new QPushButton(hauptseite);
        personenverwaltungPushButton->setObjectName("personenverwaltungPushButton");

        horizontalLayout->addWidget(personenverwaltungPushButton);


        verticalLayout->addLayout(horizontalLayout);

        wegenetzPushButton = new QPushButton(hauptseite);
        wegenetzPushButton->setObjectName("wegenetzPushButton");

        verticalLayout->addWidget(wegenetzPushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_10->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(hauptseite);
        tierverwaltungsseite = new QWidget();
        tierverwaltungsseite->setObjectName("tierverwaltungsseite");
        horizontalLayout_8 = new QHBoxLayout(tierverwaltungsseite);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
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

        tierBearbeitenPushButton = new QPushButton(tierverwaltungsseite);
        tierBearbeitenPushButton->setObjectName("tierBearbeitenPushButton");

        verticalLayout_7->addWidget(tierBearbeitenPushButton);

        statistikTierPushButton = new QPushButton(tierverwaltungsseite);
        statistikTierPushButton->setObjectName("statistikTierPushButton");

        verticalLayout_7->addWidget(statistikTierPushButton);

        tierSortierenPushButton = new QPushButton(tierverwaltungsseite);
        tierSortierenPushButton->setObjectName("tierSortierenPushButton");

        verticalLayout_7->addWidget(tierSortierenPushButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);


        horizontalLayout_5->addLayout(verticalLayout_7);

        horizontalSpacer_5 = new QSpacerItem(38, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        tiereImParkLabel = new QLabel(tierverwaltungsseite);
        tiereImParkLabel->setObjectName("tiereImParkLabel");

        verticalLayout_6->addWidget(tiereImParkLabel);

        tierListWidget = new QListWidget(tierverwaltungsseite);
        tierListWidget->setObjectName("tierListWidget");

        verticalLayout_6->addWidget(tierListWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        reptilCheckBox = new QCheckBox(tierverwaltungsseite);
        reptilCheckBox->setObjectName("reptilCheckBox");
        reptilCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(reptilCheckBox);

        saeugetierCheckBox = new QCheckBox(tierverwaltungsseite);
        saeugetierCheckBox->setObjectName("saeugetierCheckBox");
        saeugetierCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(saeugetierCheckBox);

        vogelCheckBox = new QCheckBox(tierverwaltungsseite);
        vogelCheckBox->setObjectName("vogelCheckBox");
        vogelCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(vogelCheckBox);


        verticalLayout_6->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_6);

        horizontalSpacer_6 = new QSpacerItem(38, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(tierverwaltungsseite);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        horizontalLayout_7 = new QHBoxLayout(page_4);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
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

        personBearbeitenPushButton = new QPushButton(page_4);
        personBearbeitenPushButton->setObjectName("personBearbeitenPushButton");

        verticalLayout_4->addWidget(personBearbeitenPushButton);

        statistikPersonPushButton = new QPushButton(page_4);
        statistikPersonPushButton->setObjectName("statistikPersonPushButton");

        verticalLayout_4->addWidget(statistikPersonPushButton);

        personSortierenPushButton = new QPushButton(page_4);
        personSortierenPushButton->setObjectName("personSortierenPushButton");

        verticalLayout_4->addWidget(personSortierenPushButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        horizontalLayout_6->addLayout(verticalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(27, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        mitarbeiterImParkLabel = new QLabel(page_4);
        mitarbeiterImParkLabel->setObjectName("mitarbeiterImParkLabel");

        verticalLayout_5->addWidget(mitarbeiterImParkLabel);

        personenListWidget = new QListWidget(page_4);
        personenListWidget->setObjectName("personenListWidget");

        verticalLayout_5->addWidget(personenListWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        rangerCheckBox_2 = new QCheckBox(page_4);
        rangerCheckBox_2->setObjectName("rangerCheckBox_2");
        rangerCheckBox_2->setChecked(true);

        horizontalLayout_3->addWidget(rangerCheckBox_2);

        verwalterCheckBox_3 = new QCheckBox(page_4);
        verwalterCheckBox_3->setObjectName("verwalterCheckBox_3");
        verwalterCheckBox_3->setChecked(true);

        horizontalLayout_3->addWidget(verwalterCheckBox_3);

        wissCheckBox = new QCheckBox(page_4);
        wissCheckBox->setObjectName("wissCheckBox");
        wissCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(wissCheckBox);


        verticalLayout_5->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_5);

        horizontalSpacer_4 = new QSpacerItem(27, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(page_4);

        horizontalLayout_9->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 526, 17));
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
        menuLaden_JSON->addAction(actionOrteLaden_JSON);
        menuLaden_JSON->addAction(actionWegeLaden_JSON);
        menuSpeichern_JSON->addAction(actionTiere_speichern_JSON);
        menuSpeichern_JSON->addAction(actionPersonen_speichern_JSON);
        menuFenster->addAction(actionFull_screen);
        menuFenster->addAction(actionMinimize);
        menuFenster->addAction(actionNormal);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


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
        actionOrteLaden_JSON->setText(QCoreApplication::translate("MainWindow", "Orte", nullptr));
        actionWegeLaden_JSON->setText(QCoreApplication::translate("MainWindow", "Wege", nullptr));
        nationalparkManagerLabel->setText(QCoreApplication::translate("MainWindow", "             Nationalpark Manager", nullptr));
        tierverwaltungPushButton->setText(QCoreApplication::translate("MainWindow", "Tierverwaltung", nullptr));
        personenverwaltungPushButton->setText(QCoreApplication::translate("MainWindow", "Personenverwaltung", nullptr));
        wegenetzPushButton->setText(QCoreApplication::translate("MainWindow", "Wegenetz", nullptr));
        zurueckInTierverwaltungsseitePushButton->setText(QCoreApplication::translate("MainWindow", "Zur\303\274ck", nullptr));
        neuInTierverwaltungsseitePushButton->setText(QCoreApplication::translate("MainWindow", "Neu", nullptr));
        tierLadenPushButton->setText(QCoreApplication::translate("MainWindow", "Tier laden (JSON)", nullptr));
        tierSpeichernPushButton->setText(QCoreApplication::translate("MainWindow", "Tier speichern (JSON)", nullptr));
        tierBearbeitenPushButton->setText(QCoreApplication::translate("MainWindow", "Bearbeiten", nullptr));
        statistikTierPushButton->setText(QCoreApplication::translate("MainWindow", "Statistik", nullptr));
        tierSortierenPushButton->setText(QCoreApplication::translate("MainWindow", "Sortieren", nullptr));
        tiereImParkLabel->setText(QCoreApplication::translate("MainWindow", "Tiere im Park:", nullptr));
        reptilCheckBox->setText(QCoreApplication::translate("MainWindow", "Reptil", nullptr));
        saeugetierCheckBox->setText(QCoreApplication::translate("MainWindow", "Saeugetier", nullptr));
        vogelCheckBox->setText(QCoreApplication::translate("MainWindow", "Vogel", nullptr));
        zurueckInPersonenverwaltungsseitePushButoon->setText(QCoreApplication::translate("MainWindow", "Zur\303\274ck", nullptr));
        neuInPersonenVerwaltungsseitePushButton->setText(QCoreApplication::translate("MainWindow", "Neu", nullptr));
        personenLadenPushButton->setText(QCoreApplication::translate("MainWindow", "Personen laden (JSON)", nullptr));
        personenSpeichernPushButton->setText(QCoreApplication::translate("MainWindow", "Personen speichern (JSON)", nullptr));
        personBearbeitenPushButton->setText(QCoreApplication::translate("MainWindow", "Bearbeiten", nullptr));
        statistikPersonPushButton->setText(QCoreApplication::translate("MainWindow", "Statistik", nullptr));
        personSortierenPushButton->setText(QCoreApplication::translate("MainWindow", "Sortieren", nullptr));
        mitarbeiterImParkLabel->setText(QCoreApplication::translate("MainWindow", "Mitarbeiter im Park:", nullptr));
        rangerCheckBox_2->setText(QCoreApplication::translate("MainWindow", "Ranger", nullptr));
        verwalterCheckBox_3->setText(QCoreApplication::translate("MainWindow", "Verwalter", nullptr));
        wissCheckBox->setText(QCoreApplication::translate("MainWindow", "Wissenschaftler", nullptr));
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
