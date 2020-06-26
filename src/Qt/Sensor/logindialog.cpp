#include "logindialog.h"
#include "ui_logindialog.h"
#include "mainwindow.h"
#include "sa.h"

#include <QDebug>
#include <QMessageBox>
#include<QSqlQuery>

 bool loginDialog::User = false;
 bool loginDialog::Sa = false;
 bool loginDialog::Emp = false;
 QString MainWindow::UseID = "";
 QString Sa::SaID = "";

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/myICO/my.ico"));
    setWindowTitle(tr("登录"));
    //设置焦点
    ui->login_UserLine->setFocus();
    ui->login_SureBtn->setDefault(true);

}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::on_login_SureBtn_clicked()
{
    //检查帐号是否为空
    if(ui->login_UserLine->text().isEmpty())
    {
        QMessageBox::information(this,tr("请输入帐号"),tr("请先输入帐号！"),QMessageBox::Ok);
        ui->login_UserLine->setFocus();
    }
    else
    {
        //检查密码是否为空
        if(ui->login_PassLine->text().isEmpty())
        {
            QMessageBox::information(this,tr("请输入密码"),tr("请先输入密码再登录！"),QMessageBox::Ok);
            ui->login_PassLine->setFocus();
        }
        else
        {
            QString Coun = ui->login_UserLine->text();
            if(Coun.at(0) == '1')   //管理员或者雇员
            {
                QSqlQuery query;
                query.exec("select EmpID,EmpPass,EmpTitle from Employee");
                while(query.next())
                {
                    //账号正确
                    if(query.value(0).toString() == ui->login_UserLine->text())
                    {
                        //密码正确
                        if(query.value(1).toString() == ui->login_PassLine->text())
                        {
                            if(query.value(2).toString() == tr("管理员"))
                            {
                                QDialog::accept();
                                loginDialog::Sa = true;
                                Sa::SaID = ui->login_UserLine->text();
                            }
                            else
                            {
                                QDialog::accept();
                                loginDialog::Emp = true;
                            }
                            break;
                        }
                    }
                }
            }
            else
            if(Coun.at(0) == '2')   //用户
            {
                QSqlQuery query;
                query.exec("select UseID,UsePass from UserT");
                while(query.next())
                {
                    //账号正确
                    if(query.value(0).toString() == ui->login_UserLine->text())
                    {
                        //密码正确
                        if(query.value(1).toString() == ui->login_PassLine->text())
                        {
                            QDialog::accept();
                            loginDialog::User = true;
                            MainWindow::UseID = ui->login_UserLine->text();
                            break;
                        }
                    }
                }
                if(!query.next())
                {
                    //账号错误
                    QMessageBox::warning(this,tr("帐号或密码错误"),
                                             tr("请正确输入再登录！"),QMessageBox::Ok);
                    ui->login_UserLine->clear();
                    ui->login_PassLine->clear();
                    ui->login_UserLine->setFocus();
                }
            }
            else                    //非法者
            {
                    QMessageBox::warning(this,tr("帐号或密码错误"),
                                             tr("请正确输入再登录！"),QMessageBox::Ok);
                    ui->login_UserLine->clear();
                    ui->login_PassLine->clear();
                    ui->login_UserLine->setFocus();
            }

        }
    }
}

void loginDialog::on_login_ExitBtn_clicked()
{
    QDialog::reject();
}
