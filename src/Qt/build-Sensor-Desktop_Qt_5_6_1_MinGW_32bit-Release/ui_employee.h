/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employee
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Employee)
    {
        if (Employee->objectName().isEmpty())
            Employee->setObjectName(QStringLiteral("Employee"));
        Employee->resize(800, 600);
        menubar = new QMenuBar(Employee);
        menubar->setObjectName(QStringLiteral("menubar"));
        Employee->setMenuBar(menubar);
        centralwidget = new QWidget(Employee);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Employee->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Employee);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Employee->setStatusBar(statusbar);

        retranslateUi(Employee);

        QMetaObject::connectSlotsByName(Employee);
    } // setupUi

    void retranslateUi(QMainWindow *Employee)
    {
        Employee->setWindowTitle(QApplication::translate("Employee", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Employee: public Ui_Employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
