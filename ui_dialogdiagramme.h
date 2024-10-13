/********************************************************************************
** Form generated from reading UI file 'dialogdiagramme.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDIAGRAMME_H
#define UI_DIALOGDIAGRAMME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_DialogDiagramme
{
public:
    QCustomPlot *customPlot;

    void setupUi(QDialog *DialogDiagramme)
    {
        if (DialogDiagramme->objectName().isEmpty())
            DialogDiagramme->setObjectName(QStringLiteral("DialogDiagramme"));
        DialogDiagramme->resize(1601, 917);
        customPlot = new QCustomPlot(DialogDiagramme);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(0, 10, 1581, 891));

        retranslateUi(DialogDiagramme);

        QMetaObject::connectSlotsByName(DialogDiagramme);
    } // setupUi

    void retranslateUi(QDialog *DialogDiagramme)
    {
        DialogDiagramme->setWindowTitle(QApplication::translate("DialogDiagramme", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogDiagramme: public Ui_DialogDiagramme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDIAGRAMME_H
