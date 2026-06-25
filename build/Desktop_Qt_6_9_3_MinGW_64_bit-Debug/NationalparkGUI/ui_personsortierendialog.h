/********************************************************************************
** Form generated from reading UI file 'personsortierendialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONSORTIERENDIALOG_H
#define UI_PERSONSORTIERENDIALOG_H

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

class Ui_personSortierenDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *auswahlComboBox;
    QVBoxLayout *verticalLayout;
    QLabel *referenzGehaltLabel;
    QSpinBox *referenzGehaltSpinBox;
    QRadioButton *richtungRadioButton;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *persoNumSortierenLabel;
    QLabel *gehaltSortierenLabel;
    QLabel *differenzPersonLabel;
    QListWidget *sortierungListWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *personSortierenDialog)
    {
        if (personSortierenDialog->objectName().isEmpty())
            personSortierenDialog->setObjectName("personSortierenDialog");
        personSortierenDialog->resize(480, 640);
        verticalLayout_3 = new QVBoxLayout(personSortierenDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        auswahlComboBox = new QComboBox(personSortierenDialog);
        auswahlComboBox->addItem(QString());
        auswahlComboBox->addItem(QString());
        auswahlComboBox->addItem(QString());
        auswahlComboBox->setObjectName("auswahlComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(auswahlComboBox->sizePolicy().hasHeightForWidth());
        auswahlComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(auswahlComboBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        referenzGehaltLabel = new QLabel(personSortierenDialog);
        referenzGehaltLabel->setObjectName("referenzGehaltLabel");

        verticalLayout->addWidget(referenzGehaltLabel);

        referenzGehaltSpinBox = new QSpinBox(personSortierenDialog);
        referenzGehaltSpinBox->setObjectName("referenzGehaltSpinBox");

        verticalLayout->addWidget(referenzGehaltSpinBox);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        richtungRadioButton = new QRadioButton(personSortierenDialog);
        richtungRadioButton->setObjectName("richtungRadioButton");

        verticalLayout_3->addWidget(richtungRadioButton);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        persoNumSortierenLabel = new QLabel(personSortierenDialog);
        persoNumSortierenLabel->setObjectName("persoNumSortierenLabel");

        horizontalLayout_2->addWidget(persoNumSortierenLabel);

        gehaltSortierenLabel = new QLabel(personSortierenDialog);
        gehaltSortierenLabel->setObjectName("gehaltSortierenLabel");

        horizontalLayout_2->addWidget(gehaltSortierenLabel);

        differenzPersonLabel = new QLabel(personSortierenDialog);
        differenzPersonLabel->setObjectName("differenzPersonLabel");

        horizontalLayout_2->addWidget(differenzPersonLabel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        sortierungListWidget = new QListWidget(personSortierenDialog);
        sortierungListWidget->setObjectName("sortierungListWidget");

        verticalLayout_2->addWidget(sortierungListWidget);


        verticalLayout_3->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(personSortierenDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(personSortierenDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, personSortierenDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, personSortierenDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(personSortierenDialog);
    } // setupUi

    void retranslateUi(QDialog *personSortierenDialog)
    {
        personSortierenDialog->setWindowTitle(QCoreApplication::translate("personSortierenDialog", "Dialog", nullptr));
        auswahlComboBox->setItemText(0, QCoreApplication::translate("personSortierenDialog", "Gehalt", nullptr));
        auswahlComboBox->setItemText(1, QCoreApplication::translate("personSortierenDialog", "Personalnummer", nullptr));
        auswahlComboBox->setItemText(2, QCoreApplication::translate("personSortierenDialog", "Differenz zum Referenzgehalt", nullptr));

        referenzGehaltLabel->setText(QCoreApplication::translate("personSortierenDialog", "Referenzgehalt", nullptr));
        richtungRadioButton->setText(QCoreApplication::translate("personSortierenDialog", "Aufsteigend", nullptr));
        persoNumSortierenLabel->setText(QCoreApplication::translate("personSortierenDialog", "Personalnummer", nullptr));
        gehaltSortierenLabel->setText(QCoreApplication::translate("personSortierenDialog", "Gehalt", nullptr));
        differenzPersonLabel->setText(QCoreApplication::translate("personSortierenDialog", "Differenz zum Referenz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personSortierenDialog: public Ui_personSortierenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONSORTIERENDIALOG_H
