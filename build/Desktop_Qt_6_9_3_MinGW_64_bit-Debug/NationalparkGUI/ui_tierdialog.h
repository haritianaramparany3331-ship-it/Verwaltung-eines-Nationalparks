/********************************************************************************
** Form generated from reading UI file 'tierdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIERDIALOG_H
#define UI_TIERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tierDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *bestaetigungTierLabel;
    QDialogButtonBox *tierButtonBox;

    void setupUi(QDialog *tierDialog)
    {
        if (tierDialog->objectName().isEmpty())
            tierDialog->setObjectName("tierDialog");
        tierDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(tierDialog);
        verticalLayout->setObjectName("verticalLayout");
        bestaetigungTierLabel = new QLabel(tierDialog);
        bestaetigungTierLabel->setObjectName("bestaetigungTierLabel");

        verticalLayout->addWidget(bestaetigungTierLabel);

        tierButtonBox = new QDialogButtonBox(tierDialog);
        tierButtonBox->setObjectName("tierButtonBox");
        tierButtonBox->setOrientation(Qt::Orientation::Horizontal);
        tierButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(tierButtonBox);


        retranslateUi(tierDialog);
        QObject::connect(tierButtonBox, &QDialogButtonBox::accepted, tierDialog, qOverload<>(&QDialog::accept));
        QObject::connect(tierButtonBox, &QDialogButtonBox::rejected, tierDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(tierDialog);
    } // setupUi

    void retranslateUi(QDialog *tierDialog)
    {
        tierDialog->setWindowTitle(QCoreApplication::translate("tierDialog", "Dialog", nullptr));
        bestaetigungTierLabel->setText(QCoreApplication::translate("tierDialog", "Wollen Sie das Tier zur Liste hinzuf\303\274gen?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tierDialog: public Ui_tierDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIERDIALOG_H
