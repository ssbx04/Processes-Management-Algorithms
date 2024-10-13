#ifndef AJOUT_PROCESSUS_H
#define AJOUT_PROCESSUS_H

#include <QDialog>

namespace Ui {
class ajout_processus;
}

class ajout_processus : public QDialog
{
    Q_OBJECT

public:
    explicit ajout_processus(QWidget *parent = 0);
    ~ajout_processus();

private:
    Ui::ajout_processus *ui;
};

#endif // AJOUT_PROCESSUS_H
