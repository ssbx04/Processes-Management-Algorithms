#ifndef __PRIORITE_REQ_H__
#define __PRIORITE_REQ_H__
#include "liste_processus.h"
#include "processus.h"
#include "file.h"
class priorite_req{
    private:
        ListeProcessus l;
        float tma, tme;
        FileProcessus disque;
        FileProcessus processeur;
    public:
    priorite_req();
    ~priorite_req();
    void addProcess(Processus&);
    void traiterProcessus();
    float getTme();
    float getTma();
    void affectList();
};

#endif
