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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPersonal_csv;
    QAction *actionFull_Screen;
    QAction *actionMinimize;
    QAction *actionNormal;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *wildtierEingabeGroupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *gemAttWildtierGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameWildtierLabel;
    QLineEdit *nameWildtierLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *alterWildtierLabel;
    QLineEdit *alterWildtierLineEdit;
    QSpacerItem *verticalSpacer;
    QGroupBox *spezAttWildtierGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *fellFarbeLabel;
    QLineEdit *fellfarbeLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *fluegelspannweiteLabel;
    QLineEdit *fluegelspannweiteLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *gifitgLabel;
    QLineEdit *giftigLineEdit;
    QSpacerItem *verticalSpacer_2;
    QPushButton *saeugetierPushButton;
    QPushButton *vogelPushButton;
    QPushButton *reptilPushButton;
    QGroupBox *tiereVerwaltungGroupBox;
    QVBoxLayout *verticalLayout_4;
    QListWidget *TierlisteListWidget;
    QPushButton *binaerSpeichernPushButton;
    QPushButton *binaerLadenPushButton;
    QGroupBox *personalEingabeGroupBox;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *gemAttPersonalGroupBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *vornameLabel;
    QLineEdit *vornameLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *nachnameLabel;
    QLineEdit *nachnameLineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *persoNumLabel;
    QLineEdit *persoNumLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *gehaltLabel;
    QLineEdit *gehaltLineEdit;
    QHBoxLayout *horizontalLayout_17;
    QLabel *stundenzahlLabel;
    QLineEdit *stundenzahlLineEdit;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *spezAttPersonalGroupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *revierLabel;
    QLineEdit *revierLineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *einsatzbereichLabel;
    QLineEdit *einsatzbereichLineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *abteilungLabel;
    QLineEdit *abteilungLineEdit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *bueroLabel;
    QLineEdit *bueroLineEdit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *fachgebietLabel;
    QLineEdit *fachgebietLineEdit;
    QHBoxLayout *horizontalLayout_16;
    QLabel *anzahlStudienLabel;
    QLineEdit *anzahlStudienLineEdit;
    QSpacerItem *verticalSpacer_4;
    QPushButton *rangerPushButton;
    QPushButton *verwaltungPushButton;
    QPushButton *wissenschaftlerinPushButton;
    QGroupBox *personalVerwaltungGroupBox;
    QVBoxLayout *verticalLayout_8;
    QListWidget *personalListeListWidget;
    QPushButton *csvSpeichernPushButton;
    QPushButton *csvLadenPushButton;
    QMenuBar *menubar;
    QMenu *menuDatei;
    QMenu *menuView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1184, 675);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #F4F7F2;\n"
"    color: #1E1E1E;\n"
"    font-family: Arial;\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #1E1E1E;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: white;\n"
"    border: 1px solid #C9D1C8;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    selection-background-color: #7BAE7F;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2F5D50;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #2F5D50;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3F6F60;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #24463D;\n"
"}\n"
"\n"
"QListView {\n"
"    background-color: white;\n"
"    border: 1px solid #C9D1C8;\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QListView::item {\n"
""
                        "    padding: 6px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"    background-color: #7BAE7F;\n"
