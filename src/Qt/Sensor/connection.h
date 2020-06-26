#ifndef CONNECTION_H
#define CONNECTION_H
#include<QMessageBox>
#include<QSqlDatabase>
#include<QSqlQuery>

static bool createConnection()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localhost");
    db.setDatabaseName("mySensor.db");
    db.setUserName("root");
    db.setPassword("");
    if(!db.open())
    {
        QMessageBox::critical(0,QObject::tr("无法打开数据库"),"无法创建数据库连接！",QMessageBox::Cancel);
        return false;
    }
    QSqlQuery query;
    //使数据库支持中文
    query.exec("SETNAMES'Latin1'");

    //创建异常数据表
    query.exec("create table ErrSen(SenID char(8) ,"
               "SenTime varchar(20) ,"
               "ProID char(3),"
               "SenTem float(2),"
               "SenLig float(2)"
               "primary key(SenID,SenTime)"
               ");");
    query.exec("alter table ErrSen"
               "add constraint E1 default(24.00) for SenTem;");
    query.exec("alter table ErrSen"
               "add constraint E2 default(200.00) for SenLig;");
    query.exec("insert into ErrSen values('11111112','12:04','003','24.32','312.12');");

    //创建项目表
    query.exec("create table Project(ProID char(3) primary key,"
               "ProName varchar(20) not null,"
               "ProPos varchar(20) not null,"
               "ProDate varchar(20) not null"
               ");");
    query.exec("insert into Project values('001','小花园','梅江区2路31号','2017.12.31');");
    query.exec("insert into Project values('002','小农场','南区1栋503','2017.12.4');");
    query.exec("insert into Project values('003','小鱼缸','东区4栋102','2017.11.5');");

    //创建温度上下限表
    query.exec("create table TemLight(TemUp float(2),"
               "TemDown float(2),"
               "LightUp float(2),"
               "LightDown float(2)"
               ");");
    query.exec("alter table TemLight "
               "add constraint T1 default(35.00) for TemUp;	");
    query.exec("alter table TemLight"
               "add constraint T2 default(-1.00) for TemDown;");
    query.exec("alter table TemLight"
               "add constraint T3 default(500.00) for LightUp;	");
    query.exec("alter table TemLight"
               "add constraint T4 default(100.00) for LightDown;");
    query.exec("delete from TemLight");
    query.exec("insert into TemLight values(80.00,30.00,450.00,180.00);	");


    //创建传感器使用年限表
    query.exec("create table SenDate(SenID char(8) primary key,"
               "MaxDate smallint,"
               "UseDate smallint);");
    query.exec("insert into SenDate values('11111110',10,0);");
    query.exec("insert into SenDate values('11111111',8,1);");
    query.exec("insert into SenDate values('11111112',8,2);");
    query.exec("insert into SenDate values('11111113',8,0);");
    query.exec("insert into SenDate values('11111114',10,5);");
    query.exec("insert into SenDate values('11111115',10,0);");



    //创建正常数据表
    query.exec("create table Sensor(SenID char(8),"
               "SenTime varchar(20),"
               "ProID char(3),"
               "SenTem float(2),"
               "SenLig float(2),"
               "foreign key(ProID) references Project(ProID)"
                       "on delete cascade"
                       "on update cascade,"
               "foreign key(SenID) references SenDate(SenID)"
                       "on delete cascade"
                       "on update cascade,"
               "primary key(SenID,SenTime)"
                ");");
    query.exec("alter table Sensor "
               "add constraint S1 default(24.00) for SenTem;");
    query.exec("alter table Sensor "
               "add constraint S2 default(0.00) for SenLig;");
    query.exec("create unique index SenIndex on Sensor(SenID,SenTime);");
    query.exec("insert into Sensor values('11111110','08:15','001','24.00','354.45');");
    query.exec("insert into Sensor values('11111111','09:45','002','24.55','300.87');");
    query.exec("insert into Sensor values('11111112','12:04','003','24.32','312.12');");


    //创建雇员关系
    query.exec("create table Employee(EmpID char(8) primary key,"
               "ProID char(3),"
               "EmpName varchar(20) not null,"
               "EmpAge smallint not null,"
               "EmpTitle varchar(20) not null,"
               "EmpPass varchar(20),"
               "foreign key(ProID) references Project(ProID)"
                             "on delete cascade"
                             "on update cascade"
               ");");
    query.exec("insert into Employee values('1511101','001','曹操',25,'管理员','123');");
    query.exec("insert into Employee values('1511102','001','孙权',26,'管理员','123');");
    query.exec("insert into Employee values('1511103','001','吕布',21,'普通职工','123');");
    query.exec("insert into Employee values('1511104','002','孙尚香',22,'普通职工','123');");
    query.exec("insert into Employee values('1511105','002','马超',34,'普通职工','123');");
    query.exec("insert into Employee values('1511106','003','郭嘉',30,'普通职工','123');");

    //创建用户关系
    query.exec("create table UserT(UseID char(8) primary key,"
               "ProID char(3),"
               "UseName varchar(20) not null,"
               "UsePass varchar(20),"
               "UsePow smallint check(UsePow in(1,2,3)),"
               "foreign key(ProID) references Project(ProID)"
                             "on delete cascade"
                             "on update cascade"
               ");");
    query.exec("insert into UserT values('2511101','001','张辽','123',2);");
    query.exec("insert into UserT values('2511102','002','司马懿','123',1);");
    query.exec("insert into UserT values('2511103','003','夏侯渊','123',3);");


    //职工与传感器
    query.exec("create table EmploysSensor(EmpID char(8) not null ,"
               "SenID char(8) not null ,"
               "foreign key(EmpID) references Employee(EmpID)"
                    "on delete cascade"
                    "on update cascade,"
               "foreign key(SenID) references SenDate(SenID)"
                    "on delete cascade"
                    "on update cascade,"
               "primary key(EmpID,SenID)"
               ");");
    query.exec("insert into EmploysSensor values('1511103','11111110');");
    query.exec("insert into EmploysSensor values('1511104','11111111');");
    query.exec("insert into EmploysSensor values('1511105','11111112');");
    query.exec("insert into EmploysSensor values('1511106','11111113');");

    return true;
}
#endif//CONNECTION_H




















