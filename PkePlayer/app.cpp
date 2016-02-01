#include "app.h"
#include "ui_app.h"

App::App(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::App)
{
    ui->setupUi(this);
}

App::~App()
{
    delete ui;
}
