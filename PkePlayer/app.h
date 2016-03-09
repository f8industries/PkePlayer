#ifndef APP_H
#define APP_H

#include <QDialog>
#include <QStringList>
#include <QDir>
#include <QDebug>

namespace Ui {
class App;
}

class App : public QDialog
{
    Q_OBJECT

public:
    explicit App(QWidget *parent = 0);
    ~App();

private:
    Ui::App *ui;

    void refreshFiles();
    QStringList myList;
    QDir myPath;

};

#endif // APP_H
