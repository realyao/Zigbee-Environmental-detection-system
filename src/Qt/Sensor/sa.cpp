#include "sa.h"
#include "ui_sa.h"
#include "mainwindow.h"
#include "logindialog.h"

#include <QSqlTableModel>
#include <QMessageBox>
#include <QStringList>
#include <QSqlQuery>
#include <QDebug>


Sa::Sa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sa)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/myICO/my.ico"));
    setWindowTitle(tr("ZigBee小型环境监测系统"));

    //新建模型
    model = new QSqlTableModel(this);

    //填充个人
    QSqlQuery query;
    query.exec("select * from Employee");
    while(query.next())
    {
        if(query.value(0).toString() == Sa::SaID)
        {
            ui->Sa_IDLabel->setText(query.value(0).toString());
            ui->Sa_ProIDLabel->setText(query.value(1).toString());
            ui->Sa_NameLabel->setText(query.value(2).toString());
            ui->Sa_AgeLabel->setText(query.value(3).toString());
            ui->Sa_TitleLabel->setText(query.value(4).toString());
            break;
        }
    }
}

Sa::~Sa()
{
    delete ui;
}

void Sa::on_pushButton_4_clicked()
{
    ui->Up_stackedWidget->setCurrentIndex(0);
}

void Sa::on_pushButton_5_clicked()
{
    ui->Up_stackedWidget->setCurrentIndex(1);
}

void Sa::on_pushButton_6_clicked()
{
    ui->Up_stackedWidget->setCurrentIndex(3);
}

//项目查询
void Sa::on_pushButton_11_clicked()
{
    ui->Down_stackedWidget->setCurrentIndex(0);

    model->setTable("Project");
    model->setHeaderData(0,Qt::Horizontal,tr("项目ID"));
    model->setHeaderData(1,Qt::Horizontal,tr("项目名称"));
    model->setHeaderData(2,Qt::Horizontal,tr("布局地点"));
    model->setHeaderData(3,Qt::Horizontal,tr("开始日期"));
    model->select();
    ui->Sa_CheckProtableView->setModel(model);

}

//用户查询
void Sa::on_pushButton_12_clicked()
{
    ui->Down_stackedWidget->setCurrentIndex(1);

    model->setTable("UserT");
    model->setHeaderData(0,Qt::Horizontal,tr("用户ID"));
    model->setHeaderData(1,Qt::Horizontal,tr("项目ID"));
    model->setHeaderData(2,Qt::Horizontal,tr("用户名称"));
    model->setHeaderData(3,Qt::Horizontal,tr("用户密码"));
    model->setHeaderData(4,Qt::Horizontal,tr("用户权限"));
    model->select();
    ui->Sa_CheckUsetableView->setModel(model);
}

//传感器查询
void Sa::on_pushButton_13_clicked()
{
    ui->Down_stackedWidget->setCurrentIndex(2);

    model->setTable("Sensor");
    model->setHeaderData(0,Qt::Horizontal,tr("传感器ID"));
    model->setHeaderData(1,Qt::Horizontal,tr("时间"));
    model->setHeaderData(2,Qt::Horizontal,tr("项目ID"));
    model->setHeaderData(3,Qt::Horizontal,tr("温度"));
    model->setHeaderData(4,Qt::Horizontal,tr("亮度"));
    model->select();
    ui->Sa_CheckSentableView->setModel(model);
}


//职工查询
void Sa::on_pushButton_14_clicked()
{
    ui->Down_stackedWidget->setCurrentIndex(3);

    model->setTable("Employee");
    model->setHeaderData(0,Qt::Horizontal,tr("职工ID"));
    model->setHeaderData(1,Qt::Horizontal,tr("项目ID"));
    model->setHeaderData(2,Qt::Horizontal,tr("雇职工名称"));
    model->setHeaderData(3,Qt::Horizontal,tr("职工年龄"));
    model->setHeaderData(4,Qt::Horizontal,tr("职称"));
    model->setHeaderData(5,Qt::Horizontal,tr("职工密码"));
    model->select();
    ui->Sa_CheckEmptableView->setModel(model);
}

