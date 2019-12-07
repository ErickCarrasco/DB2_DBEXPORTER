#include "main.h"
#include "ui_main.h"

Main::Main(QWidget *parent) :QMainWindow(parent){
    ui.setupUi(this);

    connect(ui.testConnectOrigin, SIGNAL(clicked()), this, SLOT(connectDBOrigin()));
    connect(ui.testConnectDestiny, SIGNAL(clicked()), this, SLOT(connectDBSource()));
    connect(ui.toReplicateMenu, SIGNAL(clicked()), this, SLOT(refresh()));

}

void Main::connectDBOrigin(){
    //Gets the main data
    QString userName= ui.tb_username_dbO->text();
    QString password= ui.pf_db_origin->text();
    QString database= ui.tf_dbName_origin->text();
    QString port= ui.tb_portID_dbO->text();

    //Instance is degraded, it will be unused

    //Must get the exact server id
    QString sqlSQ = "DRIVER={SQL Server};Server=192.168.0.19;Database="+database+";Uid="+userName+";Port="+port+";Pwd="+password+";WSID=.";

    dbOrigen.setDatabaseName(sqlSQ);

    if(dbOrigen.open()){
        QMessageBox Msgbox;
        qDebug()<<"Accessed granted";
        Msgbox.setText("Base de datos conectada");
        Msgbox.exec();
    }else{
        QMessageBox Msgbox;
        //qDebug()<<"Accessed denied "<<dbOrigen.lastError();
        Msgbox.setText("Error en la conexion, verifique las credenciales ingresadas");
        Msgbox.exec();
    }

}//Connects the origin or source database

void Main::connectDBSource(){
    //Gets the main data
    QString userName= ui.tb_username_dbD->text();
    QString password= ui.pf_db_destiny->text();
    QString database= ui.tf_dbName_Destiny->text();
    QString port= ui.tb_portID_dbD->text();

    //Setting the database information
    dbDestino.setHostName("192.168.0.19");
    dbDestino.setDatabaseName(database);
    dbDestino.setUserName(userName);
    dbDestino.setPassword(password);

    if(dbDestino.open()){
        qDebug()<<"Accessed granted";
        QMessageBox Msgbox;
        Msgbox.setText("Base de datos conectada exitosamente");
        Msgbox.exec();
    }else{
        //qDebug()<<"Accessed Denied"<<dbDestino;
        QMessageBox Msgbox;
        Msgbox.setText("Error en la conexion, verifique las credenciales ingresadas");
        Msgbox.exec();
    }


}//Connects the destiny database (The name is misguided)

void Main::refresh(){
    if(dbOrigen.open() && dbDestino.open()){
        qDebug()<<"Initializing the replication menu";
        ReplicateMenu* menu = new ReplicateMenu();
        menu->initDBOrigin(&dbOrigen);
        menu->initDBDestiny(&dbDestino);
        menu->show();
    }else{
        QMessageBox Msgbox;
        Msgbox.setText("Error. Las conexiones no se pudieron establecer");
        Msgbox.exec();
    }
}//Checks connections and if both are ok it will prompt to open the replicate menu



