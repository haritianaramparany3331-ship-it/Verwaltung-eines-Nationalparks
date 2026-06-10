#ifndef PERSONDIALOG_H
#define PERSONDIALOG_H

#include <QDialog>

namespace Ui {
class personDialog;
}

class personDialog : public QDialog
{
    Q_OBJECT

public:
    explicit personDialog(QWidget *parent = nullptr);
    ~personDialog();

private:
    Ui::personDialog *ui;
};

#endif // PERSONDIALOG_H
