#include "tierdialog.h"
#include "ui_tierdialog.h"

tierDialog::tierDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tierDialog)
{
    ui->setupUi(this);
}

tierDialog::~tierDialog()
{
    delete ui;
}
