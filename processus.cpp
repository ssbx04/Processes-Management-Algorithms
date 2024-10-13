#include "processus.h"
Processus::Processus(const std::string& nom, int arrivee,int prio) : nomProcessus(nom), tempsArrivee(arrivee), priorite(prio), listeTaches() {
    tempsAttente = 0;
    tempsFin = 0;
}

Processus::~Processus() {}

void Processus::ajoutTache(const std::string& type, int temps) {
    listeTaches.ajoutTache(type, temps);
}

void Processus::supprimerTache() {
    listeTaches.supprimerTete();
}

void Processus::decrementerTempsDeTeteListeTache() {
    listeTaches.decrementerTeteTache();
}

void Processus::setEtat(const std::string& nouvelEtat) {
    etat = nouvelEtat;
}

bool Processus::tachesVide() const {
    return listeTaches.estVide();
}

Tache Processus::getTeteTache() const {
    return listeTaches.getTete();
}

int Processus::getTempsRestant(){
    return listeTaches.getAllTemps();
}

int Processus::getTempsArrivee() const {
    return tempsArrivee;
}

bool Processus::estEnCalcul() const {
    Tache tete = listeTaches.getTete();
    return tete.type == "CA";
}
std::string Processus::getNomProcessus() const {
    return nomProcessus;
}

std::string Processus::getEtat() const {
    return etat;
}


void Processus::afficherTachesProcessus() const{
    listeTaches.afficherTaches();
}

int Processus::getPriorite() const {
    return priorite;
}


int Processus::getTempsAttente() const{
    return tempsAttente;
}

int Processus::getTempsFin() const{
    return tempsFin;
}

void Processus::setTempsFin(int fin){
    tempsFin = fin;
}
void Processus::upgradeWaiting(){
    tempsAttente++;
}