void Sa::on_pushButton_3_clicked()
{
    close();
}

//sa个人
void Sa::on_pushButton_clicked()
{
    ui->Up_stackedWidget->setCurrentIndex(2);


}

void Sa::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Sa::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

    QSqlQueryModel *goodBrandModel=new QSqlQueryModel(this);
    goodBrandModel->setQuery(QString("select ProID from Project"));
    ui->Sa_AddUse_ProID_ComBox->setModel(goodBrandModel);

    QString one("1");
    QString two("2");
    QString three("3");
    ui->Sa_UseQuanxian_ComBox->addItem(one);
    ui->Sa_UseQuanxian_ComBox->addItem(two);
    ui->Sa_UseQuanxian_ComBox->addItem(three);
}

void Sa::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

    QSqlQueryModel *Model=new QSqlQueryModel(this);
    Model->setQuery(QString("select ProID from Project"));
    ui->Sa_AddSenProIDComBox->setModel(Model);
}

//职工添加
void Sa::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

    QSqlQueryModel *goodBrandModel=new QSqlQueryModel(this);
    goodBrandModel->setQuery(QString("select ProID from Project"));
    ui->Sa_EmpProIDComBox->setModel(goodBrandModel);

    QString sa("管理员");
    QString emp("普通职工");
    ui->Sa_EmpTitleComBox->addItem(sa);
    ui->Sa_EmpTitleComBox->addItem(emp);
}

//注销
void Sa::on_pushButton_2_clicked()
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

void Sa::on_pushButton_17_clicked()
{
    ui->Up_stackedWidget->setCurrentIndex(4);
}

void Sa::on_pushButton_27_clicked()
{
    ui->Delete_stackedWidget->setCurrentIndex(0);

    QSqlQueryModel *goodBrandModel=new QSqlQueryModel(this);
    goodBrandModel->setQuery(QString("select ProID from Project"));
    ui->Sa_DeleteProComboBox->setModel(goodBrandModel);
}

void Sa::on_pushButton_28_clicked()
{
    ui->Delete_stackedWidget->setCurrentIndex(1);

    QSqlQueryModel *goodBrandModel=new QSqlQueryModel(this);
    goodBrandModel->setQuery(QString("select UseID from UserT"));
    ui->Sa_Delete_UserID_comboBox->setModel(goodBrandModel);
}

void Sa::on_pushButton_29_clicked()
{
    ui->Delete_stackedWidget->setCurrentIndex(2);

    QSqlQueryModel *goodBrandModel=new QSqlQueryModel(this);
    goodBrandModel->setQuery(QString("select EmpID from Employee"));
    ui->Sa_DelectEmpComboBox->setModel(goodBrandModel);
}

void Sa::on_pushButton_18_clicked()
{
    ui->Receive_stackedWidget->setCurrentIndex(0);

    QSqlQueryModel *goodBrandModel=new QSqlQueryModel(this);
    goodBrandModel->setQuery(QString("select ProID from Project"));
    ui->Sa_R_ProIDcomboBox->setModel(goodBrandModel);
}

void Sa::on_pushButton_19_clicked()
{
    ui->Receive_stackedWidget->setCurrentIndex(1);

    QSqlQueryModel *goodBrandModel=new QSqlQueryModel(this);
    goodBrandModel->setQuery(QString("select UseID from UserT"));
    ui->Sa_R_UseIDcomboBox->setModel(goodBrandModel);

    QString one("1");
    QString two("2");
    QString three("3");
    ui->Sa_R_UsePowComboBox->addItem(one);
    ui->Sa_R_UsePowComboBox->addItem(two);
    ui->Sa_R_UsePowComboBox->addItem(three);
}

