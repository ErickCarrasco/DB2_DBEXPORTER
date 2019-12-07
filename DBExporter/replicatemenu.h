#ifndef REPLICATEMENU_H
#define REPLICATEMENU_H

#include "ui_replicatemenu.h"
#include <QWidget>
#include <QSqlDatabase>
#include <QStringList>
#include <QListWidgetItem>
#include <QList>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
#include <vector>
using namespace std;

namespace Ui {
class ReplicateMenu;
}

class ReplicateMenu : public QMainWindow
{
    Q_OBJECT
private:
    Ui::ReplicateMenu ui;

    vector<QString> tables;
    QSqlDatabase* dbDestiny ;
    QSqlDatabase* dbOrigin;

private slots:
    void addTable();
    void removeTable();
    void replicateDataBase();
    void resetChanges();
public:
    explicit ReplicateMenu(QWidget *parent = nullptr);
    void initDBOrigin(QSqlDatabase*);
    void initDBDestiny(QSqlDatabase*);
    //~ReplicateMenu();

};

#endif // REPLICATEMENU_H
