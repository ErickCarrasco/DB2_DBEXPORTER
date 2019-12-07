/********************************************************************************
** Form generated from reading UI file 'replicatemenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLICATEMENU_H
#define UI_REPLICATEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReplicateMenu
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QFrame *frame_3;
    QLabel *label_2;
    QListWidget *listWidgetAvailables;
    QFrame *frame_4;
    QLabel *label_3;
    QListWidget *listWidgetReplicate;
    QPushButton *addTable;
    QPushButton *replicateDataBase;
    QPushButton *removeTable;
    QPushButton *resetChanges;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReplicateMenu)
    {
        if (ReplicateMenu->objectName().isEmpty())
            ReplicateMenu->setObjectName(QString::fromUtf8("ReplicateMenu"));
        ReplicateMenu->resize(676, 431);
        centralwidget = new QWidget(ReplicateMenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 691, 391));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(170, 10, 311, 51));
        frame_2->setAutoFillBackground(false);
        frame_2->setStyleSheet(QString::fromUtf8("color: rgb(232, 232, 232);\n"
"background-color: rgb(245, 245, 245);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 5, 501, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Fixedsys"));
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(30, 100, 231, 211));
        frame_3->setAutoFillBackground(false);
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 111, 16));
        listWidgetAvailables = new QListWidget(frame_3);
        listWidgetAvailables->setObjectName(QString::fromUtf8("listWidgetAvailables"));
        listWidgetAvailables->setGeometry(QRect(10, 40, 211, 161));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(400, 100, 231, 211));
        frame_4->setAutoFillBackground(false);
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 111, 16));
        listWidgetReplicate = new QListWidget(frame_4);
        listWidgetReplicate->setObjectName(QString::fromUtf8("listWidgetReplicate"));
        listWidgetReplicate->setGeometry(QRect(10, 30, 211, 171));
        addTable = new QPushButton(frame);
        addTable->setObjectName(QString::fromUtf8("addTable"));
        addTable->setGeometry(QRect(290, 150, 75, 23));
        replicateDataBase = new QPushButton(frame);
        replicateDataBase->setObjectName(QString::fromUtf8("replicateDataBase"));
        replicateDataBase->setGeometry(QRect(390, 340, 75, 23));
        removeTable = new QPushButton(frame);
        removeTable->setObjectName(QString::fromUtf8("removeTable"));
        removeTable->setGeometry(QRect(290, 230, 75, 23));
        resetChanges = new QPushButton(frame);
        resetChanges->setObjectName(QString::fromUtf8("resetChanges"));
        resetChanges->setGeometry(QRect(190, 340, 75, 23));
        ReplicateMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReplicateMenu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 676, 21));
        menubar->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));
        ReplicateMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(ReplicateMenu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ReplicateMenu->setStatusBar(statusbar);

        retranslateUi(ReplicateMenu);

        QMetaObject::connectSlotsByName(ReplicateMenu);
    } // setupUi

    void retranslateUi(QMainWindow *ReplicateMenu)
    {
        ReplicateMenu->setWindowTitle(QApplication::translate("ReplicateMenu", "MainWindow", nullptr));
        label->setText(QApplication::translate("ReplicateMenu", "Menu de Replica de Base de Datos", nullptr));
        label_2->setText(QApplication::translate("ReplicateMenu", "Tablas Disponibles", nullptr));
        label_3->setText(QApplication::translate("ReplicateMenu", "Tablas a Replicar", nullptr));
        addTable->setText(QApplication::translate("ReplicateMenu", ">>", nullptr));
        replicateDataBase->setText(QApplication::translate("ReplicateMenu", "Replicate", nullptr));
        removeTable->setText(QApplication::translate("ReplicateMenu", "<<", nullptr));
        resetChanges->setText(QApplication::translate("ReplicateMenu", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplicateMenu: public Ui_ReplicateMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLICATEMENU_H
