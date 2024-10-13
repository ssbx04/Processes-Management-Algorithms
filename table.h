#ifndef TABLE_H
#define TABLE_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QWidget>
#include <QSpinBox>

namespace Ui {
class table;
}

class table : public QDialog
{
    Q_OBJECT

public:
    explicit table(QWidget *parent = 0);
    ~table();

private slots:
    void on_btn_validation_nbprocess_accepted();
    void showPage1();
    void showPage2();

    void on_btnSuivant_clicked();

private:
    Ui::table *ui;
    QStackedWidget *stackedWidget;
    QPushButton *btnPrecedent;
    QPushButton *btnSuivant;
    QPushButton *btnOK;
    QSpinBox *spinBox_nbprocess;
    QSpinBox *spinBox_nbtache;
};

#endif // TABLE_H
