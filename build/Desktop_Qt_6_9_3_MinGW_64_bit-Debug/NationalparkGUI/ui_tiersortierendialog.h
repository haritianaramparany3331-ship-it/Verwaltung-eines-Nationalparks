/********************************************************************************
** Form generated from reading UI file 'tiersortierendialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIERSORTIERENDIALOG_H
#define UI_TIERSORTIERENDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tierSortierenDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *AuswahlTierComboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *referenzalteLabel;
    QSpinBox *referenzAlterSpinBox;
    QRadioButton *richtungTierRadioButton;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *bezeichnungSortierenLabel;
    QLabel *alterSortierenLabel;
    QLabel *DifferenzTierLabel;
    QListWidget *tierSortierenListWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *tierSortierenDialog)
    {
        if (tierSortierenDialog->objectName().isEmpty())
            tierSortierenDialog->setObjectName("tierSortierenDialog");
        tierSortierenDialog->resize(480, 640);
        verticalLayout_4 = new QVBoxLayout(tierSortierenDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        AuswahlTierComboBox = new QComboBox(tierSortierenDialog);
        AuswahlTierComboBox->addItem(QString());
        AuswahlTierComboBox->addItem(QString());
        AuswahlTierComboBox->addItem(QString());
        AuswahlTierComboBox->setObjectName("AuswahlTierComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AuswahlTierComboBox->sizePolicy().hasHeightForWidth());
        AuswahlTierComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(AuswahlTierComboBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        referenzalteLabel = new QLabel(tierSortierenDialog);
        referenzalteLabel->setObjectName("referenzalteLabel");

        verticalLayout_2->addWidget(referenzalteLabel);

        referenzAlterSpinBox = new QSpinBox(tierSortierenDialog);
        referenzAlterSpinBox->setObjectName("referenzAlterSpinBox");

        verticalLayout_2->addWidget(referenzAlterSpinBox);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        richtungTierRadioButton = new QRadioButton(tierSortierenDialog);
        richtungTierRadioButton->setObjectName("richtungTierRadioButton");

        verticalLayout_4->addWidget(richtungTierRadioButton);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        bezeichnungSortierenLabel = new QLabel(tierSortierenDialog);
        bezeichnungSortierenLabel->setObjectName("bezeichnungSortierenLabel");

        horizontalLayout_2->addWidget(bezeichnungSortierenLabel);

        alterSortierenLabel = new QLabel(tierSortierenDialog);
        alterSortierenLabel->setObjectName("alterSortierenLabel");

        horizontalLayout_2->addWidget(alterSortierenLabel);

        DifferenzTierLabel = new QLabel(tierSortierenDialog);
        DifferenzTierLabel->setObjectName("DifferenzTierLabel");

        horizontalLayout_2->addWidget(DifferenzTierLabel);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tierSortierenListWidget = new QListWidget(tierSortierenDialog);
        tierSortierenListWidget->setObjectName("tierSortierenListWidget");

        verticalLayout_3->addWidget(tierSortierenListWidget);


        verticalLayout_4->addLayout(verticalLayout_3);

        buttonBox = new QDialogButtonBox(tierSortierenDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(tierSortierenDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, tierSortierenDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, tierSortierenDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(tierSortierenDialog);
    } // setupUi

    void retranslateUi(QDialog *tierSortierenDialog)
    {
        tierSortierenDialog->setWindowTitle(QCoreApplication::translate("tierSortierenDialog", "Dialog", nullptr));
        AuswahlTierComboBox->setItemText(0, QCoreApplication::translate("tierSortierenDialog", "Alter", nullptr));
        AuswahlTierComboBox->setItemText(1, QCoreApplication::translate("tierSortierenDialog", "Bezeichnung", nullptr));
        AuswahlTierComboBox->setItemText(2, QCoreApplication::translate("tierSortierenDialog", "Differenz zum Referenzalter", nullptr));

        referenzalteLabel->setText(QCoreApplication::translate("tierSortierenDialog", "Referenzalter", nullptr));
        richtungTierRadioButton->setText(QCoreApplication::translate("tierSortierenDialog", "Aufsteigend", nullptr));
        bezeichnungSortierenLabel->setText(QCoreApplication::translate("tierSortierenDialog", "Bezeichnung", nullptr));
        alterSortierenLabel->setText(QCoreApplication::translate("tierSortierenDialog", "Alter", nullptr));
        DifferenzTierLabel->setText(QCoreApplication::translate("tierSortierenDialog", "Differenz zum Referenz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tierSortierenDialog: public Ui_tierSortierenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIERSORTIERENDIALOG_H
