/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAjout;
    QAction *actionAfficher;
    QAction *actionQuitter;
    QAction *actionSaisir_les_processus;
    QAction *actionPCTER;
    QAction *actionFIFO;
    QAction *actionPCTE;
    QAction *actionTourniquet;
    QAction *actionPriorit_2;
    QAction *actionPriorit_3;
    QAction *actionQuitter_2;
    QAction *actionAvec_r_quisition;
    QAction *actionSANS_r_quisition;
    QAction *actionDiagrammes;
    QAction *actionAfficher_2;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuAlgo_Ordonnancement;
    QMenu *menuSans_R_quisition;
    QMenu *menuAvec_R_quisition;
    QMenu *menuComparaison;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(937, 549);
        actionAjout = new QAction(MainWindow);
        actionAjout->setObjectName(QStringLiteral("actionAjout"));
        actionAfficher = new QAction(MainWindow);
        actionAfficher->setObjectName(QStringLiteral("actionAfficher"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionSaisir_les_processus = new QAction(MainWindow);
        actionSaisir_les_processus->setObjectName(QStringLiteral("actionSaisir_les_processus"));
        actionPCTER = new QAction(MainWindow);
        actionPCTER->setObjectName(QStringLiteral("actionPCTER"));
        actionFIFO = new QAction(MainWindow);
        actionFIFO->setObjectName(QStringLiteral("actionFIFO"));
        actionPCTE = new QAction(MainWindow);
        actionPCTE->setObjectName(QStringLiteral("actionPCTE"));
        actionTourniquet = new QAction(MainWindow);
        actionTourniquet->setObjectName(QStringLiteral("actionTourniquet"));
        actionPriorit_2 = new QAction(MainWindow);
        actionPriorit_2->setObjectName(QStringLiteral("actionPriorit_2"));
        actionPriorit_3 = new QAction(MainWindow);
        actionPriorit_3->setObjectName(QStringLiteral("actionPriorit_3"));
        actionQuitter_2 = new QAction(MainWindow);
        actionQuitter_2->setObjectName(QStringLiteral("actionQuitter_2"));
        actionAvec_r_quisition = new QAction(MainWindow);
        actionAvec_r_quisition->setObjectName(QStringLiteral("actionAvec_r_quisition"));
        actionSANS_r_quisition = new QAction(MainWindow);
        actionSANS_r_quisition->setObjectName(QStringLiteral("actionSANS_r_quisition"));
        actionDiagrammes = new QAction(MainWindow);
        actionDiagrammes->setObjectName(QStringLiteral("actionDiagrammes"));
        actionAfficher_2 = new QAction(MainWindow);
        actionAfficher_2->setObjectName(QStringLiteral("actionAfficher_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 937, 26));
        menuAlgo_Ordonnancement = new QMenu(menuBar);
        menuAlgo_Ordonnancement->setObjectName(QStringLiteral("menuAlgo_Ordonnancement"));
        menuSans_R_quisition = new QMenu(menuAlgo_Ordonnancement);
        menuSans_R_quisition->setObjectName(QStringLiteral("menuSans_R_quisition"));
        menuAvec_R_quisition = new QMenu(menuAlgo_Ordonnancement);
        menuAvec_R_quisition->setObjectName(QStringLiteral("menuAvec_R_quisition"));
        menuComparaison = new QMenu(menuBar);
        menuComparaison->setObjectName(QStringLiteral("menuComparaison"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAlgo_Ordonnancement->menuAction());
        menuBar->addAction(menuComparaison->menuAction());
        menuAlgo_Ordonnancement->addAction(menuSans_R_quisition->menuAction());
        menuAlgo_Ordonnancement->addAction(menuAvec_R_quisition->menuAction());
        menuSans_R_quisition->addAction(actionFIFO);
        menuSans_R_quisition->addAction(actionPCTE);
        menuSans_R_quisition->addAction(actionPriorit_2);
        menuAvec_R_quisition->addSeparator();
        menuAvec_R_quisition->addAction(actionPCTER);
        menuAvec_R_quisition->addAction(actionTourniquet);
        menuAvec_R_quisition->addAction(actionPriorit_3);
        menuComparaison->addAction(actionDiagrammes);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAjout->setText(QApplication::translate("MainWindow", "Ajouter un processus", 0));
        actionAfficher->setText(QApplication::translate("MainWindow", "Afficher", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionSaisir_les_processus->setText(QApplication::translate("MainWindow", "Table des processus", 0));
        actionPCTER->setText(QApplication::translate("MainWindow", "PCTER", 0));
        actionFIFO->setText(QApplication::translate("MainWindow", "FIFO", 0));
        actionPCTE->setText(QApplication::translate("MainWindow", "PCTE", 0));
        actionTourniquet->setText(QApplication::translate("MainWindow", "Tourniquet", 0));
        actionPriorit_2->setText(QApplication::translate("MainWindow", "Priorit\303\251", 0));
        actionPriorit_3->setText(QApplication::translate("MainWindow", "Priorit\303\251", 0));
        actionQuitter_2->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionAvec_r_quisition->setText(QApplication::translate("MainWindow", "AVEC r\303\251quisition", 0));
        actionSANS_r_quisition->setText(QApplication::translate("MainWindow", "SANS r\303\251quisition", 0));
        actionDiagrammes->setText(QApplication::translate("MainWindow", "Diagrammes", 0));
        actionAfficher_2->setText(QApplication::translate("MainWindow", "Afficher", 0));
        menuAlgo_Ordonnancement->setTitle(QApplication::translate("MainWindow", "Algo Ordonnancement", 0));
        menuSans_R_quisition->setTitle(QApplication::translate("MainWindow", "Sans R\303\251quisition", 0));
        menuAvec_R_quisition->setTitle(QApplication::translate("MainWindow", "Avec R\303\251quisition", 0));
        menuComparaison->setTitle(QApplication::translate("MainWindow", "Comparaison", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
