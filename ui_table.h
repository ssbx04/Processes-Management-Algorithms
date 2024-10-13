/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_table
{
public:
    QLabel *label;

    void setupUi(QDialog *table)
    {
        if (table->objectName().isEmpty())
            table->setObjectName(QStringLiteral("table"));
        table->resize(400, 200);
        label = new QLabel(table);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 150, 68, 19));

        retranslateUi(table);

        QMetaObject::connectSlotsByName(table);
    } // setupUi

    void retranslateUi(QDialog *table)
    {
        table->setWindowTitle(QApplication::translate("table", "Saisie nombre de processus", 0));
        label->setText(QApplication::translate("table", ".", 0));
    } // retranslateUi

};

namespace Ui {
    class table: public Ui_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
