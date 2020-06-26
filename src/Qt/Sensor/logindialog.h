#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class loginDialog;
}

class loginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialog(QWidget *parent = 0);
    ~loginDialog();
    static bool User;
    static bool Sa;
    static bool Emp;

private slots:
    void on_login_SureBtn_clicked();

    void on_login_ExitBtn_clicked();

private:
    Ui::loginDialog *ui;

};

#endif // LOGINDIALOG_H
