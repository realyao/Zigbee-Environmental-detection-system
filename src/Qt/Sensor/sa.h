#ifndef SA_H
#define SA_H

#include <QMainWindow>
#include <QSqlTableModel>

namespace Ui {
class Sa;
}

class Sa : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sa(QWidget *parent = 0);
    ~Sa();
    static QString SaID;

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_21_clicked();

    void on_Sa_Emp_Clear_clicked();

    void on_Emp_Sen_Clear_clicked();

    void on_Emp_Pro_Sure_clicked();

    void on_Emp_Pro_Clear_clicked();

    void on_Emp_Use_Sure_clicked();

    void on_Emp_Use_Clear_clicked();

    void on_Emp_Sen_Sure_clicked();

    void on_Sa_Emp_Sure_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_20_clicked();

private:
    Ui::Sa *ui;
    QSqlTableModel *model;
};

#endif // SA_H
