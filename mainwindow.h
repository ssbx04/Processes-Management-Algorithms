#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tab.h"
#include "table.h"
#include "file.h"
#include "processus.h"
#include "liste_processus.h"
#include "tourniquet_dialog.h"
#include "priorite_dialog.h"
#include "priorite_req_dialog.h"
#include "fifo_dialog.h"
#include "pcte_dialog.h"
#include "pcter_dialog.h"
#include "ajout_processus.h"
#include "courbedialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAfficher_2_triggered();

    void on_actionSaisir_les_processus_triggered();

    void on_actionFIFO_triggered();

    void on_actionPCTE_triggered();

    void on_actionPCTER_triggered();

    void on_actionSANS_r_quisition_triggered();

    void on_actionPriorit_2_triggered();

    void on_actionPriorit_3_triggered();

    void on_actionTourniquet_triggered();

    void on_actionAjout_triggered();

    void on_actionDiagrammes_triggered();

private:
    Ui::MainWindow *ui;
    Tab *ptrTab;
    table *ptrtable;
    fifo_dialog *ptrfifo_dialog;
    pcte_dialog *ptrpcte_dialog;
    pcter_dialog *ptrpcter_dialog;
    priorite_dialog *ptrpriorite_dialog;
    priorite_req_dialog *ptrprioritereq_dialog;
    tourniquet_dialog *ptrtourniquet_dialog;
    ajout_processus *ptrajout_processus;
    CourbeDialog *diag;
};

#endif // MAINWINDOW_H
