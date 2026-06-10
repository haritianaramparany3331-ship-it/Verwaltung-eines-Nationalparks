#include "persondialog.h"
#include "ui_persondialog.h"

personDialog::personDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::personDialog)
{
    ui->setupUi(this);
}

personDialog::~personDialog()
{
    delete ui;
}
