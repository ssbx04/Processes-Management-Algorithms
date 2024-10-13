#include "file.h"

FileProcessus::~FileProcessus() {
    while (!estVide()) {
        defiler();
    }
}

void FileProcessus::enfiler(Processus* proc) {
    MaillonProcessus* nouveauMaillon = new MaillonProcessus(proc);

    if (estVide()) {
        debut = fin = nouveauMaillon;
    } else {
        fin->suivant = nouveauMaillon;
        fin = nouveauMaillon;
    }
}

void FileProcessus::defiler() {
    if (!estVide()) {
        MaillonProcessus* temp = debut;
        debut = debut->suivant;
        delete temp;
        if (debut == NULL) {
            fin = NULL;
        }
    }
}

bool FileProcessus::estVide() const {
    return debut == NULL;
}

Processus* FileProcessus::premierProcessus() const {
    if (!estVide()) {
        return debut->processus;
    } else {
        return NULL;
    }
}

bool FileProcessus::recherche(const std::string &nom){
    MaillonProcessus *courant = debut;
    while (courant){
        if(courant->processus->getNomProcessus() == nom)
            return true;
        courant = courant->suivant;
    }
    return false;
}
bool FileProcessus::estEnTete(const std::string &nom){
    if(premierProcessus())
        if(premierProcessus()->getNomProcessus() == nom)
            return true;
        else
            return false;
    else
        return false;
}   

void FileProcessus::init(){
    courant = debut;
}

bool FileProcessus::existe(){
    return courant != NULL;
}

Processus* FileProcessus::prochain(){
    if(courant != NULL){
        MaillonProcessus *temp = courant;
        courant = courant->suivant;
        return temp->processus;
    }
    return NULL;
}

//Smaller First
void FileProcessus::sortByTime(){
    if(!estVide() && debut != fin){
        MaillonProcessus *q = debut;
        while (q->suivant){
            MaillonProcessus *min = q;
            MaillonProcessus *suivant = q->suivant;
            while (suivant){
                if (suivant->processus->getTempsRestant() < min->processus->getTempsRestant()){
                    min = suivant;
                }
                suivant = suivant->suivant;
            }
            if(min != q){
                Processus * temp = q->processus;
                q->processus = min->processus;
                min->processus = temp;
            }
            q = q->suivant;
        }
    }
}

void FileProcessus::sortByPriority(){
    if(!estVide() && debut != fin){
        MaillonProcessus *q = debut;
        while (q->suivant){
            MaillonProcessus *min = q;
            MaillonProcessus *suivant = q->suivant;
            while (suivant){
                if (suivant->processus->getPriorite() > min->processus->getPriorite()){
                    min = suivant;
                }
                suivant = suivant->suivant;
            }
            if(min != q){
                Processus * temp = q->processus;
                q->processus = min->processus;
                min->processus = temp;
            }
            q = q->suivant;
        }
    }
}

void FileProcessus::afficherFile(){
    MaillonProcessus *q = debut;
    while (q){
        std::cout << q->processus->getNomProcessus() << std::endl;
        q = q->suivant;
    }
}
