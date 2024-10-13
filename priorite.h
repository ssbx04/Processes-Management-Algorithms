#ifndef __PRIORITE_H__
#define __PRIORITE_H__
#include "liste_processus.h"
#include "processus.h"
#include "file.h"
class priorite{
    private:
        ListeProcessus l;
        float tma, tme;
        FileProcessus disque;
        FileProcessus processeur;
    public:
    priorite();
    ~priorite();
    void addProcess(Processus&);
    void traiterProcessus();
    float getTme();
    float getTma();
    void affectList();
};

#endif
