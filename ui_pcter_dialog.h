/********************************************************************************
** Form generated from reading UI file 'pcter_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCTER_DIALOG_H
#define UI_PCTER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_pcter_dialog
{
public:

    void setupUi(QDialog *pcter_dialog)
    {
        if (pcter_dialog->objectName().isEmpty())
            pcter_dialog->setObjectName(QStringLiteral("pcter_dialog"));
        pcter_dialog->resize(1000, 800);
        pcter_dialog->setMinimumSize(QSize(1000, 800));

        retranslateUi(pcter_dialog);

        QMetaObject::connectSlotsByName(pcter_dialog);
    } // setupUi

    void retranslateUi(QDialog *pcter_dialog)
    {
        pcter_dialog->setWindowTitle(QApplication::translate("pcter_dialog", "PCTER", 0));
    } // retranslateUi

};

namespace Ui {
    class pcter_dialog: public Ui_pcter_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCTER_DIALOG_H