void Sa::on_pushButton_21_clicked()
{
    ui->Receive_stackedWidget->setCurrentIndex(2);

    QSqlQueryModel *goodBrandModel=new QSqlQueryModel(this);
    goodBrandModel->setQuery(QString("select EmpID from Employee"));
    ui->Sa_R_EmpIDcomboBox->setModel(goodBrandModel);

    QSqlQueryModel *Model=new QSqlQueryModel(this);
    Model->setQuery(QString("select ProID from Project"));
    ui->Sa_R_EmpProIDComboBox->setModel(Model);

    QString sa("管理员");
    QString emp("普通职工");
    ui->Sa_R_EmpTitleComboBox->addItem(sa);
    ui->Sa_R_EmpTitleComboBox->addItem(emp);
}

void Sa::on_Sa_Emp_Clear_clicked()
{
    ui->Sa_EmpAgeLine->setValue(0);
    ui->Sa_EmpIDLine->clear();
    ui->Sa_EmpNaleLine->clear();
    ui->Sa_EmpPassLine->clear();
    ui->Sa_EmpProIDComBox->clear();
    ui->Sa_EmpTitleComBox->clear();
}

void Sa::on_Emp_Sen_Clear_clicked()
{
    ui->Sa_ADDSenDateSpinBox->setValue(0);
    ui->Sa_ADDSenIDLine->clear();
    ui->Sa_AddSenProIDComBox->clear();
}

//项目添加
void Sa::on_Emp_Pro_Sure_clicked()
{
    //获得编辑值
    QString ProID = ui->Sa_AddProID->text();
    if(ProID.isEmpty())
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请填入项目ID！"),QMessageBox::Ok);
        ui->Sa_AddProID->setFocus();
    }
    QString ProName = ui->Sa_AddProName->text();
    if(ProName.isEmpty())
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请填入项目名称！"),QMessageBox::Ok);
        ui->Sa_AddProName->setFocus();
    }
    QString ProPos = ui->Sa_AddProPos->text();
    if(ProPos.isEmpty())
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请填入项目布局地点！"),QMessageBox::Ok);
        ui->Sa_AddProPos->setFocus();
    }
    QString ProDate = ui->Sa_AdddateEdit->text();
    for(int i = 0; i<ProDate.length();i++)
        if(ProDate.at(i) == '/')
            ProDate[i] = '.';

    //插入数据库，设计事务
    QSqlDatabase::database().transaction();
    QSqlQuery query;
    bool success = query.exec(QString("insert into Project values('%1','%2','%3','%4');").arg(ProID).arg(ProName).arg(ProPos).arg(ProDate));
    if(success)
    {
        QSqlDatabase::database().commit();
        QMessageBox::information(this,tr("信息"),
                                 tr("添加成功！"),QMessageBox::Ok);
    }
    else
    {
        QSqlDatabase::database().rollback();
        QMessageBox::warning(this,tr("警告"),
                                 tr("添加失败，请查询详细信息！"),QMessageBox::Ok);
    }
    on_Emp_Pro_Clear_clicked();
}

void Sa::on_Emp_Pro_Clear_clicked()
{
    ui->Sa_AddProID->clear();
    ui->Sa_AddProName->clear();
    ui->Sa_AddProPos->clear();
}

