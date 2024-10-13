/********************************************************************************
** Form generated from reading UI file 'detail_processus.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAIL_PROCESSUS_H
#define UI_DETAIL_PROCESSUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_detail_processus
{
public:

    void setupUi(QDialog *detail_processus)
    {
        if (detail_processus->objectName().isEmpty())
            detail_processus->setObjectName(QStringLiteral("detail_processus"));
        detail_processus->resize(400, 300);

        retranslateUi(detail_processus);

        QMetaObject::connectSlotsByName(detail_processus);
    } // setupUi

    void retranslateUi(QDialog *detail_processus)
    {
        detail_processus->setWindowTitle(QApplication::translate("detail_processus", "D\303\251tails des processus", 0));
    } // retranslateUi

};

namespace Ui {
    class detail_processus: public Ui_detail_processus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAIL_PROCESSUS_H
