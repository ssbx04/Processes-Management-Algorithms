#-------------------------------------------------
#
# Project created by QtCreator 2024-02-24T22:33:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Processus
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tab.cpp \
    file.cpp \
    liste_tache.cpp \
    processus.cpp \
    liste_processus.cpp \
    detail_processus.cpp \
    table.cpp \
    ajout_processus.cpp \
    chargement.cpp \
    fifo_dialog.cpp \
    pcte_dialog.cpp \
    pcter_dialog.cpp \
    priorite_dialog.cpp \
    priorite_req_dialog.cpp \
    tourniquet_dialog.cpp \
    pcte.cpp \
    pcter.cpp \
    priorite_req.cpp \
    priorite.cpp \
    tourniquet.cpp \
    fifo.cpp \
    affect.cpp \
    qcustomplot.cpp\
    debug/dialogdiagramme.cpp \
    courbedialog.cpp

HEADERS  += mainwindow.h \
    tab.h \
    file.h \
    liste_tache.h \
    processus.h \
    liste_processus.h \
    detail_processus.h \
    table.h \
    ajout_processus.h \
    table_processus.h \
    chargement.h \
    fifo_dialog.h \
    pcte_dialog.h \
    pcter_dialog.h \
    priorite_dialog.h \
    priorite_req_dialog.h \
    tourniquet_dialog.h \
    pcte.h \
    pcter.h \
    priorite_req.h \
    priorite.h \
    tourniquet.h \
    fifo.h \
    affect.h \
    qcustomplot.h\
    debug/dialogdiagramme.h\
    courbedialog.h

FORMS    += mainwindow.ui \
    tab.ui \
    detail_processus.ui \
    table.ui \
    ajout_processus.ui \
    fifo_dialog.ui \
    pcte_dialog.ui \
    pcter_dialog.ui \
    priorite_dialog.ui \
    priorite_req_dialog.ui \
    tourniquet_dialog.ui \
    debug/dialogdiagramme.ui \
    courbedialog.ui
