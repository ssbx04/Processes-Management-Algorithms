/********************************************************************************
** Form generated from reading UI file 'courbedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURBEDIALOG_H
#define UI_COURBEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_CourbeDialog
{
public:
    QCustomPlot *customPlot;

    void setupUi(QDialog *CourbeDialog)
    {
        if (CourbeDialog->objectName().isEmpty())
            CourbeDialog->setObjectName(QStringLiteral("CourbeDialog"));
        CourbeDialog->resize(1169, 913);
        customPlot = new QCustomPlot(CourbeDialog);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(10, 10, 1151, 891));

        retranslateUi(CourbeDialog);

        QMetaObject::connectSlotsByName(CourbeDialog);
    } // setupUi

    void retranslateUi(QDialog *CourbeDialog)
    {
        CourbeDialog->setWindowTitle(QApplication::translate("CourbeDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class CourbeDialog: public Ui_CourbeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURBEDIALOG_H
