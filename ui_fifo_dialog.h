/********************************************************************************
** Form generated from reading UI file 'fifo_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIFO_DIALOG_H
#define UI_FIFO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_fifo_dialog
{
public:

    void setupUi(QDialog *fifo_dialog)
    {
        if (fifo_dialog->objectName().isEmpty())
            fifo_dialog->setObjectName(QStringLiteral("fifo_dialog"));
        fifo_dialog->resize(1000, 800);
        fifo_dialog->setMinimumSize(QSize(1000, 800));

        retranslateUi(fifo_dialog);

        QMetaObject::connectSlotsByName(fifo_dialog);
    } // setupUi

    void retranslateUi(QDialog *fifo_dialog)
    {
        fifo_dialog->setWindowTitle(QApplication::translate("fifo_dialog", "FIFO", 0));
    } // retranslateUi

};

namespace Ui {
    class fifo_dialog: public Ui_fifo_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIFO_DIALOG_H
