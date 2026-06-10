#ifndef TIERDIALOG_H
#define TIERDIALOG_H

#include <QDialog>

namespace Ui {
class tierDialog;
}

class tierDialog : public QDialog
{
    Q_OBJECT

public:
    explicit tierDialog(QWidget *parent = nullptr);
    ~tierDialog();

private:
    Ui::tierDialog *ui;
};

#endif // TIERDIALOG_H
