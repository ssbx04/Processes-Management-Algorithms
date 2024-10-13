#ifndef DIALOGDIAGRAMME_H
#define DIALOGDIAGRAMME_H

#include <QDialog>
#include "qcustomplot.h"

namespace Ui {
class DialogDiagramme;
}

class DialogDiagramme : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDiagramme(QWidget *parent = 0);
    ~DialogDiagramme();

private:
    Ui::DialogDiagramme *ui;
protected:
    void showEvent(QShowEvent *event) override;
};

#endif // DIALOGDIAGRAMME_H
