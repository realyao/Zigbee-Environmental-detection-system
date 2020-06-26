#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logindialog.h"
#include "sa.h"
#include "connection.h"

#include <QDebug>
#include <QDateTime>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QSqlQuery>
#include <QTime>
#include <cstdlib>
#include <QSqlTableModel>

int MainWindow::time = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/myICO/my.ico"));
    setWindowTitle(tr("小型环境监测系统"));


    //设计行编辑器不可见
    ui->Use_ShiUpLine->setDisabled(true);
    ui->Use_ShiDownLine->setDisabled(true);
    ui->Use_SkyDownLine->setDisabled(true);
    ui->Use_SkyUpLine->setDisabled(true);

    //新建模型
    model = new QSqlTableModel(this);

    //设计随机数种子
    QTime time;
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);

    //时间
    startTimer(1000);

    //填充个人
    QSqlQuery query;
    query.exec("select UseID,ProId,UseName from UserT");
    while(query.next())
    {
        if(query.value(0).toString() == MainWindow::UseID)
        {
            ui->Use_ID->setText(query.value(0).toString());
            ui->Use_ProID->setText(query.value(1).toString());
            ui->Use_UesName->setText(query.value(2).toString());

            query.exec(QString("select ProDate from Project where ProID = '%1'").arg(ui->Use_ProID->text()));
            query.next();
            ui->Use_ProDate->setText(query.value(0).toString());
        }
    }

    query.exec("delete from ErrSen");
}

