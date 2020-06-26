/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *line;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QFrame *line_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_9;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLabel *Temlabel;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLabel *Lightlabel;
    QFrame *line_8;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_30;
    QLabel *Use_Time;
    QWidget *page_3;
    QLabel *label_6;
    QFrame *line_3;
    QTableView *History_tableView;
    QWidget *page_4;
    QLabel *label_8;
    QFrame *line_4;
    QLabel *Tem_UpDown_label;
    QLabel *Light_UpDown_label;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_17;
    QLineEdit *Use_ShiUpLine;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_16;
    QLineEdit *Use_ShiDownLine;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *Use_TemUpLine;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *Use_TemDownLine;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QLineEdit *Use_LigUpLine;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QLineEdit *Use_LigDownLine;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QLineEdit *Use_SkyUpLine;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_19;
    QLineEdit *Use_SkyDownLine;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *page_5;
    QLabel *label_22;
    QFrame *line_5;
    QTableView *Use_TodaytableView;
    QWidget *page_6;
    QLabel *label_23;
    QFrame *line_6;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_29;
    QLabel *label_35;
    QPushButton *pushButton_2;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_25;
    QLabel *label_31;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_24;
    QLabel *Use_ID;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_26;
    QLabel *Use_ProID;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_28;
    QLabel *Use_UesName;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_27;
    QLabel *Use_ProDate;
    QWidget *page_2;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout;
    QPushButton *Use_Check;
    QSpacerItem *horizontalSpacer;
    QPushButton *Use_History;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Use_Warnning;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Use_TodayData;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Use_mySelf;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Use_Return;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Use_Exit;
    QFrame *line_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(750, 500);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(100, 70, 571, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(40, 90, 671, 271));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 10, 61, 16));
        line_2 = new QFrame(page);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(290, 30, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 140, 531, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_5->addWidget(label_11);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 80, 471, 27));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);

        horizontalLayout_7->addWidget(label_2);

        Temlabel = new QLabel(layoutWidget1);
        Temlabel->setObjectName(QStringLiteral("Temlabel"));
        Temlabel->setFont(font);

        horizontalLayout_7->addWidget(Temlabel);


        horizontalLayout_9->addLayout(horizontalLayout_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_8->addWidget(label_3);

        Lightlabel = new QLabel(layoutWidget1);
        Lightlabel->setObjectName(QStringLiteral("Lightlabel"));
        Lightlabel->setFont(font);

        horizontalLayout_8->addWidget(Lightlabel);


        horizontalLayout_9->addLayout(horizontalLayout_8);

        line_8 = new QFrame(page);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(200, 200, 311, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        layoutWidget2 = new QWidget(page);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(200, 230, 311, 25));
        horizontalLayout_24 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(layoutWidget2);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setFont(font);

        horizontalLayout_24->addWidget(label_30);

        Use_Time = new QLabel(layoutWidget2);
        Use_Time->setObjectName(QStringLiteral("Use_Time"));
        Use_Time->setFont(font);

        horizontalLayout_24->addWidget(Use_Time);

        stackedWidget->addWidget(page);
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label->raise();
        line_2->raise();
        line_8->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(320, 10, 61, 16));
        line_3 = new QFrame(page_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(290, 30, 118, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        History_tableView = new QTableView(page_3);
        History_tableView->setObjectName(QStringLiteral("History_tableView"));
        History_tableView->setGeometry(QRect(50, 40, 591, 231));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_8 = new QLabel(page_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(320, 10, 61, 16));
        line_4 = new QFrame(page_4);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(290, 30, 118, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        Tem_UpDown_label = new QLabel(page_4);
        Tem_UpDown_label->setObjectName(QStringLiteral("Tem_UpDown_label"));
        Tem_UpDown_label->setGeometry(QRect(120, 110, 191, 16));
        Light_UpDown_label = new QLabel(page_4);
        Light_UpDown_label->setObjectName(QStringLiteral("Light_UpDown_label"));
        Light_UpDown_label->setGeometry(QRect(361, 110, 201, 20));
        label_20 = new QLabel(page_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(121, 220, 191, 20));
        label_21 = new QLabel(page_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(360, 220, 191, 20));
        layoutWidget3 = new QWidget(page_4);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(120, 160, 191, 55));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_17 = new QLabel(layoutWidget3);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_16->addWidget(label_17);

        Use_ShiUpLine = new QLineEdit(layoutWidget3);
        Use_ShiUpLine->setObjectName(QStringLiteral("Use_ShiUpLine"));
        Use_ShiUpLine->setDragEnabled(false);
        Use_ShiUpLine->setReadOnly(true);

        horizontalLayout_16->addWidget(Use_ShiUpLine);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_16 = new QLabel(layoutWidget3);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_17->addWidget(label_16);

        Use_ShiDownLine = new QLineEdit(layoutWidget3);
        Use_ShiDownLine->setObjectName(QStringLiteral("Use_ShiDownLine"));
        Use_ShiDownLine->setReadOnly(true);

        horizontalLayout_17->addWidget(Use_ShiDownLine);


        verticalLayout->addLayout(horizontalLayout_17);

        layoutWidget4 = new QWidget(page_4);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(120, 50, 191, 55));
        verticalLayout_2 = new QVBoxLayout(layoutWidget4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_10->addWidget(label_12);

        Use_TemUpLine = new QLineEdit(layoutWidget4);
        Use_TemUpLine->setObjectName(QStringLiteral("Use_TemUpLine"));

        horizontalLayout_10->addWidget(Use_TemUpLine);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_11->addWidget(label_13);

        Use_TemDownLine = new QLineEdit(layoutWidget4);
        Use_TemDownLine->setObjectName(QStringLiteral("Use_TemDownLine"));

        horizontalLayout_11->addWidget(Use_TemDownLine);


        verticalLayout_2->addLayout(horizontalLayout_11);

        layoutWidget5 = new QWidget(page_4);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(360, 50, 201, 55));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_14 = new QLabel(layoutWidget5);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_12->addWidget(label_14);

        Use_LigUpLine = new QLineEdit(layoutWidget5);
        Use_LigUpLine->setObjectName(QStringLiteral("Use_LigUpLine"));

        horizontalLayout_12->addWidget(Use_LigUpLine);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_15 = new QLabel(layoutWidget5);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_13->addWidget(label_15);

        Use_LigDownLine = new QLineEdit(layoutWidget5);
        Use_LigDownLine->setObjectName(QStringLiteral("Use_LigDownLine"));

        horizontalLayout_13->addWidget(Use_LigDownLine);


        verticalLayout_3->addLayout(horizontalLayout_13);

        layoutWidget6 = new QWidget(page_4);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(360, 160, 201, 55));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_18 = new QLabel(layoutWidget6);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_14->addWidget(label_18);

        Use_SkyUpLine = new QLineEdit(layoutWidget6);
        Use_SkyUpLine->setObjectName(QStringLiteral("Use_SkyUpLine"));
        Use_SkyUpLine->setReadOnly(true);

        horizontalLayout_14->addWidget(Use_SkyUpLine);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_19 = new QLabel(layoutWidget6);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_15->addWidget(label_19);

        Use_SkyDownLine = new QLineEdit(layoutWidget6);
        Use_SkyDownLine->setObjectName(QStringLiteral("Use_SkyDownLine"));
        Use_SkyDownLine->setReadOnly(true);

        horizontalLayout_15->addWidget(Use_SkyDownLine);


        verticalLayout_4->addLayout(horizontalLayout_15);

        pushButton_3 = new QPushButton(page_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 240, 93, 28));
        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(360, 240, 93, 28));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_22 = new QLabel(page_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(320, 10, 61, 16));
        line_5 = new QFrame(page_5);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(290, 30, 118, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        Use_TodaytableView = new QTableView(page_5);
        Use_TodaytableView->setObjectName(QStringLiteral("Use_TodaytableView"));
        Use_TodaytableView->setGeometry(QRect(50, 40, 591, 231));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_23 = new QLabel(page_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(330, 10, 31, 16));
        line_6 = new QFrame(page_6);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(290, 30, 118, 3));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        layoutWidget7 = new QWidget(page_6);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(380, 220, 261, 30));
        horizontalLayout_23 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget7);
        label_29->setObjectName(QStringLiteral("label_29"));
        QFont font1;
        font1.setPointSize(11);
        label_29->setFont(font1);

        horizontalLayout_23->addWidget(label_29);

        label_35 = new QLabel(layoutWidget7);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setFont(font1);

        horizontalLayout_23->addWidget(label_35);

        pushButton_2 = new QPushButton(layoutWidget7);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_23->addWidget(pushButton_2);

        layoutWidget8 = new QWidget(page_6);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(30, 220, 311, 30));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget8);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font1);

        horizontalLayout_19->addWidget(label_25);

        label_31 = new QLabel(layoutWidget8);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setFont(font1);

        horizontalLayout_19->addWidget(label_31);

        pushButton = new QPushButton(layoutWidget8);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_19->addWidget(pushButton);

        widget = new QWidget(page_6);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(230, 40, 253, 151));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_24 = new QLabel(widget);
        label_24->setObjectName(QStringLiteral("label_24"));
        QFont font2;
        font2.setPointSize(13);
        label_24->setFont(font2);

        horizontalLayout_18->addWidget(label_24);

        Use_ID = new QLabel(widget);
        Use_ID->setObjectName(QStringLiteral("Use_ID"));
        Use_ID->setFont(font2);

        horizontalLayout_18->addWidget(Use_ID);


        verticalLayout_5->addLayout(horizontalLayout_18);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_26 = new QLabel(widget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font2);

        horizontalLayout_20->addWidget(label_26);

        Use_ProID = new QLabel(widget);
        Use_ProID->setObjectName(QStringLiteral("Use_ProID"));
        Use_ProID->setFont(font2);

        horizontalLayout_20->addWidget(Use_ProID);


        verticalLayout_5->addLayout(horizontalLayout_20);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_28 = new QLabel(widget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font2);

        horizontalLayout_22->addWidget(label_28);

        Use_UesName = new QLabel(widget);
        Use_UesName->setObjectName(QStringLiteral("Use_UesName"));
        Use_UesName->setFont(font2);

        horizontalLayout_22->addWidget(Use_UesName);


        verticalLayout_5->addLayout(horizontalLayout_22);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_27 = new QLabel(widget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFont(font2);

        horizontalLayout_21->addWidget(label_27);

        Use_ProDate = new QLabel(widget);
        Use_ProDate->setObjectName(QStringLiteral("Use_ProDate"));
        Use_ProDate->setFont(font2);

        horizontalLayout_21->addWidget(Use_ProDate);


        verticalLayout_5->addLayout(horizontalLayout_21);

        stackedWidget->addWidget(page_6);
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label_23->raise();
        line_6->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        layoutWidget9 = new QWidget(centralWidget);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(120, 30, 536, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget9);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Use_Check = new QPushButton(layoutWidget9);
        Use_Check->setObjectName(QStringLiteral("Use_Check"));

        horizontalLayout->addWidget(Use_Check);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Use_History = new QPushButton(layoutWidget9);
        Use_History->setObjectName(QStringLiteral("Use_History"));

        horizontalLayout->addWidget(Use_History);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Use_Warnning = new QPushButton(layoutWidget9);
        Use_Warnning->setObjectName(QStringLiteral("Use_Warnning"));

        horizontalLayout->addWidget(Use_Warnning);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        Use_TodayData = new QPushButton(layoutWidget9);
        Use_TodayData->setObjectName(QStringLiteral("Use_TodayData"));

        horizontalLayout->addWidget(Use_TodayData);

        layoutWidget10 = new QWidget(centralWidget);
        layoutWidget10->setObjectName(QStringLiteral("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(180, 380, 389, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Use_mySelf = new QPushButton(layoutWidget10);
        Use_mySelf->setObjectName(QStringLiteral("Use_mySelf"));

        horizontalLayout_2->addWidget(Use_mySelf);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        Use_Return = new QPushButton(layoutWidget10);
        Use_Return->setObjectName(QStringLiteral("Use_Return"));

        horizontalLayout_2->addWidget(Use_Return);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        Use_Exit = new QPushButton(layoutWidget10);
        Use_Exit->setObjectName(QStringLiteral("Use_Exit"));

        horizontalLayout_2->addWidget(Use_Exit);

        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(160, 360, 441, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\347\216\257\345\242\203\346\237\245\347\234\213", 0));
        label_4->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246\357\274\232", 0));
        label_7->setText(QApplication::translate("MainWindow", "-----", 0));
        label_10->setText(QApplication::translate("MainWindow", "\347\203\237\351\233\276\346\265\223\345\272\246\357\274\232", 0));
        label_11->setText(QApplication::translate("MainWindow", "-----", 0));
        label_5->setText(QApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217\357\274\232", 0));
        label_9->setText(QApplication::translate("MainWindow", "-----", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246\357\274\232", 0));
        Temlabel->setText(QApplication::translate("MainWindow", "----------", 0));
        label_3->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\357\274\232", 0));
        Lightlabel->setText(QApplication::translate("MainWindow", "-----------", 0));
        label_30->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\357\274\232", 0));
        Use_Time->setText(QApplication::translate("MainWindow", "2018-01-01 09:53:45", 0));
        label_6->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256", 0));
        label_8->setText(QApplication::translate("MainWindow", "\350\255\246\345\221\212\350\256\276\345\256\232", 0));
        Tem_UpDown_label->setText(QApplication::translate("MainWindow", "\345\217\202\350\200\203\345\200\274\357\274\23210.00<=T<=35.00", 0));
        Light_UpDown_label->setText(QApplication::translate("MainWindow", "\345\217\202\350\200\203\345\200\274\357\274\23298.00<=T<=450.00", 0));
        label_20->setText(QApplication::translate("MainWindow", "\345\217\202\350\200\203\345\200\274\357\274\232----", 0));
        label_21->setText(QApplication::translate("MainWindow", "\345\217\202\350\200\203\345\200\274\357\274\232----", 0));
        label_17->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246\344\270\212\351\231\220\357\274\232", 0));
        label_16->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246\344\270\213\351\231\220\357\274\232", 0));
        label_12->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246\344\270\212\351\231\220\357\274\232", 0));
        label_13->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246\344\270\213\351\231\220\357\274\232", 0));
        label_14->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\344\270\212\351\231\220\357\274\232", 0));
        label_15->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\344\270\213\351\231\220\357\274\232", 0));
        label_18->setText(QApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217\344\270\212\351\231\220\357\274\232", 0));
        label_19->setText(QApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217\344\270\213\351\231\220\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", 0));
        label_22->setText(QApplication::translate("MainWindow", "\345\275\223\346\227\245\346\225\260\346\215\256", 0));
        label_23->setText(QApplication::translate("MainWindow", "\344\270\252\344\272\272", 0));
        label_29->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\346\233\264\346\224\271\357\274\232", 0));
        label_35->setText(QApplication::translate("MainWindow", "*******", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\233\264\346\224\271", 0));
        label_25->setText(QApplication::translate("MainWindow", "\351\202\256\347\256\261\357\274\232", 0));
        label_31->setText(QApplication::translate("MainWindow", "690550753@qq.com", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\346\233\264\346\224\271", 0));
        label_24->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267ID\357\274\232", 0));
        Use_ID->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_26->setText(QApplication::translate("MainWindow", "\351\241\271\347\233\256ID\357\274\232", 0));
        Use_ProID->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_28->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        Use_UesName->setText(QApplication::translate("MainWindow", "-----", 0));
        label_27->setText(QApplication::translate("MainWindow", "\345\270\203\345\261\200\346\227\245\346\234\237\357\274\232", 0));
        Use_ProDate->setText(QApplication::translate("MainWindow", "2016\345\271\2648\346\234\2104\346\227\245", 0));
        Use_Check->setText(QApplication::translate("MainWindow", "\347\216\257\345\242\203\346\237\245\347\234\213", 0));
        Use_History->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256", 0));
        Use_Warnning->setText(QApplication::translate("MainWindow", "\350\255\246\345\221\212\350\256\276\345\256\232", 0));
        Use_TodayData->setText(QApplication::translate("MainWindow", "\345\275\223\346\227\245\346\225\260\346\215\256", 0));
        Use_mySelf->setText(QApplication::translate("MainWindow", "\344\270\252\344\272\272", 0));
        Use_Return->setText(QApplication::translate("MainWindow", "\346\263\250\351\224\200", 0));
        Use_Exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
