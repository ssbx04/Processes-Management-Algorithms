#include "detail_processus.h"
#include "ui_detail_processus.h"

detail_processus::detail_processus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::detail_processus)
{
    ui->setupUi(this);
}

detail_processus::~detail_processus()
{
    delete ui;
}
