#ifndef COURBEDIALOG_H
#define COURBEDIALOG_H

#include <QDialog>
#include "qcustomplot.h"
namespace Ui {
class CourbeDialog;
}

class CourbeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CourbeDialog(QWidget *parent = 0);
    ~CourbeDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CourbeDialog *ui;
};

#endif // COURBEDIALOG_H
