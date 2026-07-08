/********************************************************************************
** Form generated from reading UI file 'wegenetzfenster.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEGENETZFENSTER_H
#define UI_WEGENETZFENSTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_wegenetzFenster
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QLabel *startWegLabel;
    QComboBox *startWegComboBox;
    QLabel *zielWegLabel;
    QComboBox *zielWegComboBox;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *wegeLabel;
    QComboBox *wegSperrenComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *startBFSLabel;
    QComboBox *bfsComboBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *wegSperrenPushButton;
    QPushButton *wegEntsperrenPushButton;
    QPushButton *bfsMarkierenPushButton;
    QPushButton *bfsMarkierungEntfernenPushButton;
    QPushButton *dijkstraStartenPushButton;
    QPushButton *pfadmarkierungEntfernenPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *wegenetzFenster)
    {
        if (wegenetzFenster->objectName().isEmpty())
            wegenetzFenster->setObjectName("wegenetzFenster");
        wegenetzFenster->resize(640, 480);
        verticalLayout = new QVBoxLayout(wegenetzFenster);
        verticalLayout->setObjectName("verticalLayout");
        graphicsView = new QGraphicsView(wegenetzFenster);
        graphicsView->setObjectName("graphicsView");

        verticalLayout->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        startWegLabel = new QLabel(wegenetzFenster);
        startWegLabel->setObjectName("startWegLabel");

        horizontalLayout->addWidget(startWegLabel);

        startWegComboBox = new QComboBox(wegenetzFenster);
        startWegComboBox->setObjectName("startWegComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startWegComboBox->sizePolicy().hasHeightForWidth());
        startWegComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(startWegComboBox);

        zielWegLabel = new QLabel(wegenetzFenster);
        zielWegLabel->setObjectName("zielWegLabel");

        horizontalLayout->addWidget(zielWegLabel);

        zielWegComboBox = new QComboBox(wegenetzFenster);
        zielWegComboBox->setObjectName("zielWegComboBox");
        sizePolicy.setHeightForWidth(zielWegComboBox->sizePolicy().hasHeightForWidth());
        zielWegComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(zielWegComboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        wegeLabel = new QLabel(wegenetzFenster);
        wegeLabel->setObjectName("wegeLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wegeLabel->sizePolicy().hasHeightForWidth());
        wegeLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(wegeLabel);

        wegSperrenComboBox = new QComboBox(wegenetzFenster);
        wegSperrenComboBox->setObjectName("wegSperrenComboBox");
        sizePolicy.setHeightForWidth(wegSperrenComboBox->sizePolicy().hasHeightForWidth());
        wegSperrenComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(wegSperrenComboBox);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        startBFSLabel = new QLabel(wegenetzFenster);
        startBFSLabel->setObjectName("startBFSLabel");

        horizontalLayout_3->addWidget(startBFSLabel);

        bfsComboBox = new QComboBox(wegenetzFenster);
        bfsComboBox->setObjectName("bfsComboBox");
        sizePolicy.setHeightForWidth(bfsComboBox->sizePolicy().hasHeightForWidth());
        bfsComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(bfsComboBox);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        wegSperrenPushButton = new QPushButton(wegenetzFenster);
        wegSperrenPushButton->setObjectName("wegSperrenPushButton");

        horizontalLayout_4->addWidget(wegSperrenPushButton);

        wegEntsperrenPushButton = new QPushButton(wegenetzFenster);
        wegEntsperrenPushButton->setObjectName("wegEntsperrenPushButton");

        horizontalLayout_4->addWidget(wegEntsperrenPushButton);

        bfsMarkierenPushButton = new QPushButton(wegenetzFenster);
        bfsMarkierenPushButton->setObjectName("bfsMarkierenPushButton");

        horizontalLayout_4->addWidget(bfsMarkierenPushButton);

        bfsMarkierungEntfernenPushButton = new QPushButton(wegenetzFenster);
        bfsMarkierungEntfernenPushButton->setObjectName("bfsMarkierungEntfernenPushButton");

        horizontalLayout_4->addWidget(bfsMarkierungEntfernenPushButton);

        dijkstraStartenPushButton = new QPushButton(wegenetzFenster);
        dijkstraStartenPushButton->setObjectName("dijkstraStartenPushButton");

        horizontalLayout_4->addWidget(dijkstraStartenPushButton);

        pfadmarkierungEntfernenPushButton = new QPushButton(wegenetzFenster);
        pfadmarkierungEntfernenPushButton->setObjectName("pfadmarkierungEntfernenPushButton");

        horizontalLayout_4->addWidget(pfadmarkierungEntfernenPushButton);

        buttonBox = new QDialogButtonBox(wegenetzFenster);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(wegenetzFenster);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, wegenetzFenster, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, wegenetzFenster, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(wegenetzFenster);
    } // setupUi

    void retranslateUi(QDialog *wegenetzFenster)
    {
        wegenetzFenster->setWindowTitle(QCoreApplication::translate("wegenetzFenster", "Dialog", nullptr));
        startWegLabel->setText(QCoreApplication::translate("wegenetzFenster", "Von:", nullptr));
        zielWegLabel->setText(QCoreApplication::translate("wegenetzFenster", "Nach:", nullptr));
        wegeLabel->setText(QCoreApplication::translate("wegenetzFenster", "Wege:", nullptr));
        startBFSLabel->setText(QCoreApplication::translate("wegenetzFenster", "Start von BFS:", nullptr));
        wegSperrenPushButton->setText(QCoreApplication::translate("wegenetzFenster", "Weg \n"
"sperren", nullptr));
        wegEntsperrenPushButton->setText(QCoreApplication::translate("wegenetzFenster", "Weg \n"
"entsperren", nullptr));
        bfsMarkierenPushButton->setText(QCoreApplication::translate("wegenetzFenster", "Erreichbare Orten \n"
" markieren", nullptr));
        bfsMarkierungEntfernenPushButton->setText(QCoreApplication::translate("wegenetzFenster", "Markierung \n"
" entfernen", nullptr));
        dijkstraStartenPushButton->setText(QCoreApplication::translate("wegenetzFenster", "Dijkstra\n"
"starten", nullptr));
        pfadmarkierungEntfernenPushButton->setText(QCoreApplication::translate("wegenetzFenster", "Pfadmarkierung\n"
"entfernen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wegenetzFenster: public Ui_wegenetzFenster {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEGENETZFENSTER_H
