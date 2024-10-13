#include "affect.h"
ListeProcessus affect_Liste(){
    ListeProcessus l;
    Processus *p1 = new Processus("P1",0,2);
    Processus *p2 = new Processus("P2",0,1);
    Processus *p3 = new Processus("P3",0,4);
    Processus *p4 = new Processus("P4",0,1);

    p1->ajoutTache("CA",3);
    p1->ajoutTache("IO",7);
    p1->ajoutTache("CA",2);
    p1->ajoutTache("IO",1);
    p1->ajoutTache("CA",1);

    p2->ajoutTache("CA",4);
    p2->ajoutTache("IO",2);
    p2->ajoutTache("CA",3);
    p2->ajoutTache("IO",1);
    p2->ajoutTache("CA",1);

    p3->ajoutTache("CA",2);
    p3->ajoutTache("IO",3);
    p3->ajoutTache("CA",2);

    p4->ajoutTache("CA",7);
    l.ajouterProcessus(p1);
    l.ajouterProcessus(p2);
    l.ajouterProcessus(p3);
    l.ajouterProcessus(p4);
    return l;
}
