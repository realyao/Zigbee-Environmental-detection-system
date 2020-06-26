#include "mainwindow.h"
#include "logindialog.h"
#include "sa.h"
#include "connection.h"

#include <QApplication>
#include <QDialog>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::addLibraryPath("./plugins");

    //创建链接
    if(!createConnection())
        return 0;

    loginDialog login;
    if(login.exec() == QDialog::Accepted)
    {
        if(loginDialog::User)
        {
            loginDialog::User = false;
            MainWindow U;
            U.show();
            return a.exec();
        }

        if(loginDialog::Sa)
        {
            loginDialog::Sa = false;
            Sa S;
            S.show();
            return a.exec();
        }
    }
    else
    {
        login.close();
        return -1;
    }


}
