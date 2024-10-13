#include "liste_processus.h"
void ListeProcessus::ajouterProcessus(Processus* proc) {
    MaillonProcessus* nouveauMaillon = new MaillonProcessus(proc);
    if (estVide()) {
        tete = courant = nouveauMaillon;
    } else {
        MaillonProcessus *nouveau = tete;
        while (nouveau->suivant != NULL){
            nouveau = nouveau->suivant;
        }
        nouveau->suivant = nouveauMaillon;
    }
}

void ListeProcessus::afficherListe()  {
    init();
    while (existe()) {
        Processus * courant = prochain();
        std::cout << "Nom : " << courant->getNomProcessus() << ", Temps d'arrivee : " << courant->getTempsArrivee() << std::endl;
        courant->afficherTachesProcessus();
    }
}

bool ListeProcessus::estVide() const {
    return tete == NULL;
}

void ListeProcessus::init(){
    courant = tete;
}
bool ListeProcessus::existe(){
    return courant != NULL;
}
Processus* ListeProcessus::prochain(){
    if(courant != NULL){
        MaillonProcessus *temp = courant;
        courant = courant->suivant;
        return temp->processus;
    }
    return NULL;
}

void ListeProcessus::supprimer(std::string nom){
    MaillonProcessus *c,*p;
    if(tete){
        if(tete->processus->getNomProcessus() == nom){
            MaillonProcessus *temp = tete;
            tete = tete->suivant;
            delete temp;
            temp = NULL;
        }
        else{
            p = tete;
            c = tete->suivant;
            while (c){
                if(c->processus->getNomProcessus() == nom){
                    p->suivant = c->suivant;
                    delete c;
                    c = p->suivant;
                }
                else{
                    p = c;
                    c = c->suivant;
                }
            }
        }
    }
}

int ListeProcessus::listProcessSize(){
    MaillonProcessus *q = tete;
    int taille = 0;
    while (q){
        taille++;
        q = q->suivant;
    }
    return taille;
}


