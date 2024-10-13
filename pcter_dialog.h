#ifndef PCTER_H
#define PCTER_H
#include "liste_processus.h"
#include "qstandarditemmodel.h"
#include <QShowEvent>
#include <QDialog>

namespace Ui {
class pcter_dialog;
}

class pcter_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit pcter_dialog(QWidget *parent = 0);
    ~pcter_dialog();
    void dessiner();
    float get_TMA();
    float get_TME();
    void showEvent(QShowEvent *event);
private:
    Ui::pcter_dialog *ui;
    float TME;
    float TMA;
    ListeProcessus l;
    QStandardItemModel *modele;
    QStandardItemModel *modele1;

};

#endif // PCTER_H
