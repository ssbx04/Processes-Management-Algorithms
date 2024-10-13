#ifndef __PCTER_H__
#define __PCTER_H__
#include "liste_processus.h"
#include "processus.h"
#include "file.h"
class pcter{
    private:
        ListeProcessus l;
        float tma, tme;
        FileProcessus disque;
        FileProcessus processeur;
    public:
    pcter();
    ~pcter();
    void addProcess(Processus&);
    void traiterProcessus();
    float getTme();
    float getTma();
    void affectList();
};

#endif
