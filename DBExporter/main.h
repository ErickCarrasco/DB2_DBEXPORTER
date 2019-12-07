#ifndef MAIN_H
#define MAIN_H

#include <QMainWindow>
#include "ui_main.h"
#include <QtSql/QSqlDatabase>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include "replicatemenu.h"

namespace Ui {
class Main;
}
class Main : public QMainWindow
{
    Q_OBJECT
private:
    Ui::Main ui;
    QSqlDatabase dbOrigen  = QSqlDatabase::addDatabase("QODBC", "dbOrigen");
    QSqlDatabase dbDestino = QSqlDatabase::addDatabase("QMYSQL", "dbDestino");
private slots:
    void connectDBOrigin();
    void connectDBSource();
    void refresh();

public:
    void clearWidgets();
    explicit Main(QWidget *parent =nullptr);
    //~Main();

};

#endif // MAIN_H
