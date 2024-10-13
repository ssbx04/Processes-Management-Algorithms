#include "dialogdiagramme.h"
#include "ui_dialogdiagramme.h"
DialogDiagramme::DialogDiagramme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDiagramme){
    ui->setupUi(this);

}

DialogDiagramme::~DialogDiagramme()
{
    delete ui;
}

void DialogDiagramme::showEvent(QShowEvent *event) {
    // Appelez le constructeur de la classe parente
    QDialog::showEvent(event);

    // Placez votre code d'affichage ici
    qDebug() << "La boîte de dialogue est affichée!";
}
