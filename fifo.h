#ifndef __FIFO_H__
#define __FIFO_H__
#include "liste_processus.h"
#include "processus.h"
#include "file.h"
class fifo{
    private:
        ListeProcessus l;
        float tma, tme;
        FileProcessus disque;
        FileProcessus processeur;
    public:
    fifo();
    ~fifo();
    void addProcess(Processus&);
    void traiterProcessus();
    float getTme();
    float getTma();
    void affectList();
};

#endif
