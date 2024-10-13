/********************************************************************************
** Form generated from reading UI file 'ajout_processus.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUT_PROCESSUS_H
#define UI_AJOUT_PROCESSUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ajout_processus
{
public:
    QLabel *label;

    void setupUi(QDialog *ajout_processus)
    {
        if (ajout_processus->objectName().isEmpty())
            ajout_processus->setObjectName(QStringLiteral("ajout_processus"));
        ajout_processus->resize(400, 400);
        ajout_processus->setMinimumSize(QSize(400, 400));
        label = new QLabel(ajout_processus);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 240, 68, 19));

        retranslateUi(ajout_processus);

        QMetaObject::connectSlotsByName(ajout_processus);
    } // setupUi

    void retranslateUi(QDialog *ajout_processus)
    {
        ajout_processus->setWindowTitle(QApplication::translate("ajout_processus", "Nouveau processus", 0));
        label->setText(QApplication::translate("ajout_processus", ".", 0));
    } // retranslateUi

};

namespace Ui {
    class ajout_processus: public Ui_ajout_processus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUT_PROCESSUS_H
