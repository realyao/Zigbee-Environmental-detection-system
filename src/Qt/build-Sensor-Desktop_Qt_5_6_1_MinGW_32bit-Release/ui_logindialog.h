/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QLabel *login_NoPassLabel;
    QFrame *line;
    QFrame *line_3;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *login_UserLine;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLineEdit *login_PassLine;
    QSplitter *splitter_4;
    QPushButton *login_SureBtn;
    QPushButton *login_ExitBtn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QStringLiteral("loginDialog"));
        loginDialog->resize(640, 360);
        login_NoPassLabel = new QLabel(loginDialog);
        login_NoPassLabel->setObjectName(QStringLiteral("login_NoPassLabel"));
        login_NoPassLabel->setGeometry(QRect(370, 180, 72, 15));
        QFont font;
        font.setUnderline(true);
        login_NoPassLabel->setFont(font);
        login_NoPassLabel->setCursor(QCursor(Qt::OpenHandCursor));
        login_NoPassLabel->setMouseTracking(false);
        line = new QFrame(loginDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(140, 70, 341, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(loginDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(140, 210, 341, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        splitter_3 = new QSplitter(loginDialog);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(180, 100, 251, 61));
        splitter_3->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(11);
        label->setFont(font1);
        splitter->addWidget(label);
        login_UserLine = new QLineEdit(splitter);
        login_UserLine->setObjectName(QStringLiteral("login_UserLine"));
        splitter->addWidget(login_UserLine);
        splitter_3->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        splitter_2->addWidget(label_2);
        login_PassLine = new QLineEdit(splitter_2);
        login_PassLine->setObjectName(QStringLiteral("login_PassLine"));
        login_PassLine->setEchoMode(QLineEdit::Password);
        splitter_2->addWidget(login_PassLine);
        splitter_3->addWidget(splitter_2);
        splitter_4 = new QSplitter(loginDialog);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(190, 280, 226, 28));
        splitter_4->setOrientation(Qt::Horizontal);
        login_SureBtn = new QPushButton(splitter_4);
        login_SureBtn->setObjectName(QStringLiteral("login_SureBtn"));
        login_SureBtn->setFont(font1);
        splitter_4->addWidget(login_SureBtn);
        login_ExitBtn = new QPushButton(splitter_4);
        login_ExitBtn->setObjectName(QStringLiteral("login_ExitBtn"));
        login_ExitBtn->setFont(font1);
        splitter_4->addWidget(login_ExitBtn);
        widget = new QWidget(loginDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 10, 641, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        label_3->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(loginDialog);

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Dialog", 0));
        login_NoPassLabel->setText(QApplication::translate("loginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("loginDialog", "\345\270\220\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("loginDialog", "\345\257\206\347\240\201\357\274\232", 0));
        login_SureBtn->setText(QApplication::translate("loginDialog", "\347\241\256\345\256\232", 0));
        login_ExitBtn->setText(QApplication::translate("loginDialog", "\351\200\200\345\207\272", 0));
        label_3->setText(QApplication::translate("loginDialog", "\346\254\242\350\277\216\344\275\277\347\224\250\345\260\217\345\236\213\347\216\257\345\242\203\347\233\221\346\265\213\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
