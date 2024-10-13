#include "priorite_dialog.h"
#include "ui_priorite_dialog.h"
#include "QTableView"
#include "QVBoxLayout"
#include "qstandarditemmodel.h"
#include <iostream>
#include "file.h"
#include "processus.h"
#include "liste_processus.h"
#include "chargement.h"
#include "priorite.h"

priorite_dialog::priorite_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::priorite_dialog)
{
    ui->setupUi(this);

    l = chargerDonneesDepuisFichier("C://Users//cheik//OneDrive//Bureau//data.txt");



    QVBoxLayout *layout = new QVBoxLayout;
    modele = new QStandardItemModel(1,1);

    int nbrproc = l.listProcessSize();

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
    modele->setItem(nbrproc*4+2*nbrproc, 0, new QStandardItem("TEMPS"));

    priorite pt;
    pt.affectList();
    pt.traiterProcessus();
    float tme = pt.getTme();
    float tma = pt.getTma();
    QString montme = QString::number(tme);
    QString montma = QString::number(tma);
    modele1 = new QStandardItemModel(1,1);
    modele1->setItem(0, 0, new QStandardItem("PRIORITE"));
    modele1->setItem(0, 1, new QStandardItem("TMA"));
    modele1->setItem(0, 2, new QStandardItem("TME"));
    modele1->setItem(1, 1, new QStandardItem(montma));
    modele1->setItem(1, 2, new QStandardItem(montme));




    QTableView *vue1 = new QTableView;
    vue1->setModel(modele1);
    vue1->setMaximumSize(1000, 200);  // Ajustez les valeurs en fonction de vos besoins
    layout->addWidget(vue1);



    dessiner();

    QTableView *vue = new QTableView;
    vue->setModel(modele);
    layout->addWidget(vue);
    setLayout(layout);
}

priorite_dialog::~priorite_dialog()
{
    delete ui;
}

void priorite_dialog::dessiner(){
    int nbrproc = l.listProcessSize();
    FileProcessus disque;
    FileProcessus processeur;
    int colonne = 1;
    int tour = 0;
    int mustSort = 0;
    while (!l.estVide()){
        if (tour == 0)
            mustSort = 1;
        if(!processeur.estVide() && processeur.premierProcessus()->estEnCalcul() && processeur.premierProcessus()->getTeteTache().temps == 0){
            Processus* proc = processeur.premierProcessus();
            processeur.defiler();
            proc->supprimerTache();
            mustSort = 1;
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
        if(mustSort){
            processeur.sortByPriority();
            mustSort = 0;
        }
        l.init();
        while (l.existe()){
            Processus *proc = l.prochain();
            if(proc && tour >= proc->getTempsArrivee()){
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


        //Toi c'est là que tu vas toucher
        colonne++;
        tour++;
        l.init();

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

        while (l.existe()){
            Processus *proc = l.prochain();
            if( proc->getNomProcessus() == "P1"){
                if(proc->getEtat() == "Actif") {
                    modele->setItem(0 ,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem(2 ,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem(1 ,colonne, new QStandardItem("X"));

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

            else if( proc->getNomProcessus() == "P5") {
                if(proc->getEtat() == "Actif") {
                    modele->setItem( 16,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem( 18,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem( 17,colonne, new QStandardItem("X"));

                } else {

                }

            }

            else if( proc->getNomProcessus() == "P6") {
                if(proc->getEtat() == "Actif") {
                    modele->setItem( 20,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem( 22,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem( 21,colonne, new QStandardItem("X"));

                } else {

                }

            }

            else if( proc->getNomProcessus() == "P7") {
                if(proc->getEtat() == "Actif") {
                    modele->setItem( 24,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem( 26,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem( 25,colonne, new QStandardItem("X"));

                } else {

                }

            }

            else if( proc->getNomProcessus() == "P8") {
                if(proc->getEtat() == "Actif") {
                    modele->setItem( 28,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem( 30,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem( 29,colonne, new QStandardItem("X"));

                } else {

                }

            }

            else if( proc->getNomProcessus() == "P9") {
                if(proc->getEtat() == "Actif") {
                    modele->setItem( 32,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem( 34,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem( 33,colonne, new QStandardItem("X"));

                } else {

                }

            }

            else if( proc->getNomProcessus() == "P10") {
                if(proc->getEtat() == "Actif") {
                    modele->setItem( 36,colonne, new QStandardItem("X"));

                } else if(proc->getEtat() == "Bloque") {
                    modele->setItem( 38,colonne, new QStandardItem("X"));

                } else if (proc->getEtat() == "Pret") {
                    modele->setItem( 37,colonne, new QStandardItem("X"));

                } else {

                }

            }

        }

    }

    int j = 2;
        while(j<=colonne){
            QString numba = QString("%1").arg(j-2);
            modele->setItem(nbrproc*4+2*nbrproc, j-1, new QStandardItem(numba));
            j++;
        }

}

void priorite_dialog::showEvent(QShowEvent *event) {
    QDialog::showEvent(event);
    this->showMaximized();
}
