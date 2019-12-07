/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main
{
public:
    QAction *actionTest_Connection;
    QAction *actionExit;
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_7;
    QLineEdit *tb_username_dbD;
    QLabel *label_8;
    QLineEdit *pf_db_destiny;
    QLabel *label_9;
    QLineEdit *tb_portID_dbD;
    QPushButton *testConnectDestiny;
    QLabel *label_11;
    QLineEdit *tb_instance_destiny;
    QLabel *label_13;
    QLineEdit *tf_dbName_Destiny;
    QFrame *frame_3;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *tb_username_dbO;
    QLabel *label_5;
    QLineEdit *pf_db_origin;
    QLabel *label_6;
    QLineEdit *tb_portID_dbO;
    QPushButton *testConnectOrigin;
    QLabel *label_10;
    QLineEdit *tb_Instance_origin;
    QLabel *label_12;
    QLineEdit *tf_dbName_origin;
    QPushButton *toReplicateMenu;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Main)
    {
        if (Main->objectName().isEmpty())
            Main->setObjectName(QString::fromUtf8("Main"));
        Main->resize(634, 635);
        actionTest_Connection = new QAction(Main);
        actionTest_Connection->setObjectName(QString::fromUtf8("actionTest_Connection"));
        actionExit = new QAction(Main);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(Main);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-20, 0, 661, 611));
        QPalette palette;
        QBrush brush(QColor(63, 81, 181, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(49, 49, 49, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        frame->setPalette(palette);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color:#3F51B5;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 20, 211, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(380, 100, 231, 421));
        frame_2->setAutoFillBackground(false);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 0, 101, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Dosis"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 50, 47, 13));
        tb_username_dbD = new QLineEdit(frame_2);
        tb_username_dbD->setObjectName(QString::fromUtf8("tb_username_dbD"));
        tb_username_dbD->setGeometry(QRect(30, 70, 181, 20));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 110, 47, 13));
        pf_db_destiny = new QLineEdit(frame_2);
        pf_db_destiny->setObjectName(QString::fromUtf8("pf_db_destiny"));
        pf_db_destiny->setGeometry(QRect(30, 130, 181, 20));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 160, 61, 16));
        tb_portID_dbD = new QLineEdit(frame_2);
        tb_portID_dbD->setObjectName(QString::fromUtf8("tb_portID_dbD"));
        tb_portID_dbD->setGeometry(QRect(30, 190, 101, 20));
        testConnectDestiny = new QPushButton(frame_2);
        testConnectDestiny->setObjectName(QString::fromUtf8("testConnectDestiny"));
        testConnectDestiny->setGeometry(QRect(40, 360, 91, 23));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 220, 47, 13));
        tb_instance_destiny = new QLineEdit(frame_2);
        tb_instance_destiny->setObjectName(QString::fromUtf8("tb_instance_destiny"));
        tb_instance_destiny->setGeometry(QRect(30, 240, 113, 20));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 270, 141, 16));
        tf_dbName_Destiny = new QLineEdit(frame_2);
        tf_dbName_Destiny->setObjectName(QString::fromUtf8("tf_dbName_Destiny"));
        tf_dbName_Destiny->setGeometry(QRect(30, 310, 171, 20));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(60, 100, 221, 421));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 0, 91, 41));
        label_3->setFont(font1);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 60, 47, 13));
        tb_username_dbO = new QLineEdit(frame_3);
        tb_username_dbO->setObjectName(QString::fromUtf8("tb_username_dbO"));
        tb_username_dbO->setGeometry(QRect(20, 80, 181, 20));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 110, 47, 13));
        pf_db_origin = new QLineEdit(frame_3);
        pf_db_origin->setObjectName(QString::fromUtf8("pf_db_origin"));
        pf_db_origin->setGeometry(QRect(20, 130, 181, 20));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 160, 61, 16));
        tb_portID_dbO = new QLineEdit(frame_3);
        tb_portID_dbO->setObjectName(QString::fromUtf8("tb_portID_dbO"));
        tb_portID_dbO->setGeometry(QRect(20, 190, 101, 20));
        testConnectOrigin = new QPushButton(frame_3);
        testConnectOrigin->setObjectName(QString::fromUtf8("testConnectOrigin"));
        testConnectOrigin->setGeometry(QRect(30, 350, 111, 23));
        label_10 = new QLabel(frame_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 220, 47, 13));
        tb_Instance_origin = new QLineEdit(frame_3);
        tb_Instance_origin->setObjectName(QString::fromUtf8("tb_Instance_origin"));
        tb_Instance_origin->setGeometry(QRect(20, 240, 171, 20));
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 270, 141, 16));
        tf_dbName_origin = new QLineEdit(frame_3);
        tf_dbName_origin->setObjectName(QString::fromUtf8("tf_dbName_origin"));
        tf_dbName_origin->setGeometry(QRect(20, 300, 171, 20));
        toReplicateMenu = new QPushButton(frame);
        toReplicateMenu->setObjectName(QString::fromUtf8("toReplicateMenu"));
        toReplicateMenu->setGeometry(QRect(280, 550, 75, 23));
        Main->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Main);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 634, 21));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        menuBar->setPalette(palette1);
        menuBar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Main->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Main);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setStyleSheet(QString::fromUtf8("background-color:#3F51B5;"));
        Main->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Main);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Main->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionTest_Connection);
        menuFile->addAction(actionExit);

        retranslateUi(Main);

        QMetaObject::connectSlotsByName(Main);
    } // setupUi

    void retranslateUi(QMainWindow *Main)
    {
        Main->setWindowTitle(QApplication::translate("Main", "Main", nullptr));
        actionTest_Connection->setText(QApplication::translate("Main", "Test Connection", nullptr));
        actionExit->setText(QApplication::translate("Main", "Exit", nullptr));
        label->setText(QApplication::translate("Main", "DB EXPORTER", nullptr));
        label_2->setText(QApplication::translate("Main", "Destino", nullptr));
        label_7->setText(QApplication::translate("Main", "Usuario", nullptr));
        label_8->setText(QApplication::translate("Main", "Password", nullptr));
        label_9->setText(QApplication::translate("Main", "Puerto (IP)", nullptr));
        testConnectDestiny->setText(QApplication::translate("Main", "Test Connection", nullptr));
        label_11->setText(QApplication::translate("Main", "Instancia", nullptr));
        label_13->setText(QApplication::translate("Main", "Nombre de la base de datos", nullptr));
        label_3->setText(QApplication::translate("Main", "Origen", nullptr));
        label_4->setText(QApplication::translate("Main", "Usuario", nullptr));
        label_5->setText(QApplication::translate("Main", "Password", nullptr));
        label_6->setText(QApplication::translate("Main", "Puerto (IP)", nullptr));
        testConnectOrigin->setText(QApplication::translate("Main", "Test Connection", nullptr));
        label_10->setText(QApplication::translate("Main", "Instancia", nullptr));
        label_12->setText(QApplication::translate("Main", "Nombre de la base de datos", nullptr));
        toReplicateMenu->setText(QApplication::translate("Main", "Replicar", nullptr));
        menuFile->setTitle(QApplication::translate("Main", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main: public Ui_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
