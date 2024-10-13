#ifndef __PCTE_H__
#define __PCTE_H__
#include "liste_processus.h"
#include "processus.h"
#include "file.h"
class pcte{
    private:
        ListeProcessus l;
        float tma, tme;
        FileProcessus disque;
        FileProcessus processeur;
    public:
    pcte();
    ~pcte();
    void addProcess(Processus&);
    void traiterProcessus();
    float getTme();
    float getTma();
    void affectList();
};

#endif
