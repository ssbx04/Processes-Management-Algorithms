#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <string>
#include "processus.h"
class FileProcessus {
private:
    MaillonProcessus* debut;
    MaillonProcessus* fin;
    MaillonProcessus* courant;

public:
    FileProcessus() : debut(NULL), fin(NULL) {}
    ~FileProcessus();
    void enfiler(Processus* proc);
    void defiler();
    bool estVide() const;
    Processus* premierProcessus() const;
    bool recherche(const std::string &);
    bool estEnTete(const std::string &);
    void sortByTime();
    void sortByPriority();
    void afficherFile();
    void init();
    bool existe();
    Processus *prochain();
};
#endif
