#ifndef PRIORITE_H
#define PRIORITE_H
#include "liste_processus.h"
#include "qstandarditemmodel.h"
#include <QShowEvent>
#include <QDialog>

namespace Ui {
class priorite_dialog;
}

class priorite_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit priorite_dialog(QWidget *parent = 0);
    ~priorite_dialog();
    void dessiner();
    float get_TMA();
    float get_TME();
    void showEvent(QShowEvent *event);

private:
    Ui::priorite_dialog *ui;
    float TME;
    float TMA;
    ListeProcessus l;
    QStandardItemModel *modele;
    QStandardItemModel *modele1;

};

#endif // PRIORITE_H