"    color: white;\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"    background-color: #E7F0EA;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    border: 1px solid #C9D1C8;\n"
"    border-radius: 10px;\n"
"    margin-top: 10px;\n"
"    padding: 10px;\n"
"    font-weight: bold;\n"
"    color: #2F5D50;\n"
"    background-color: #F9FBF8;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 5px 0 5px;\n"
"}\n"
""));
        actionPersonal_csv = new QAction(MainWindow);
        actionPersonal_csv->setObjectName("actionPersonal_csv");
        actionFull_Screen = new QAction(MainWindow);
        actionFull_Screen->setObjectName("actionFull_Screen");
        actionMinimize = new QAction(MainWindow);
        actionMinimize->setObjectName("actionMinimize");
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName("actionNormal");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        wildtierEingabeGroupBox = new QGroupBox(centralwidget);
        wildtierEingabeGroupBox->setObjectName("wildtierEingabeGroupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wildtierEingabeGroupBox->sizePolicy().hasHeightForWidth());
        wildtierEingabeGroupBox->setSizePolicy(sizePolicy1);
        wildtierEingabeGroupBox->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(wildtierEingabeGroupBox);
        verticalLayout->setObjectName("verticalLayout");
        gemAttWildtierGroupBox = new QGroupBox(wildtierEingabeGroupBox);
        gemAttWildtierGroupBox->setObjectName("gemAttWildtierGroupBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gemAttWildtierGroupBox->sizePolicy().hasHeightForWidth());
        gemAttWildtierGroupBox->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(gemAttWildtierGroupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        nameWildtierLabel = new QLabel(gemAttWildtierGroupBox);
        nameWildtierLabel->setObjectName("nameWildtierLabel");

        horizontalLayout_2->addWidget(nameWildtierLabel);

        nameWildtierLineEdit = new QLineEdit(gemAttWildtierGroupBox);
        nameWildtierLineEdit->setObjectName("nameWildtierLineEdit");

        horizontalLayout_2->addWidget(nameWildtierLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        alterWildtierLabel = new QLabel(gemAttWildtierGroupBox);
        alterWildtierLabel->setObjectName("alterWildtierLabel");
        sizePolicy.setHeightForWidth(alterWildtierLabel->sizePolicy().hasHeightForWidth());
        alterWildtierLabel->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(alterWildtierLabel);

        alterWildtierLineEdit = new QLineEdit(gemAttWildtierGroupBox);
        alterWildtierLineEdit->setObjectName("alterWildtierLineEdit");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(alterWildtierLineEdit->sizePolicy().hasHeightForWidth());
        alterWildtierLineEdit->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(alterWildtierLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 81, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(gemAttWildtierGroupBox);

        spezAttWildtierGroupBox = new QGroupBox(wildtierEingabeGroupBox);
        spezAttWildtierGroupBox->setObjectName("spezAttWildtierGroupBox");
        sizePolicy2.setHeightForWidth(spezAttWildtierGroupBox->sizePolicy().hasHeightForWidth());
        spezAttWildtierGroupBox->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(spezAttWildtierGroupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        fellFarbeLabel = new QLabel(spezAttWildtierGroupBox);
        fellFarbeLabel->setObjectName("fellFarbeLabel");

        horizontalLayout_4->addWidget(fellFarbeLabel);

        fellfarbeLineEdit = new QLineEdit(spezAttWildtierGroupBox);
        fellfarbeLineEdit->setObjectName("fellfarbeLineEdit");

        horizontalLayout_4->addWidget(fellfarbeLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        fluegelspannweiteLabel = new QLabel(spezAttWildtierGroupBox);
        fluegelspannweiteLabel->setObjectName("fluegelspannweiteLabel");

        horizontalLayout_5->addWidget(fluegelspannweiteLabel);

        fluegelspannweiteLineEdit = new QLineEdit(spezAttWildtierGroupBox);
        fluegelspannweiteLineEdit->setObjectName("fluegelspannweiteLineEdit");

        horizontalLayout_5->addWidget(fluegelspannweiteLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        gifitgLabel = new QLabel(spezAttWildtierGroupBox);
        gifitgLabel->setObjectName("gifitgLabel");

        horizontalLayout_6->addWidget(gifitgLabel);

        giftigLineEdit = new QLineEdit(spezAttWildtierGroupBox);
        giftigLineEdit->setObjectName("giftigLineEdit");

        horizontalLayout_6->addWidget(giftigLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 54, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout->addWidget(spezAttWildtierGroupBox);

        saeugetierPushButton = new QPushButton(wildtierEingabeGroupBox);
        saeugetierPushButton->setObjectName("saeugetierPushButton");

        verticalLayout->addWidget(saeugetierPushButton);

        vogelPushButton = new QPushButton(wildtierEingabeGroupBox);
        vogelPushButton->setObjectName("vogelPushButton");

        verticalLayout->addWidget(vogelPushButton);

        reptilPushButton = new QPushButton(wildtierEingabeGroupBox);
        reptilPushButton->setObjectName("reptilPushButton");

        verticalLayout->addWidget(reptilPushButton);


        horizontalLayout->addWidget(wildtierEingabeGroupBox);

        tiereVerwaltungGroupBox = new QGroupBox(centralwidget);
        tiereVerwaltungGroupBox->setObjectName("tiereVerwaltungGroupBox");
        sizePolicy1.setHeightForWidth(tiereVerwaltungGroupBox->sizePolicy().hasHeightForWidth());
        tiereVerwaltungGroupBox->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(tiereVerwaltungGroupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        TierlisteListWidget = new QListWidget(tiereVerwaltungGroupBox);
        TierlisteListWidget->setObjectName("TierlisteListWidget");

        verticalLayout_4->addWidget(TierlisteListWidget);

        binaerSpeichernPushButton = new QPushButton(tiereVerwaltungGroupBox);
        binaerSpeichernPushButton->setObjectName("binaerSpeichernPushButton");

        verticalLayout_4->addWidget(binaerSpeichernPushButton);

        binaerLadenPushButton = new QPushButton(tiereVerwaltungGroupBox);
        binaerLadenPushButton->setObjectName("binaerLadenPushButton");

        verticalLayout_4->addWidget(binaerLadenPushButton);


        horizontalLayout->addWidget(tiereVerwaltungGroupBox);

        personalEingabeGroupBox = new QGroupBox(centralwidget);
        personalEingabeGroupBox->setObjectName("personalEingabeGroupBox");
        sizePolicy1.setHeightForWidth(personalEingabeGroupBox->sizePolicy().hasHeightForWidth());
        personalEingabeGroupBox->setSizePolicy(sizePolicy1);
        verticalLayout_5 = new QVBoxLayout(personalEingabeGroupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        gemAttPersonalGroupBox = new QGroupBox(personalEingabeGroupBox);
        gemAttPersonalGroupBox->setObjectName("gemAttPersonalGroupBox");
        sizePolicy2.setHeightForWidth(gemAttPersonalGroupBox->sizePolicy().hasHeightForWidth());
        gemAttPersonalGroupBox->setSizePolicy(sizePolicy2);
        verticalLayout_6 = new QVBoxLayout(gemAttPersonalGroupBox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        vornameLabel = new QLabel(gemAttPersonalGroupBox);
        vornameLabel->setObjectName("vornameLabel");

        horizontalLayout_7->addWidget(vornameLabel);

        vornameLineEdit = new QLineEdit(gemAttPersonalGroupBox);
        vornameLineEdit->setObjectName("vornameLineEdit");

        horizontalLayout_7->addWidget(vornameLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        nachnameLabel = new QLabel(gemAttPersonalGroupBox);
        nachnameLabel->setObjectName("nachnameLabel");

        horizontalLayout_8->addWidget(nachnameLabel);

        nachnameLineEdit = new QLineEdit(gemAttPersonalGroupBox);
        nachnameLineEdit->setObjectName("nachnameLineEdit");

        horizontalLayout_8->addWidget(nachnameLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        persoNumLabel = new QLabel(gemAttPersonalGroupBox);
        persoNumLabel->setObjectName("persoNumLabel");

        horizontalLayout_9->addWidget(persoNumLabel);

        persoNumLineEdit = new QLineEdit(gemAttPersonalGroupBox);
        persoNumLineEdit->setObjectName("persoNumLineEdit");

        horizontalLayout_9->addWidget(persoNumLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        gehaltLabel = new QLabel(gemAttPersonalGroupBox);
        gehaltLabel->setObjectName("gehaltLabel");

        horizontalLayout_10->addWidget(gehaltLabel);

        gehaltLineEdit = new QLineEdit(gemAttPersonalGroupBox);
        gehaltLineEdit->setObjectName("gehaltLineEdit");

        horizontalLayout_10->addWidget(gehaltLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        stundenzahlLabel = new QLabel(gemAttPersonalGroupBox);
        stundenzahlLabel->setObjectName("stundenzahlLabel");
        sizePolicy.setHeightForWidth(stundenzahlLabel->sizePolicy().hasHeightForWidth());
        stundenzahlLabel->setSizePolicy(sizePolicy);

        horizontalLayout_17->addWidget(stundenzahlLabel);

        stundenzahlLineEdit = new QLineEdit(gemAttPersonalGroupBox);
        stundenzahlLineEdit->setObjectName("stundenzahlLineEdit");

        horizontalLayout_17->addWidget(stundenzahlLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_17);

        verticalSpacer_3 = new QSpacerItem(20, 9, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);


        verticalLayout_5->addWidget(gemAttPersonalGroupBox);

        spezAttPersonalGroupBox = new QGroupBox(personalEingabeGroupBox);
        spezAttPersonalGroupBox->setObjectName("spezAttPersonalGroupBox");
        sizePolicy2.setHeightForWidth(spezAttPersonalGroupBox->sizePolicy().hasHeightForWidth());
        spezAttPersonalGroupBox->setSizePolicy(sizePolicy2);
        verticalLayout_7 = new QVBoxLayout(spezAttPersonalGroupBox);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        revierLabel = new QLabel(spezAttPersonalGroupBox);
        revierLabel->setObjectName("revierLabel");

        horizontalLayout_11->addWidget(revierLabel);

        revierLineEdit = new QLineEdit(spezAttPersonalGroupBox);
        revierLineEdit->setObjectName("revierLineEdit");

        horizontalLayout_11->addWidget(revierLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        einsatzbereichLabel = new QLabel(spezAttPersonalGroupBox);
        einsatzbereichLabel->setObjectName("einsatzbereichLabel");

        horizontalLayout_12->addWidget(einsatzbereichLabel);

        einsatzbereichLineEdit = new QLineEdit(spezAttPersonalGroupBox);
        einsatzbereichLineEdit->setObjectName("einsatzbereichLineEdit");

        horizontalLayout_12->addWidget(einsatzbereichLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        abteilungLabel = new QLabel(spezAttPersonalGroupBox);
        abteilungLabel->setObjectName("abteilungLabel");

        horizontalLayout_13->addWidget(abteilungLabel);

        abteilungLineEdit = new QLineEdit(spezAttPersonalGroupBox);
        abteilungLineEdit->setObjectName("abteilungLineEdit");

        horizontalLayout_13->addWidget(abteilungLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        bueroLabel = new QLabel(spezAttPersonalGroupBox);
        bueroLabel->setObjectName("bueroLabel");

        horizontalLayout_14->addWidget(bueroLabel);

        bueroLineEdit = new QLineEdit(spezAttPersonalGroupBox);
        bueroLineEdit->setObjectName("bueroLineEdit");

        horizontalLayout_14->addWidget(bueroLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        fachgebietLabel = new QLabel(spezAttPersonalGroupBox);
        fachgebietLabel->setObjectName("fachgebietLabel");

        horizontalLayout_15->addWidget(fachgebietLabel);

        fachgebietLineEdit = new QLineEdit(spezAttPersonalGroupBox);
        fachgebietLineEdit->setObjectName("fachgebietLineEdit");

        horizontalLayout_15->addWidget(fachgebietLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        anzahlStudienLabel = new QLabel(spezAttPersonalGroupBox);
        anzahlStudienLabel->setObjectName("anzahlStudienLabel");

        horizontalLayout_16->addWidget(anzahlStudienLabel);

        anzahlStudienLineEdit = new QLineEdit(spezAttPersonalGroupBox);
        anzahlStudienLineEdit->setObjectName("anzahlStudienLineEdit");

        horizontalLayout_16->addWidget(anzahlStudienLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_16);

        verticalSpacer_4 = new QSpacerItem(20, 119, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);


        verticalLayout_5->addWidget(spezAttPersonalGroupBox);

        rangerPushButton = new QPushButton(personalEingabeGroupBox);
        rangerPushButton->setObjectName("rangerPushButton");

        verticalLayout_5->addWidget(rangerPushButton);

        verwaltungPushButton = new QPushButton(personalEingabeGroupBox);
        verwaltungPushButton->setObjectName("verwaltungPushButton");

        verticalLayout_5->addWidget(verwaltungPushButton);

        wissenschaftlerinPushButton = new QPushButton(personalEingabeGroupBox);
        wissenschaftlerinPushButton->setObjectName("wissenschaftlerinPushButton");

        verticalLayout_5->addWidget(wissenschaftlerinPushButton);


        horizontalLayout->addWidget(personalEingabeGroupBox);

        personalVerwaltungGroupBox = new QGroupBox(centralwidget);
        personalVerwaltungGroupBox->setObjectName("personalVerwaltungGroupBox");
        sizePolicy1.setHeightForWidth(personalVerwaltungGroupBox->sizePolicy().hasHeightForWidth());
        personalVerwaltungGroupBox->setSizePolicy(sizePolicy1);
        verticalLayout_8 = new QVBoxLayout(personalVerwaltungGroupBox);
        verticalLayout_8->setObjectName("verticalLayout_8");
        personalListeListWidget = new QListWidget(personalVerwaltungGroupBox);
        personalListeListWidget->setObjectName("personalListeListWidget");

        verticalLayout_8->addWidget(personalListeListWidget);

        csvSpeichernPushButton = new QPushButton(personalVerwaltungGroupBox);
        csvSpeichernPushButton->setObjectName("csvSpeichernPushButton");

        verticalLayout_8->addWidget(csvSpeichernPushButton);

        csvLadenPushButton = new QPushButton(personalVerwaltungGroupBox);
        csvLadenPushButton->setObjectName("csvLadenPushButton");

        verticalLayout_8->addWidget(csvLadenPushButton);


        horizontalLayout->addWidget(personalVerwaltungGroupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1184, 19));
        menuDatei = new QMenu(menubar);
        menuDatei->setObjectName("menuDatei");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDatei->menuAction());
        menubar->addAction(menuView->menuAction());
        menuDatei->addAction(actionPersonal_csv);
        menuView->addAction(actionFull_Screen);
        menuView->addAction(actionMinimize);
        menuView->addAction(actionNormal);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionPersonal_csv->setText(QCoreApplication::translate("MainWindow", "Personal.csv", nullptr));
        actionFull_Screen->setText(QCoreApplication::translate("MainWindow", "Full Screen", nullptr));
        actionMinimize->setText(QCoreApplication::translate("MainWindow", "Minimize", nullptr));
        actionNormal->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        wildtierEingabeGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Wildtier - Eingabe", nullptr));
        gemAttWildtierGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Gemeinsame Attribute", nullptr));
        nameWildtierLabel->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        alterWildtierLabel->setText(QCoreApplication::translate("MainWindow", "Alter:", nullptr));
        spezAttWildtierGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Spezifische Attribute", nullptr));
        fellFarbeLabel->setText(QCoreApplication::translate("MainWindow", "Fellfarbe:", nullptr));
        fluegelspannweiteLabel->setText(QCoreApplication::translate("MainWindow", "Fl\303\274gelspannweite:", nullptr));
        gifitgLabel->setText(QCoreApplication::translate("MainWindow", "Ist giftig:", nullptr));
        saeugetierPushButton->setText(QCoreApplication::translate("MainWindow", "Neues Saeugetier", nullptr));
        vogelPushButton->setText(QCoreApplication::translate("MainWindow", "Neuer Vogel", nullptr));
        reptilPushButton->setText(QCoreApplication::translate("MainWindow", "Neues Reptil", nullptr));
        tiereVerwaltungGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Tiere - Verwaltung", nullptr));
        binaerSpeichernPushButton->setText(QCoreApplication::translate("MainWindow", "Tiere speichern (bin\303\244r)", nullptr));
        binaerLadenPushButton->setText(QCoreApplication::translate("MainWindow", "Tiere laden (bin\303\244r)", nullptr));
        personalEingabeGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Personal - Eingabe", nullptr));
        gemAttPersonalGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Gemeinsame Attribute", nullptr));
        vornameLabel->setText(QCoreApplication::translate("MainWindow", "Vorname:", nullptr));
        nachnameLabel->setText(QCoreApplication::translate("MainWindow", "Nachname:", nullptr));
        persoNumLabel->setText(QCoreApplication::translate("MainWindow", "Personalnummer:", nullptr));
        gehaltLabel->setText(QCoreApplication::translate("MainWindow", "Gehalt:", nullptr));
        stundenzahlLabel->setText(QCoreApplication::translate("MainWindow", "Stundenzahl:", nullptr));
        spezAttPersonalGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Spezifische Attribute", nullptr));
        revierLabel->setText(QCoreApplication::translate("MainWindow", "Revier:", nullptr));
        einsatzbereichLabel->setText(QCoreApplication::translate("MainWindow", "Einsatzbereich:", nullptr));
        abteilungLabel->setText(QCoreApplication::translate("MainWindow", "Abteilung:", nullptr));
        bueroLabel->setText(QCoreApplication::translate("MainWindow", "B\303\274ro:", nullptr));
        fachgebietLabel->setText(QCoreApplication::translate("MainWindow", "Fachgebiet:", nullptr));
        anzahlStudienLabel->setText(QCoreApplication::translate("MainWindow", "Anzahl Studien:", nullptr));
        rangerPushButton->setText(QCoreApplication::translate("MainWindow", "Neuer Ranger", nullptr));
        verwaltungPushButton->setText(QCoreApplication::translate("MainWindow", "Neue Verwaltung", nullptr));
        wissenschaftlerinPushButton->setText(QCoreApplication::translate("MainWindow", "Neue Wissenschaftlerin", nullptr));
        personalVerwaltungGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Personal - Verwaltung", nullptr));
        csvSpeichernPushButton->setText(QCoreApplication::translate("MainWindow", "Personen speichern (CSV)", nullptr));
        csvLadenPushButton->setText(QCoreApplication::translate("MainWindow", "Personen laden (CSV)", nullptr));
        menuDatei->setTitle(QCoreApplication::translate("MainWindow", "Datei", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
