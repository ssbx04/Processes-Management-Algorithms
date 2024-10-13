#ifndef PRIORITE_REQ_H
#define PRIORITE_REQ_H
#include "liste_processus.h"
#include "qstandarditemmodel.h"
#include <QDialog>
#include <QShowEvent>

namespace Ui {
class priorite_req_dialog;
}

class priorite_req_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit priorite_req_dialog(QWidget *parent = 0);
    ~priorite_req_dialog();
    void dessiner();
    float get_TMA();
    float get_TME();
    void showEvent(QShowEvent *event);

private:
    Ui::priorite_req_dialog *ui;
    float TME;
    float TMA;
    ListeProcessus l;
    QStandardItemModel *modele;
    QStandardItemModel *modele1;

};

#endif // PRIORITE_REQ_H
