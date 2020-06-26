#-------------------------------------------------
#
# Project created by QtCreator 2017-12-28T20:01:43
#
#-------------------------------------------------

QT       += core gui sql serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sensor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    sa.cpp \
    employee.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    sa.h \
    employee.h \
    connection.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    sa.ui \
    employee.ui

RC_ICONS = my.ico

RESOURCES += \
    myico.qrc
