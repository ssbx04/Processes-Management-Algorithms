/********************************************************************************
** Form generated from reading UI file 'priorite_req_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIORITE_REQ_DIALOG_H
#define UI_PRIORITE_REQ_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_priorite_req_dialog
{
public:

    void setupUi(QDialog *priorite_req_dialog)
    {
        if (priorite_req_dialog->objectName().isEmpty())
            priorite_req_dialog->setObjectName(QStringLiteral("priorite_req_dialog"));
        priorite_req_dialog->resize(1000, 800);

        retranslateUi(priorite_req_dialog);

        QMetaObject::connectSlotsByName(priorite_req_dialog);
    } // setupUi

    void retranslateUi(QDialog *priorite_req_dialog)
    {
        priorite_req_dialog->setWindowTitle(QApplication::translate("priorite_req_dialog", "PRIORITE REQUISITION", 0));
    } // retranslateUi

};

namespace Ui {
    class priorite_req_dialog: public Ui_priorite_req_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIORITE_REQ_DIALOG_H
