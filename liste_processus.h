#ifndef LISTE_PROCESSUS_H
#define LISTE_PROCESSUS_H
#include "processus.h"
class ListeProcessus {
private:
    MaillonProcessus* tete;
    MaillonProcessus* courant;

public:
    ListeProcessus() : tete(NULL), courant(NULL) {}
    ~ListeProcessus(){}

    void ajouterProcessus(Processus* proc);
    void afficherListe() ;
    bool estVide() const;
    void init();
    bool existe();
    Processus *prochain();
    void supprimer(std::string);
    int listProcessSize();
};


#endif
