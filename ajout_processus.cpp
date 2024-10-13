#include "ajout_processus.h"
#include "ui_ajout_processus.h"

ajout_processus::ajout_processus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajout_processus)
{
    ui->setupUi(this);
}

ajout_processus::~ajout_processus()
{
    delete ui;
}