//添加用户
void Sa::on_Emp_Use_Sure_clicked()
{
    QString UseID = ui->Sa_AddUseID->text();
    if(UseID.isEmpty())
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请填入用户ID！"),QMessageBox::Ok);
        ui->Sa_AddUseID->setFocus();
    }
    QString ProID = ui->Sa_AddUse_ProID_ComBox->currentText();
    if(ProID.isEmpty())
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请选择项目ID！"),QMessageBox::Ok);
        ui->Sa_AddUse_ProID_ComBox->setFocus();
    }
    QString UseName = ui->Sa_AddUseName->text();
    if(UseName.isEmpty())
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请选填入用户名称！"),QMessageBox::Ok);
        ui->Sa_AddUseName->setFocus();
    }
    QString UsePass = ui->Sa_AddUsePass->text();
    if(UsePass.isEmpty())
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请填入用户密码！"),QMessageBox::Ok);
        ui->Sa_AddUsePass->setFocus();
    }
    QString UsePower = ui->Sa_UseQuanxian_ComBox->currentText();
    if(UsePower.isEmpty())
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请选择用户权限！"),QMessageBox::Ok);
        ui->Sa_UseQuanxian_ComBox->setFocus();
    }

    //插入数据库，设计事务
    QSqlDatabase::database().transaction();
    QSqlQuery query;
    bool success = query.exec(QString("insert into UserT values('%1','%2','%3','%4','%5');").arg(UseID).arg(ProID).arg(UseName).arg(UsePass).arg(UsePower));
    if(success)
    {
        QSqlDatabase::database().commit();
        QMessageBox::information(this,tr("信息"),
                                 tr("添加成功！"),QMessageBox::Ok);
    }
    else
    {
        QSqlDatabase::database().rollback();
        QMessageBox::warning(this,tr("警告"),
                                 tr("添加失败，请查询详细信息！"),QMessageBox::Ok);
    }
    on_Emp_Use_Clear_clicked();
}

void Sa::on_Emp_Use_Clear_clicked()
{
    ui->Sa_AddUseID->clear();
    ui->Sa_AddUse_ProID_ComBox->clear();
    ui->Sa_AddUseName->clear();
    ui->Sa_AddUsePass->clear();
    ui->Sa_UseQuanxian_ComBox->clear();
}

void Sa::on_Emp_Sen_Sure_clicked()
{
    //获得数据
    QString SenID = ui->Sa_ADDSenIDLine->text();
    if(SenID.isEmpty())
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请填入传感器ID！"),QMessageBox::Ok);
        ui->Sa_ADDSenIDLine->setFocus();
    }
    int SenData = ui->Sa_ADDSenDateSpinBox->value();
    if(SenData == 0)
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请选择使用年限！"),QMessageBox::Ok);
        ui->Sa_ADDSenDateSpinBox->setFocus();
    }
    QString ProID = ui->Sa_AddSenProIDComBox->currentText();
    if(ProID.isEmpty())
    {
        QMessageBox::warning(this,tr("空值"),
                                 tr("请选择项目ID！"),QMessageBox::Ok);
        ui->Sa_AddSenProIDComBox->setFocus();
    }

    //插入数据库
    QSqlDatabase::database().transaction();
    QSqlQuery query;
    bool success = query.exec(QString("insert into SenDate values('%1','%2','0');").arg(SenID).arg(SenData));
    if(success)
    {
        QSqlDatabase::database().commit();
        QMessageBox::information(this,tr("信息"),
                                 tr("添加成功！"),QMessageBox::Ok);
    }
    else
    {
        QSqlDatabase::database().rollback();
        QMessageBox::warning(this,tr("警告"),
                                 tr("添加失败，请查询详细信息！"),QMessageBox::Ok);
    }

    on_Emp_Sen_Clear_clicked();
}

void Sa::on_Sa_Emp_Sure_clicked()
{
    QString EmpAge = ui->Sa_EmpAgeLine->text();
    QString EmpID = ui->Sa_EmpIDLine->text();
    QString EmpName = ui->Sa_EmpNaleLine->text();
    QString EmpPass = ui->Sa_EmpPassLine->text();
    QString EmpProID = ui->Sa_EmpProIDComBox->currentText();
    QString EmpTitle = ui->Sa_EmpTitleComBox->currentText();

    //插入数据库
    QSqlDatabase::database().transaction();
    QSqlQuery query;
    bool success = query.exec(QString("insert into Employee values('%1','%2','%3','%4','%5','%6');").arg(EmpID).arg(EmpProID).arg(EmpName).arg(EmpAge).arg(EmpTitle).arg(EmpPass));
    if(success)
    {
        QSqlDatabase::database().commit();
        QMessageBox::information(this,tr("信息"),
                                 tr("添加成功！"),QMessageBox::Ok);
    }
    else
    {
        QSqlDatabase::database().rollback();
        QMessageBox::warning(this,tr("警告"),
                                 tr("添加失败，请查询详细信息！"),QMessageBox::Ok);
    }
    on_Sa_Emp_Clear_clicked();
}

