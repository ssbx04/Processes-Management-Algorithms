/********************************************************************************
** Form generated from reading UI file 'tourniquet_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOURNIQUET_DIALOG_H
#define UI_TOURNIQUET_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_tourniquet_dialog
{
public:

    void setupUi(QDialog *tourniquet_dialog)
    {
        if (tourniquet_dialog->objectName().isEmpty())
            tourniquet_dialog->setObjectName(QStringLiteral("tourniquet_dialog"));
        tourniquet_dialog->resize(1000, 800);

        retranslateUi(tourniquet_dialog);

        QMetaObject::connectSlotsByName(tourniquet_dialog);
    } // setupUi

    void retranslateUi(QDialog *tourniquet_dialog)
    {
        tourniquet_dialog->setWindowTitle(QApplication::translate("tourniquet_dialog", "Tourniquet", 0));
    } // retranslateUi

};

namespace Ui {
    class tourniquet_dialog: public Ui_tourniquet_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOURNIQUET_DIALOG_H
