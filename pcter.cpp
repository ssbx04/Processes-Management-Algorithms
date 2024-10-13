#include "pcter.h"
#include "chargement.h"
pcter::pcter(){
    tme =tma = 0;
}
pcter::~pcter(){

}
void pcter::addProcess(Processus &proc){
    l.ajouterProcessus(&proc);
}

void pcter::affectList(){
    l = chargerDonneesDepuisFichier("C://Users//cheik//OneDrive//Bureau//data.txt");
}

void pcter::traiterProcessus(){
    int nb_processes = l.listProcessSize();
    int tour = 0;
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
        processeur.sortByTime();
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
float pcter::getTme(){
    return tme;
}
float pcter::getTma(){
    return tma;
}
