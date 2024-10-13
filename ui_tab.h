/********************************************************************************
** Form generated from reading UI file 'tab.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_H
#define UI_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Tab
{
public:

    void setupUi(QDialog *Tab)
    {
        if (Tab->objectName().isEmpty())
            Tab->setObjectName(QStringLiteral("Tab"));
        Tab->resize(1600, 1000);

        retranslateUi(Tab);

        QMetaObject::connectSlotsByName(Tab);
    } // setupUi

    void retranslateUi(QDialog *Tab)
    {
        Tab->setWindowTitle(QApplication::translate("Tab", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Tab: public Ui_Tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_H
