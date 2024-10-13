/********************************************************************************
** Form generated from reading UI file 'priorite_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIORITE_DIALOG_H
#define UI_PRIORITE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_priorite_dialog
{
public:

    void setupUi(QDialog *priorite_dialog)
    {
        if (priorite_dialog->objectName().isEmpty())
            priorite_dialog->setObjectName(QStringLiteral("priorite_dialog"));
        priorite_dialog->resize(1000, 800);
        priorite_dialog->setMinimumSize(QSize(1000, 800));

        retranslateUi(priorite_dialog);

        QMetaObject::connectSlotsByName(priorite_dialog);
    } // setupUi

    void retranslateUi(QDialog *priorite_dialog)
    {
        priorite_dialog->setWindowTitle(QApplication::translate("priorite_dialog", "PRIORITE", 0));
    } // retranslateUi

};

namespace Ui {
    class priorite_dialog: public Ui_priorite_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIORITE_DIALOG_H