void Sa::on_pushButton_30_clicked()
{
    QString ProID = ui->Sa_DeleteProComboBox->currentText();

    QSqlDatabase::database().transaction();
    QSqlQuery query;
    bool success;
    success = query.exec(QString("delete from Project where ProID = '%1'").arg(ProID));
    success = success && query.exec(QString("delete from UserT where ProID = '%1'").arg(ProID));
    success = success && query.exec(QString("delete from Sensor where ProID = '%1'").arg(ProID));
    success = success && query.exec(QString("update Employee set ProID = " " where ProID = '%1'").arg(ProID));
    if(success)
    {
        QSqlDatabase::database().commit();
        QMessageBox::information(this,tr("信息"),
                                 tr("删除成功！"),QMessageBox::Ok);
    }
    else
    {
        QSqlDatabase::database().rollback();
        QMessageBox::warning(this,tr("警告"),
                                 tr("删除失败，请查询详细信息！"),QMessageBox::Ok);
    }

}

void Sa::on_pushButton_32_clicked()
{
    QString UseID = ui->Sa_Delete_UserID_comboBox->currentText();

    QSqlDatabase::database().transaction();
    QSqlQuery query;
    bool success;
    success = query.exec(QString("delete from UserT where UseID = '%1'").arg(UseID));
    success = success && query.exec(QString("select ProID from UserT where UseID = '%1'").arg(UseID));
    query.next();
    QString ProID = query.value(0).toString();
    success = success && query.exec(QString("delete from Sensor where ProID = '%1'").arg(ProID));
    if(success)
    {
        QSqlDatabase::database().commit();
        QMessageBox::information(this,tr("信息"),
                                 tr("删除成功！"),QMessageBox::Ok);
    }
    else
    {
        QSqlDatabase::database().rollback();
        QMessageBox::warning(this,tr("警告"),
                                 tr("删除失败，请查询详细信息！"),QMessageBox::Ok);
    }
}

void Sa::on_pushButton_34_clicked()
{
    QString EmpID = ui->Sa_DelectEmpComboBox->currentText();

    QSqlDatabase::database().transaction();
    QSqlQuery query;
    bool success;
    success = query.exec(QString("delete from Employee where EmpID = '%1'").arg(EmpID));
    if(success)
    {
        QSqlDatabase::database().commit();
        QMessageBox::information(this,tr("信息"),
                                 tr("删除成功！"),QMessageBox::Ok);
    }
    else
    {
        QSqlDatabase::database().rollback();
        QMessageBox::warning(this,tr("警告"),
                                 tr("删除失败，请查询详细信息！"),QMessageBox::Ok);
    }
}

void Sa::on_pushButton_23_clicked()
{
    ui->Sa_R_ProDateLine->clear();
    ui->Sa_R_ProIDcomboBox->clear();
    ui->Sa_R_ProNameLine->clear();
    ui->Sa_R_ProPosLine->clear();
}

