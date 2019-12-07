#include <QApplication>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QStringList>

#include "main.h"
#include "replicatemenu.h"

int main(int argc, char *argv[]){
    qDebug()<< "SQL SERVER USER LOGIN: ReplicateAdminister";
    qDebug()<<"PASSWORD: admin123";
    qDebug()<<"Port 1433";
    qDebug()<<"Pc connection";
    /*
    QSqlDatabase dbOrigen = QSqlDatabase::addDatabase("QODBC", "dbOrigen");
    dbOrigen.setDatabaseName("DRIVER={SQL Server};Server=192.168.0.19;Database=Replicator;Uid=ReplicateAdminister;Port=1433;Pwd=admin123;WSID=.");

    if (dbOrigen.open()) {
      qDebug() << "Conectado a la db origen exitosamente.";
    }else{
      qDebug() << "Error al conectarse a la db origen: " << dbOrigen.lastError();
    }

    */

    QApplication app(argc, argv);
    Main w;
    w.show();
    return app.exec();
}
