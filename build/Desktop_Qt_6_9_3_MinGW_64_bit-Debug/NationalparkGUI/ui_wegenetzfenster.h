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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>

QT_BEGIN_NAMESPACE

class Ui_wegenetzFenster
{
public:
    QDialogButtonBox *buttonBox;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *wegenetzFenster)
    {
        if (wegenetzFenster->objectName().isEmpty())
            wegenetzFenster->setObjectName("wegenetzFenster");
        wegenetzFenster->resize(640, 480);
        buttonBox = new QDialogButtonBox(wegenetzFenster);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 450, 621, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        graphicsView = new QGraphicsView(wegenetzFenster);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 641, 451));

        retranslateUi(wegenetzFenster);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, wegenetzFenster, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, wegenetzFenster, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(wegenetzFenster);
    } // setupUi

    void retranslateUi(QDialog *wegenetzFenster)
    {
        wegenetzFenster->setWindowTitle(QCoreApplication::translate("wegenetzFenster", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wegenetzFenster: public Ui_wegenetzFenster {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEGENETZFENSTER_H
