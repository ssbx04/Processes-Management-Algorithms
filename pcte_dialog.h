#ifndef PCTE_H
#define PCTE_H
#include "liste_processus.h"
#include "qstandarditemmodel.h"
#include <QDialog>
#include <QShowEvent>

namespace Ui {
class pcte_dialog;
}

class pcte_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit pcte_dialog(QWidget *parent = 0);
    ~pcte_dialog();
    void dessiner();
    float get_TMA();
    float get_TME();
    void showEvent(QShowEvent *event);

private:
    Ui::pcte_dialog *ui;
    float TME;
    float TMA;
    ListeProcessus l;
    QStandardItemModel *modele;
    QStandardItemModel *modele1;

};

#endif // PCTE_H
