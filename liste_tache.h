#ifndef LIST_TACHE_H
#define LIST_TACHE_H
#include <iostream>
#include <string>
struct Tache {
    std::string type;
    int temps;
};
struct MaillonTache {
    Tache* element;
    MaillonTache* suivant;
};
class ListeTache {
private:
    MaillonTache* tete;
public:
    ListeTache();
    ~ListeTache();
    void ajoutTache(const std::string& type, int temps);
    void supprimerTete();
    bool estVide() const;
    Tache getTete() const;
    void decrementerTeteTache();
    void afficherTaches() const;
    int getAllTemps();
};

#endif
