/********************************************************************************
** Form generated from reading UI file 'pcte_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCTE_DIALOG_H
#define UI_PCTE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_pcte_dialog
{
public:

    void setupUi(QDialog *pcte_dialog)
    {
        if (pcte_dialog->objectName().isEmpty())
            pcte_dialog->setObjectName(QStringLiteral("pcte_dialog"));
        pcte_dialog->resize(1000, 800);
        pcte_dialog->setMinimumSize(QSize(1000, 800));

        retranslateUi(pcte_dialog);

        QMetaObject::connectSlotsByName(pcte_dialog);
    } // setupUi

    void retranslateUi(QDialog *pcte_dialog)
    {
        pcte_dialog->setWindowTitle(QApplication::translate("pcte_dialog", "PCTE", 0));
    } // retranslateUi

};

namespace Ui {
    class pcte_dialog: public Ui_pcte_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCTE_DIALOG_H
