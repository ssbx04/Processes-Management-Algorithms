#include "courbedialog.h"
#include "ui_courbedialog.h"
#include <QString>
#include <QDebug>
#include "tourniquet.h"
#include "fifo.h"
#include "pcte.h"
#include "pcter.h"
#include "priorite.h"
#include "priorite_req.h"
CourbeDialog::CourbeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CourbeDialog)
{
    ui->setupUi(this);
    tourniquet t(2);
    t.affectList();
    t.traiterProcessus();
    t.affectList();
    fifo f;
    f.affectList();
    f.traiterProcessus();
    pcter pr;
    pr.affectList();
    pr.traiterProcessus();
    pcte p;
    p.affectList();
    p.traiterProcessus();
    priorite pri;
    pri.affectList();
    pri.traiterProcessus();
    priorite_req pri_r;
    pri_r.affectList();
    pri_r.traiterProcessus();
        //printf("Tourniquet:\nTemps moyen execution: %.1f\nTemps moyen attente: %.1f\n\n",t.getTme(),t.getTma());
        //printf("FIFO:\nTemps moyen execution: %.1f\nTemps moyen attente: %.1f\n\n",f.getTme(),f.getTma());
        //printf("PCTER:\nTemps moyen execution: %.1f\nTemps moyen attente: %.1f\n\n",pr.getTme(),pr.getTma());
        //printf("PCTE:\nTemps moyen execution: %.1f\nTemps moyen attente: %.1f\n\n",p.getTme(),p.getTma());
        //printf("Priorite:\nTemps moyen execution: %.1f\nTemps moyen attente: %.1f\n\n",pri.getTme(),pri.getTma());
        //printf("Priorite avec requisition:\nTemps moyen execution: %.1f\nTemps moyen attente: %.1f\n\n",pri_r.getTme(),pri_r.getTma());

    QVector<double> values;
    values.append(pr.getTme()+pr.getTme());
    values.append(f.getTme()+f.getTme());
    values.append(p.getTme()+p.getTme());
    values.append(pri.getTme()+pri.getTme());
    values.append(t.getTme()+pr.getTme());
    values.append(pri_r.getTme()+pri_r.getTme());

    QString demoName = "Bar Chart Demo";
    // create empty bar chart objects:
    QCPBars *attente = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    QCPBars *execution = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    ui->customPlot->addPlottable(attente);
    ui->customPlot->addPlottable(execution);
    // set names and colors:
    QPen pen;
    pen.setWidthF(1.2);
    execution->setName("Temps d'execution");
    pen.setColor(QColor(1, 92, 191));
    execution->setPen(pen);
    execution->setBrush(QColor(1, 92, 191, 50));
    attente->setName("Temps d'attente");
    pen.setColor(QColor(150, 222, 0));
    attente->setPen(pen);
    attente->setBrush(QColor(150, 222, 0, 70));
    // stack bars ontop of each other:
    attente->moveAbove(execution);

    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3 << 4 << 5 << 6 ;
    labels << "FIFO" << "Tourniquet" << "PCTER" << "Priorité Requisition" << "PCTE" << "Priorité";
    ui->customPlot->xAxis->setAutoTicks(false);
    ui->customPlot->xAxis->setAutoTickLabels(false);
    ui->customPlot->xAxis->setTickVector(ticks);
    ui->customPlot->xAxis->setTickVectorLabels(labels);
    ui->customPlot->xAxis->setTickLabelRotation(60);
    ui->customPlot->xAxis->setSubTickCount(0);
    ui->customPlot->xAxis->setTickLength(0, 4);
    ui->customPlot->xAxis->grid()->setVisible(true);
    ui->customPlot->xAxis->setRange(0, 8);
    double max = values.at(0);
    for (int i = 1; i < values.length(); ++i) {
        if(values.at(i) > max)
            max = values.at(i);
    }
    // prepare y axis:
    ui->customPlot->yAxis->setRange(0, max);
    ui->customPlot->yAxis->setPadding(5); // a bit more space to the left border
    ui->customPlot->yAxis->setLabel("Temps d'execution");
    ui->customPlot->yAxis->grid()->setSubGridVisible(true);
    QPen gridPen;
    gridPen.setStyle(Qt::SolidLine);
    gridPen.setColor(QColor(0, 0, 0, 25));
    ui->customPlot->yAxis->grid()->setPen(gridPen);
    gridPen.setStyle(Qt::DotLine);
    ui->customPlot->yAxis->grid()->setSubGridPen(gridPen);
    // Add data:
    QVector<double> executionData, attenteData;
    executionData << f.getTme() << t.getTme()<< pr.getTme() << pri_r.getTme() << p.getTme() <<pri.getTme();
    attenteData   << f.getTma() << t.getTma() << pr.getTma() << pri_r.getTma() << p.getTma() <<pri.getTma();
    execution->setData(ticks, executionData);
    attente->setData(ticks, attenteData);

    // setup legend:
    ui->customPlot->legend->setVisible(true);
    ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    ui->customPlot->legend->setBrush(QColor(255, 255, 255, 200));
    QPen legendPen;
    legendPen.setColor(QColor(130, 130, 130, 200));
    ui->customPlot->legend->setBorderPen(legendPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->customPlot->legend->setFont(legendFont);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}

CourbeDialog::~CourbeDialog()
{
    delete ui;
}