//项目修改
void Sa::on_pushButton_22_clicked()
{
    QString ProDate = ui->Sa_R_ProDateLine->text();
    QString ProID = ui->Sa_R_ProIDcomboBox->currentText();
    QString ProName = ui->Sa_R_ProNameLine->text();
    QString ProPos = ui->Sa_R_ProPosLine->text();

    QSqlDatabase::database().transaction();
    QSqlQuery query;
    bool yes = query.exec(QString("update Project set ProDate='%1',ProName='%2',ProPos='%3' where ProID = '%4'").arg(ProDate).arg(ProName).arg(ProPos).arg(ProID));
    if(yes)
    {
        QSqlDatabase::database().commit();
        QMessageBox::information(this,tr("信息"),
                                 tr("修改成功！"),QMessageBox::Ok);
    }
    else
    {
        QSqlDatabase::database().rollback();
        QMessageBox::warning(this,tr("警告"),
                                 tr("修改失败，请检查信息！"),QMessageBox::Ok);
    }
    on_pushButton_23_clicked();
}

void Sa::on_pushButton_25_clicked()
{
    ui->Sa_R_UseIDcomboBox->clear();
    ui->Sa_R_UseNameLine->clear();
    ui->Sa_R_UsePassLine->clear();
    ui->Sa_R_UsePowComboBox->clear();
}

void Sa::on_pushButton_24_clicked()
{
    QString UseID = ui->Sa_R_UseIDcomboBox->currentText();
    QString UseName = ui->Sa_R_UseNameLine->text();
    QString UsePass = ui->Sa_R_UsePassLine->text();
    QString UsePow = ui->Sa_R_UsePowComboBox->currentText();

    QSqlDatabase::database().transaction();
    QSqlQuery query;
    bool yes = query.exec(QString("update UserT set UseName='%1',UsePass='%2',UsePow='%3' where UseID='%4'").arg(UseName).arg(UsePass).arg(UsePow).arg(UseID));
    if(yes)
    {
        QSqlDatabase::database().commit();
        QMessageBox::information(this,tr("信息"),
                                 tr("修改成功！"),QMessageBox::Ok);
    }
    else
    {
        QSqlDatabase::database().rollback();
        QMessageBox::warning(this,tr("警告"),
                                 tr("修改失败，请检查信息！"),QMessageBox::Ok);
    }
    on_pushButton_25_clicked();
}

void Sa::on_pushButton_26_clicked()
{
    ui->Sa_R_EmpAgeSpinBox->setValue(0);
    ui->Sa_R_EmpIDcomboBox->clear();
    ui->Sa_R_EmpNameLine->clear();
    ui->Sa_R_EmpPassLine->clear();
    ui->Sa_R_EmpProIDComboBox->clear();
    ui->Sa_R_EmpTitleComboBox->clear();
}

void Sa::on_pushButton_20_clicked()
{

    int EmpAge = ui->Sa_R_EmpAgeSpinBox->value();
    QString EmpID = ui->Sa_R_EmpIDcomboBox->currentText();
    QString EmpName = ui->Sa_R_EmpNameLine->text();
    QString EmpPass = ui->Sa_R_EmpPassLine->text();
    QString ProID = ui->Sa_R_EmpProIDComboBox->currentText();
    QString EmpTitle = ui->Sa_R_EmpTitleComboBox->currentText();


    QSqlDatabase::database().transaction();
    QSqlQuery query;                                                                                                                        //EmpAge EmpID EmpName  EmpPass  EmpID EmpTitle
    bool yes = query.exec(QString("update Employee set EmpAge='%1',ProID='%2',EmpName='%3',EmpPass='%4',EmpTitle='%5' where EmpID='%6'").arg(EmpAge).arg(ProID).arg(EmpName).arg(EmpPass).arg(EmpTitle).arg(EmpID));
    if(yes)
    {
        QSqlDatabase::database().commit();
        QMessageBox::information(this,tr("信息"),
                                 tr("修改成功！"),QMessageBox::Ok);
    }
    else
    {
        QSqlDatabase::database().rollback();
        QMessageBox::warning(this,tr("警告"),
                                 tr("修改失败，请检查信息！"),QMessageBox::Ok);
    }

    on_pushButton_26_clicked();
}
