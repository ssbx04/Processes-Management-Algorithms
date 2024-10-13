#include "liste_tache.h"

ListeTache::ListeTache() : tete(NULL) {}

ListeTache::~ListeTache() {
    while (!estVide()) {
        supprimerTete();
    }
}

void ListeTache::ajoutTache(const std::string& type, int temps) {
    MaillonTache* nouveauMaillon = new MaillonTache;
    nouveauMaillon->element = new Tache;
    nouveauMaillon->element->type = type;
    nouveauMaillon->element->temps = temps;
    nouveauMaillon->suivant = NULL;

    if (tete == NULL) {
        tete = nouveauMaillon;
    } else {
        MaillonTache* courant = tete;
        while (courant->suivant != NULL) {
            courant = courant->suivant;
        }
        courant->suivant = nouveauMaillon;
    }
}

void ListeTache::supprimerTete() {
    if (tete != NULL) {
        MaillonTache* temp = tete;
        tete = tete->suivant;
        delete temp->element;
        delete temp;
    }
}

bool ListeTache::estVide() const {
    return tete == NULL;
}

Tache ListeTache::getTete() const {
    if (tete != NULL) {
        return *(tete->element);
    } else {
        return {"", 0};
    }
}
void ListeTache::decrementerTeteTache(){
    if(tete != NULL){
        if(tete->element->temps > 0)
            tete->element->temps = tete->element->temps - 1;
    }
}

void ListeTache::afficherTaches() const {
    MaillonTache* courant = tete;
    while (courant != NULL) {
        std::cout << "Type : " << courant->element->type << " | Temps : " << courant->element->temps << std::endl; 
        courant = courant->suivant;
    }
}

int ListeTache::getAllTemps(){
    MaillonTache *q = tete;
    int s = 0;
    while (q){
        s+=q->element->temps;
        q = q->suivant;
    }
    return s;
}
