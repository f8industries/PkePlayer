#include "app.h"
#include "ui_app.h"

App::App(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::App)
{
    ui->setupUi(this);

    refreshFiles();
}

App::~App()
{
    delete ui;
}

void App::refreshFiles()
{
    myPath.setPath("C:/");
    myPath.mkdir("lolol");
    myPath.setFilter(QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot);
    qDebug()<< " ilosc el. " <<myList.count();
    myList = myPath.entryList();
    ui->listWidget->addItems(myList);

}
