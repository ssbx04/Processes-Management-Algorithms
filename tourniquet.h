#ifndef __TOURNIQUET_H__
#define __TOURNIQUET_H__
#include "liste_processus.h"
#include "processus.h"
#include "file.h"
class tourniquet{
    private:
        ListeProcessus l;
        float tma, tme;
        int quantum;
        FileProcessus disque;
        FileProcessus processeur;
    public:
    tourniquet(int);
    ~tourniquet();
    void addProcess(Processus&);
    void traiterProcessus();
    float getTme();
    float getTma();
    void affectList();
};

#endif
