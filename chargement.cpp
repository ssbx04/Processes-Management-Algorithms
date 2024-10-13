#include <fstream>
#include <iostream>
#include <sstream>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QIODevice>
#include <QTextStream>
#include "chargement.h"



ListeProcessus chargerDonneesDepuisFichier(const QString& nomFichier) {
    ListeProcessus listeProcessus;
    QFile fichier(nomFichier);

    if (!fichier.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Impossible d'ouvrir le fichier :" << nomFichier;
        exit(1);
    }

    QTextStream flux(&fichier);
    while (!flux.atEnd()) {
        QString ligne = flux.readLine();
        QStringList elements = ligne.split(' ');

        QString nom = elements[0];
        int arrivee = elements[1].toInt();
        int priorite = elements[2].toInt(); // Changer ici pour la priorité au lieu de duréeInitiale

        Processus* processus = new Processus(nom.toStdString(), arrivee, priorite); // Modifier ici aussi

        for (int i = 3; i < elements.size(); i += 2) {
            QString type = elements[i];
            int duree = elements[i + 1].toInt();
            processus->ajoutTache(type.toStdString(), duree);
        }
        listeProcessus.ajouterProcessus(processus);
    }

    fichier.close();
    return listeProcessus;
}
