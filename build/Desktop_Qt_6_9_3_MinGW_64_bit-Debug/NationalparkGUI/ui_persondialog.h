/********************************************************************************
** Form generated from reading UI file 'persondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONDIALOG_H
#define UI_PERSONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_personDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *bestaetigungPersonLabel;
    QDialogButtonBox *personButtonBox;

    void setupUi(QDialog *personDialog)
    {
        if (personDialog->objectName().isEmpty())
            personDialog->setObjectName("personDialog");
        personDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(personDialog);
        verticalLayout->setObjectName("verticalLayout");
        bestaetigungPersonLabel = new QLabel(personDialog);
        bestaetigungPersonLabel->setObjectName("bestaetigungPersonLabel");

        verticalLayout->addWidget(bestaetigungPersonLabel);

        personButtonBox = new QDialogButtonBox(personDialog);
        personButtonBox->setObjectName("personButtonBox");
        personButtonBox->setOrientation(Qt::Orientation::Horizontal);
        personButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(personButtonBox);


        retranslateUi(personDialog);
        QObject::connect(personButtonBox, &QDialogButtonBox::accepted, personDialog, qOverload<>(&QDialog::accept));
        QObject::connect(personButtonBox, &QDialogButtonBox::rejected, personDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(personDialog);
    } // setupUi

    void retranslateUi(QDialog *personDialog)
    {
        personDialog->setWindowTitle(QCoreApplication::translate("personDialog", "Dialog", nullptr));
        bestaetigungPersonLabel->setText(QCoreApplication::translate("personDialog", "Wollen Sie wirklich die Person zur Liste hinzuf\303\274gen?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personDialog: public Ui_personDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONDIALOG_H
