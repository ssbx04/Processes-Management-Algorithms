#ifndef DETAIL_PROCESSUS_H
#define DETAIL_PROCESSUS_H

#include <QDialog>

namespace Ui {
class detail_processus;
}

class detail_processus : public QDialog
{
    Q_OBJECT

public:
    explicit detail_processus(QWidget *parent = 0);
    ~detail_processus();

private:
    Ui::detail_processus *ui;
};

#endif // DETAIL_PROCESSUS_H
