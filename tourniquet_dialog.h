#ifndef TOURNIQUET_H
#define TOURNIQUET_H
#include "liste_processus.h"
#include "qstandarditemmodel.h"
#include <QDialog>
#include <QShowEvent>

namespace Ui {
class tourniquet_dialog;
}

class tourniquet_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit tourniquet_dialog(QWidget *parent = 0);
    ~tourniquet_dialog();
    void dessiner();
    float get_TMA();
    float get_TME();
    void showEvent(QShowEvent *event);

private:
    Ui::tourniquet_dialog *ui;
    float TME;
    float TMA;
    ListeProcessus l;
    QStandardItemModel *modele;
    QStandardItemModel *modele1;

};

#endif // TOURNIQUET_H
