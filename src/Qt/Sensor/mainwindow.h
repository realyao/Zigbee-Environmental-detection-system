#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QSqlTableModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    virtual void timerEvent( QTimerEvent *event);

    QSerialPort m_reader;
    static QString UseID;
    static int time;

private slots:
    void on_Use_Check_clicked();

    void on_Use_History_clicked();

    void on_Use_Warnning_clicked();

    void on_Use_TodayData_clicked();

    void on_Use_mySelf_clicked();

    void on_Use_Exit_clicked();

    void on_Use_Return_clicked();

    void readyReadSlot();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;

};

#endif // MAINWINDOW_H
