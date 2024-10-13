#include "tab.h"
#include "ui_tab.h"
#include "QTableView"
#include "QVBoxLayout"
#include "qstandarditemmodel.h"
#include <iostream>
#include "file.h"
#include "processus.h"
#include "liste_processus.h"
#include "chargement.h"


Tab::Tab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tab)
{
    ui->setupUi(this);

    l = chargerDonneesDepuisFichier("C://Users//cheik//OneDrive//Bureau//data.txt");

    int nbrproc = l.listProcessSize();

    QVBoxLayout *layout = new QVBoxLayout;
    modele = new QStandardItemModel(1,1);
    modele1 = new QStandardItemModel(1,1);
   // modele1->setItem(3, 4, new QStandardItem("nomProcessus"));

    l.init();
    int pos = 0;
    while(l.existe()){
        Processus *pro = l.prochain();
        QString nomProcessus = QString::fromStdString(pro->getNomProcessus());
        modele->setItem(pos, 0, new QStandardItem(nomProcessus));
        modele->setItem(pos++, 1, new QStandardItem("ACTIF"));
        modele->setItem(pos++, 1, new QStandardItem("PRET"));
        modele->setItem(pos++, 1, new QStandardItem("BLOQUE"));
        pos++;
    }
    modele->setItem(nbrproc*4, 0, new QStandardItem("CPU"));
    modele->setItem(nbrproc*5+1, 0, new QStandardItem("E/S"));

    dessiner();

    QTableView *vue = new QTableView;
    vue->setModel(modele);
    layout->addWidget(vue);
    setLayout(layout);


    /*QTableView *vue1 = new QTableView;
    vue1->setModel(modele1);
    layout->addWidget(vue1);
    setLayout(layout);*/
    QTableView *vue1 = new QTableView;
    vue1->setModel(modele1);
    vue1->setMaximumSize(1000, 200);  // Ajustez les valeurs en fonction de vos besoins
    layout->addWidget(vue1);


}

Tab::~Tab()
{
    delete ui;
}


void Tab::dessiner(){
    int nbrproc = l.listProcessSize();
    FileProcessus disque;
    FileProcessus processeur;
    int colonne = 1; int tour = 0;
    while (!l.estVide()){
        if(!processeur.estVide() && processeur.premierProcessus()->estEnCalcul() && processeur.premierProcessus()->getTeteTache().temps == 0){
            Processus* proc = processeur.premierProcessus();
            processeur.defiler();
            proc->supprimerTache();
        }
        if(!disque.estVide() && !disque.premierProcessus()->estEnCalcul() && disque.premierProcessus()->getTeteTache().temps == 0){
            Processus* proc = disque.premierProcessus();
            disque.defiler();
            proc->supprimerTache();
        }
        l.init();
        while (l.existe()){
            Processus *proc = l.prochain();
            if(proc){
                if(!proc->tachesVide() && tour >= proc->getTempsArrivee()){
                    if(proc->estEnCalcul()){
                        if(!processeur.recherche(proc->getNomProcessus())){
                            processeur.enfiler(proc);
                        }
                    }
                    else{
                        if(!disque.recherche(proc->getNomProcessus()))
                            disque.enfiler(proc);
                    }

                }
            }
        }
        l.init();
        while (l.existe()){
            Processus * proc = l.prochain();
            if(proc){
                if(!proc->tachesVide() && !proc->estEnCalcul())
                    proc->setEtat("Bloque");
                else if(!processeur.estVide() && processeur.estEnTete(proc->getNomProcessus()))
                    proc->setEtat("Actif");
                else if(processeur.recherche(proc->getNomProcessus()))
                    proc->setEtat("Pret");
                else if(proc->tachesVide()){
                    l.supprimer(proc->getNomProcessus());
                }
            }
        }

        if(!processeur.estVide()){
            processeur.premierProcessus()->decrementerTempsDeTeteListeTache();
        }
        if(!disque.estVide()){
            disque.premierProcessus()->decrementerTempsDeTeteListeTache();
        }

 //-------------------------ici--------------------------------------
        colonne++;
        tour++;
        l.init();
        while (l.existe()){
            Processus *proc = l.prochain();
            int i=0;
            processeur.init();
            disque.init();

            while (processeur.existe()){
                Processus *process = processeur.prochain();
                QString nomProcessus = QString::fromStdString(process->getNomProcessus());
                modele->setItem(nbrproc*4+i ,colonne, new QStandardItem(nomProcessus));
                i++;
            }
            i=0;
            while (disque.existe()){
                Processus *process = disque.prochain();
                QString nomProcessus = QString::fromStdString(process->getNomProcessus());
                modele->setItem(nbrproc*5+1+i ,colonne, new QStandardItem(nomProcessus));
                i++;
            }




            if( proc->getNomProcessus() == "P1"){
                if(proc->getEtat() == "Actif") {
                    modele->setItem(4*0 ,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem(4*0+2 ,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem(4*0+1 ,colonne, new QStandardItem("X"));

                } else {

                }

            }

            else if( proc->getNomProcessus() == "P2"){
                if(proc->getEtat() == "Actif") {
                    modele->setItem(4 ,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem(6 ,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem(5 ,colonne, new QStandardItem("X"));

                } else {

                }

            }

            else if( proc->getNomProcessus() == "P3"){
                if(proc->getEtat() == "Actif") {
                    modele->setItem( 8,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem( 10,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem( 9,colonne, new QStandardItem("X"));

                } else {

                }

            }

            else if( proc->getNomProcessus() == "P4"){
                if(proc->getEtat() == "Actif") {
                    modele->setItem( 12,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem( 14,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem( 13,colonne, new QStandardItem("X"));

                } else {

                }

            }

            else {}

        }

    }

    //------------------------------------------------------------------------------------

    for (int row = 0; row < modele->rowCount(); ++row) {
        for (int col = 0; col < modele->columnCount(); ++col) {
            QStandardItem *item = modele->item(row, col);
            if (item) {
                item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            }
        }
    }

}