void MainWindow::readyReadSlot()
{
    time++;

    QByteArray arr = m_reader.readAll();
    QString tem;
    QString light;
    tem[0] = arr.at(1);
    tem[1] = arr.at(2);
    tem[2] = '.';
    QString s = QString("%1").arg(qrand()%10);
    tem[3] = s.at(0);
    s = QString("%1").arg(qrand()%10);
    tem[4] = s.at(0);

    light[0] = arr.at(4);
    light[1] = arr.at(5);
    light[2] = arr.at(6);
    light[3] = '.';
    s = QString("%1").arg(qrand()%10);
    light[4] = s.at(0);
    s = QString("%1").arg(qrand()%10);
    light[5] = s.at(0);

    //每隔3秒显示
    ui->Temlabel->setText(tem);
    ui->Lightlabel->setText(light);

    //每隔3秒检查
    QSqlQuery query;
    query.exec("select * from TemLight");
    query.next();
    QString TemUp = query.value(0).toString();
    QString TemDown = query.value(1).toString();
    QString LigUp = query.value(2).toString();
    QString LigDown = query.value(3).toString();

    if(tem.toFloat()>=TemUp.toFloat())
    {
        QMessageBox::warning(this,tr("温度警告"),
                                 tr("高温，请检查异常！"),QMessageBox::Ok);
        query.exec(QString("select ProID from UserT where UseID = '%1'").arg(MainWindow::UseID));
        query.next();
        QString ProID = query.value(0).toString();
        query.exec(QString("select SenID from Sensor where ProID = '%1'").arg(ProID));
        query.next();
        QString SenID = query.value(0).toString();
        query.exec(QString("insert into ErrSen values('%1','%2','%3','%4','%5')").arg(SenID).arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh")).arg(ProID).arg(tem).arg(light));

    }
    if(tem.toFloat()<=TemDown.toFloat())
    {
        QMessageBox::warning(this,tr("温度警告"),
                                 tr("低温，请检查异常！"),QMessageBox::Ok);
        query.exec(QString("select ProID from UserT where UseID = '%1'").arg(MainWindow::UseID));
        query.next();
        QString ProID = query.value(0).toString();
        query.exec(QString("select SenID from Sensor where ProID = '%1'").arg(ProID));
        query.next();
        QString SenID = query.value(0).toString();
        query.exec(QString("insert into ErrSen values('%1','%2','%3','%4','%5')").arg(SenID).arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh")).arg(ProID).arg(tem).arg(light));
    }
    if(light.toFloat()>=LigUp.toFloat())
    {
        QMessageBox::warning(this,tr("亮度警告"),
                                 tr("高光强，请检查异常！"),QMessageBox::Ok);
        query.exec(QString("select ProID from UserT where UseID = '%1'").arg(MainWindow::UseID));
        query.next();
        QString ProID = query.value(0).toString();
        query.exec(QString("select SenID from Sensor where ProID = '%1'").arg(ProID));
        query.next();
        QString SenID = query.value(0).toString();
        query.exec(QString("insert into ErrSen values('%1','%2','%3','%4','%5')").arg(SenID).arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh")).arg(ProID).arg(tem).arg(light));
    }
    if(light.toFloat()<=LigDown.toFloat())
    {
        QMessageBox::warning(this,tr("亮度警告"),
                                 tr("低光强，请检查异常！"),QMessageBox::Ok);
        query.exec(QString("select ProID from UserT where UseID = '%1'").arg(MainWindow::UseID));
        query.next();
        QString ProID = query.value(0).toString();
        query.exec(QString("select SenID from Sensor where ProID = '%1'").arg(ProID));
        query.next();
        QString SenID = query.value(0).toString();
        query.exec(QString("insert into ErrSen values('%1','%2','%3','%4','%5')").arg(SenID).arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh")).arg(ProID).arg(tem).arg(light));
    }

    //每隔15秒记录一次
    if(time % 5 == 0)
    {
        QSqlQuery query;
        query.exec(QString("select ProID from UserT where UseID = '%1'").arg(MainWindow::UseID));
        query.next();
        QString ProID = query.value(0).toString();
        query.exec(QString("select SenID from Sensor where ProID = '%1'").arg(ProID));
        query.next();
        QString SenID = query.value(0).toString();
        query.exec(QString("insert into Sensor values('%1','%2','%3','%4','%5')").arg(SenID).arg(QDateTime::currentDateTime().toString("hh:mm:ss")).arg(ProID).arg(tem).arg(light));

    }

}

void MainWindow::timerEvent(QTimerEvent *event)
{
    ui->Use_Time->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Use_Check_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    //串口
    QSerialPortInfo com_info;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        com_info = info;
        break;
    }

    m_reader.setPort(com_info);
    if(m_reader.open(QIODevice::ReadOnly))
    {
        //配置设定
        m_reader.setBaudRate(QSerialPort::Baud115200);
        m_reader.setParity(QSerialPort::NoParity);
        m_reader.setDataBits(QSerialPort::Data8);
        m_reader.setStopBits(QSerialPort::OneStop);
        m_reader.setFlowControl(QSerialPort::NoFlowControl);

        m_reader.clearError();
        m_reader.clear();
        connect(&m_reader, SIGNAL(readyRead()), this, SLOT(readyReadSlot()));
    }
}

void MainWindow::on_Use_History_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    model->setTable("Sensor");
    model->setHeaderData(0,Qt::Horizontal,tr("传感器ID"));
    model->setHeaderData(1,Qt::Horizontal,tr("时间"));
    model->setHeaderData(2,Qt::Horizontal,tr("项目ID"));
    model->setHeaderData(3,Qt::Horizontal,tr("温度"));
    model->setHeaderData(4,Qt::Horizontal,tr("亮度"));
    model->select();
    ui->History_tableView->setModel(model);
}


//设置上下限
void MainWindow::on_Use_Warnning_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

//当日数据
void MainWindow::on_Use_TodayData_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    model->setTable("Sensor");
    model->setHeaderData(0,Qt::Horizontal,tr("传感器ID"));
    model->setHeaderData(1,Qt::Horizontal,tr("时间"));
    model->setHeaderData(2,Qt::Horizontal,tr("项目ID"));
    model->setHeaderData(3,Qt::Horizontal,tr("温度"));
    model->setHeaderData(4,Qt::Horizontal,tr("亮度"));
    model->select();
    ui->Use_TodaytableView->setModel(model);
}

void MainWindow::on_Use_mySelf_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_Use_Exit_clicked()
{
    close();
}

void MainWindow::on_Use_Return_clicked()
{
    close();
    loginDialog login;
    if(login.exec() == QDialog::Accepted)
    {
        if(loginDialog::User)
        {
            MainWindow *U = new MainWindow(this);
            U->setWindowModality(Qt::ApplicationModal);
            U->show();
        }

        if(loginDialog::Sa)
        {
            Sa *S = new Sa(this);
            S->setWindowModality(Qt::ApplicationModal);
            S->show();
        }
    }
    else
    {
        login.close();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QString TemUp = ui->Use_TemUpLine->text();
    if(TemUp.isEmpty())
        TemUp = "80.00";
    QString TemDown = ui->Use_TemDownLine->text();
    if(TemDown.isEmpty())
        TemDown = "30.00";
    QString LigUp = ui->Use_LigUpLine->text();
    if(LigUp.isEmpty())
        LigUp = "450.00";
    QString LigDown = ui->Use_LigDownLine->text();
    if(LigDown.isEmpty())
        LigDown = "150.00";

    QSqlQuery query;
    query.exec("delete from TemLight");
    query.exec(QString("insert into TemLight values('%1','%2','%3','%4')").arg(TemUp).arg(TemDown).arg(LigUp).arg(LigDown));

    QMessageBox::information(this,tr("设置参数上下限"),
                             tr("设置成功！"),QMessageBox::Ok);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->Use_TemUpLine->clear();
    ui->Use_TemDownLine->clear();
    ui->Use_LigUpLine->clear();
    ui->Use_LigDownLine->clear();
}
