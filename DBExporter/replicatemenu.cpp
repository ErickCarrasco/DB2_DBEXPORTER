#include "replicatemenu.h"
#include "ui_replicatemenu.h"

ReplicateMenu::ReplicateMenu(QWidget *parent) :QMainWindow(parent){
    ui.setupUi(this);
    connect(ui.addTable, SIGNAL(clicked()), this, SLOT(addTable()));
    connect(ui.removeTable, SIGNAL(clicked()), this, SLOT(removeTable()));
    connect(ui.resetChanges, SIGNAL(clicked()), this, SLOT(resetChanges()));
    connect(ui.replicateDataBase, SIGNAL(clicked()), this, SLOT(replicateDataBase()));

    ui.listWidgetAvailables->setCurrentRow(0);
}

void ReplicateMenu::initDBOrigin(QSqlDatabase* dbOrginP){
    dbOrigin=dbOrginP;
    QStringList tables = dbOrigin->tables();
    for(int i=0; i<tables.size(); i++){
        if(!tables.at(i).contains("bitacora", Qt::CaseInsensitive)){
            ui.listWidgetAvailables->addItem(tables.at(i));
        }
    }

}

void ReplicateMenu::initDBDestiny(QSqlDatabase* dbDestinyP){
    dbDestiny=dbDestinyP;
}

void ReplicateMenu::resetChanges(){
    ui.listWidgetReplicate->clear();
}

void ReplicateMenu::addTable(){
    QListWidgetItem* itemVal = ui.listWidgetAvailables->currentItem();
    //Get the current item of the available list
    QSqlQuery query_origen(*dbOrigin);

    bool isNewTableAddition=true;//Checks if the table is repeated or is totally new
    for (int var = 0; var < tables.size(); ++var) {
        if(tables.at(var)==itemVal->text()){
            isNewTableAddition=false;
        }
    }

    if(isNewTableAddition){
        resetChanges();
        query_origen.prepare("EXEC GenerateLog @TableName='"+itemVal->text()+"'");
        if(query_origen.exec()){
            qDebug()<<" Log successfully created";
        }else{
            qDebug()<<"Error on log creation";
        }

        tables.push_back(itemVal->text());
        for (int var = 0; var < tables.size(); ++var) {
            ui.listWidgetReplicate->addItem(tables.at(var));
        }
        ui.listWidgetAvailables->clear();
        QStringList tables = dbOrigin->tables();
        for (int var = 0;var<tables.size();var++) {
            ui.listWidgetAvailables->addItem(tables.at(var));
        }


    }else{
        QMessageBox msgBox;
        msgBox.setText("No se puede agregar tablas repetidas a la base de datos");
        msgBox.exec();
    }



}

void ReplicateMenu::removeTable(){
    QListWidgetItem* itemVal = ui.listWidgetAvailables->currentItem();
    //Get the current item of the available list
    QSqlQuery query_origen(*dbOrigin);
    for (int var = 0; var < tables.size(); ++var) {
        if(tables.at(var)==itemVal->text()){
            tables.erase(tables.begin()+var);
        }
    }
    resetChanges();
    for (int var = 0; var < tables.size(); ++var) {
        ui.listWidgetReplicate->addItem(tables.at(var));
    }
    ui.listWidgetAvailables->clear();
    QStringList tables = dbOrigin->tables();
    for(int i=0; i<tables.size(); i++){
        if(!tables.at(i).contains("bitacora", Qt::CaseInsensitive)){
            ui.listWidgetAvailables->addItem(tables.at(i));
        }
    }
}

void ReplicateMenu::replicateDataBase(){
    QSqlQuery qOrigin(*dbOrigin);
    QSqlQuery qDestiny(*dbDestiny);
    //Tomar ambas bases de datos para realizar la replica

    for (int var = 0; var < tables.size(); ++var) {
        qOrigin.prepare("SELECT * FROM" +tables.at(var));

        if(!qOrigin.exec()){
            qDebug()<<"Task failed, could not replicate table";
            //Error in replicating tables
        }else{
            QSqlRecord record=qOrigin.record();
            QString values="";
            while(qOrigin.next()){
                values="";
                //Must clear to avoid overwriting the data
                for (int innervar = 0; innervar < record.count(); ++innervar) {//GETS ALL THE DATA FROM A RECORD
                    if(innervar==record.count()-1){
                        values+="'"+qOrigin.value(innervar).toString()+"' ";//If it is the last value
                    }else{
                        values+="'"+qOrigin.value(innervar).toString()+"', ";//Not last value
                    }

                }//END FOR

                //Preparing for replicate
                qDestiny.prepare("INSERT INTO "+tables.at(var)+"VALUES ("+values+")");
                if(qDestiny.exec()){
                    qDebug()<<"Success";
                }else if(!qDestiny.exec()){
                    qDebug()<<"Failed to replicate";
                }
            }//END WHILE
            resetChanges();
            QMessageBox msgBox;
            msgBox.setText("Replica completada");
            msgBox.exec();
        }



    }//END MAIN FOR

}

