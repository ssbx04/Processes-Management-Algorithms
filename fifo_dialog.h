#ifndef FIFO_H
#define FIFO_H
#include "liste_processus.h"
#include "qstandarditemmodel.h"
#include <QDialog>
#include <QShowEvent>

namespace Ui {
class fifo_dialog;
}

class fifo_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit fifo_dialog(QWidget *parent = 0);
    ~fifo_dialog();
    void dessiner();
    float get_TMA();
    float get_TME();
    void showEvent(QShowEvent *event);

private:
    Ui::fifo_dialog *ui;
    float TME;
    float TMA;
    ListeProcessus l;
    QStandardItemModel *modele;
    QStandardItemModel *modele1;

};

#endif // FIFO_H
