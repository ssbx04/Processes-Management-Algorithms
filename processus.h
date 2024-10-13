#ifndef PROCESSUS_H
#define PROCESSUS_H
#include <iostream>
#include <string>
#include "liste_tache.h"

class Processus {
private:
    std::string nomProcessus;
    std::string etat;
    int tempsArrivee;
    int tempsAttente;
    int tempsFin;
    ListeTache listeTaches;
    int priorite;
public:
   Processus(const std::string& nom, int arrivee,int prio);
    ~Processus();
    void ajoutTache(const std::string& type, int temps);
    void supprimerTache();
    void decrementerTempsDeTeteListeTache();
    void setEtat(const std::string& nouvelEtat);
    bool tachesVide() const;
    Tache getTeteTache() const;
    int getTempsRestant();
    int getTempsArrivee() const;
    bool estEnCalcul() const;
    std::string getNomProcessus() const;
    std::string getEtat() const;
    int getPriorite() const ;
    void afficherTachesProcessus() const;

    int getTempsAttente() const;
    int getTempsFin() const;
    void setTempsFin(int);
    void upgradeWaiting();
};
class MaillonProcessus {
public:
    Processus* processus;
    MaillonProcessus* suivant;
    MaillonProcessus(Processus* proc) : processus(proc), suivant(NULL) {}
};
#endif
