#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrTab = new Tab();
    ptrtable = new table();
    ptrfifo_dialog = new fifo_dialog();
    ptrpcte_dialog = new pcte_dialog();
    ptrpcter_dialog = new pcter_dialog();
    ptrpriorite_dialog = new priorite_dialog();
    ptrprioritereq_dialog = new priorite_req_dialog();
    ptrtourniquet_dialog = new tourniquet_dialog();
    ptrajout_processus = new ajout_processus();
    diag = new CourbeDialog();

    //l = chargerDonneesDepuisFichier("C://Users//hp//Desktop//data.txt");

        //-----------------------------------------------------------------------------------------------
        QFile fichier("C://Users//cheik//OneDrive//Bureau//data.txt");

        if (!fichier.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qWarning() << "Impossible d'ouvrir le fichier :" << "C://Users//cheik//OneDrive//Bureau//data.txt";
            exit(1);
        }
        QString contenu;
        QTextStream flux(&fichier);
        while (!flux.atEnd()) {
            QString ligne = flux.readLine();
            QStringList elements = ligne.split(' ');
            QString nom = elements[0];
            int arrivee = elements[1].toInt();
            QString val_arr = QString::number(arrivee);
            int priorite = elements[2].toInt();
            QString val_pri = QString::number(priorite);
            contenu += "Nom: " + nom + ", Temps d'arrivée: " + elements[1] + ", Priorité: " + elements[2] + "\n" ;
            for (int i = 3; i < elements.size(); i += 2) {
                QString type = elements[i];
                int duree = elements[i + 1].toInt();
                contenu += "Type: " + type + " | " + "Temps : " +  elements[i + 1] + "\n";
            }
            contenu += "\n";
        }
        QLabel *label = new QLabel(contenu , this);
        label-> setAlignment(Qt::AlignCenter);
        QFont police("Arial",14);
        label->setFont(police);
        setCentralWidget(label);
        fichier.close();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrTab;
    delete ptrtable;
    delete ptrfifo_dialog;
    delete ptrpcte_dialog;
    delete ptrpcter_dialog;
    delete ptrpriorite_dialog;
    delete ptrprioritereq_dialog;
    delete ptrtourniquet_dialog;
    delete ptrajout_processus;
    delete diag;
}

void MainWindow::on_actionAfficher_2_triggered()
{
    ptrTab -> show();
}

void MainWindow::on_actionSaisir_les_processus_triggered()
{
    ptrtable -> show();
}

void MainWindow::on_actionFIFO_triggered()
{
    ptrfifo_dialog -> show();
}

void MainWindow::on_actionPCTE_triggered()
{
    ptrpcte_dialog -> show();
}

void MainWindow::on_actionPCTER_triggered()
{
    ptrpcter_dialog -> show();
}


void MainWindow::on_actionPriorit_2_triggered()
{
    ptrpriorite_dialog -> show();
}

void MainWindow::on_actionPriorit_3_triggered()
{
    ptrprioritereq_dialog -> show();
}

void MainWindow::on_actionTourniquet_triggered()
{
    ptrtourniquet_dialog -> show();
}

void MainWindow::on_actionAjout_triggered()
{
    ptrajout_processus -> show();
}

void MainWindow::on_actionDiagrammes_triggered()
{
    diag->show();
}
