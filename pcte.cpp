#include "pcte.h"
#include "chargement.h"
pcte::pcte(){
    tme = 0;
    tma = 0;
}
pcte::~pcte(){

}
void pcte::addProcess(Processus &proc){
    l.ajouterProcessus(&proc);
}

void pcte::affectList(){
    l = chargerDonneesDepuisFichier("C://Users//cheik//OneDrive//Bureau//data.txt");
}

void pcte::traiterProcessus(){
    int nb_processes = l.listProcessSize();
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
            processeur.sortByTime();
            mustSort = 0;
        }
        l.init();
        while (l.existe()){
            int iswaiting = 1;
            Processus *proc = l.prochain();
            if(proc && tour >= proc->getTempsArrivee()){
                if(!proc->tachesVide() && !proc->estEnCalcul())
                    proc->setEtat("Bloque");
                else if(!processeur.estVide() && processeur.estEnTete(proc->getNomProcessus())){
                    proc->setEtat("Actif");
                    iswaiting = 0;
                }
                else if(processeur.recherche(proc->getNomProcessus()))
                    proc->setEtat("Pret");
                else if(proc->tachesVide()){
                    tma += proc->getTempsAttente();
                    proc->setTempsFin(tour + 1);
                    tme += (proc->getTempsFin() - proc->getTempsArrivee());
                    l.supprimer(proc->getNomProcessus());
                }
                if(iswaiting && !proc->tachesVide())
                    proc->upgradeWaiting();
            }
        }
        if(!processeur.estVide()){
            processeur.premierProcessus()->decrementerTempsDeTeteListeTache();
        }
        if(!disque.estVide()){
            disque.premierProcessus()->decrementerTempsDeTeteListeTache();
        }
        tour++;
    }
    tma /= nb_processes;
    tme /= nb_processes;
}
float pcte::getTme(){
    return tme;
}
float pcte::getTma(){
    return tma;
}
