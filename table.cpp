#include "table.h"
#include "ui_table.h"

table::table(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::table)
{
    ui->setupUi(this);
    QWidget *page1 = new QWidget;
    QWidget *page2 = new QWidget;

    QVBoxLayout *layout1 = new QVBoxLayout(page1);
    layout1->addWidget(new QLabel("Entrez le nombre de processus"));
    QSpinBox *spinBox_nbprocess = new QSpinBox(page1);
    layout1->addWidget(spinBox_nbprocess);

    layout1->addWidget(new QLabel("Entrez le nombre de tache maximal"));
    QSpinBox *spinBox_nbtache = new QSpinBox(page1);
    layout1->addWidget(spinBox_nbtache);
    btnSuivant = new QPushButton("Suivant", page1);
    layout1->addWidget(btnSuivant);
    connect(btnSuivant, &QPushButton::clicked, this, &table::showPage2);


    //----------PAGE2--------------

    QVBoxLayout *layout2 = new QVBoxLayout(page2);
    layout2->addWidget(new QLabel("Entrez les details des processus\n"));
    btnPrecedent = new QPushButton("Precedent", page2);
    int t=5; int p=4;

    for(int i = 1 ; i<= p ; i++){
        QLabel *label = new QLabel("P" + QString::number(i));
        layout2->addWidget(label);

    }


    layout2->addWidget(btnPrecedent);
    connect(btnPrecedent, &QPushButton::clicked, this, &table::showPage1);

        // Créer le QStackedWidget et ajouter les pages
    stackedWidget = new QStackedWidget(this);
    stackedWidget->addWidget(page1);
    stackedWidget->addWidget(page2);

        // Afficher la première page
    stackedWidget->setCurrentIndex(0);

    // Ajouter le QStackedWidget à la fenêtre principale
    //setCentralWidget(stackedWidget);

    // Configurer la fenêtre principale
    setWindowTitle("Table des processus");
    resize(400, 300);
    }

    void table::showPage1() {
        // Afficher la première page
        stackedWidget->setCurrentIndex(0);
    }

    void table::showPage2() {
        // Afficher la deuxième page
        stackedWidget->setCurrentIndex(1);
    }

    void table::on_btnSuivant_clicked()
    {
        int nbprocess = spinBox_nbprocess->value();
        int nbtache = spinBox_nbtache->value();
        if(nbprocess == 0 || nbtache == 0) {
            QMessageBox::warning(this,"Toi aussi hein?!!","Au moins un processu SVP!");
        }
        else{
            showPage2();

        }
    }



table::~table()
{
    delete ui;
}




