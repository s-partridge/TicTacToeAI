#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setPlayerID(PlayerType playerID)
{
    int success = controllerPointer->setPlayerID(playerID);
    //Later add error handling for failure.
    if (success == 0)
        emit setText(QString::number(playerID));
    else
        emit setText("It failed!");

}
