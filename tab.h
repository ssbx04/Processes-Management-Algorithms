#ifndef TAB_H
#define TAB_H
#include "liste_processus.h"
 #include "qstandarditemmodel.h"

#include <QDialog>

namespace Ui  {
class Tab;
}

class Tab : public QDialog
{
    Q_OBJECT


public:
    explicit Tab(QWidget *parent = 0);
    ~Tab();
    void dessiner();
    float get_TMA();
    float get_TME();
private:
    Ui::Tab *ui;
    float TME;
    float TMA;
    ListeProcessus l;
    QStandardItemModel *modele;
    QStandardItemModel *modele1;

};

#endif // TAB_H
