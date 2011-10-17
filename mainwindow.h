#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "controller.h"
#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setController(Controller *controller) {controllerPointer = controller; }
    ~MainWindow();
public slots:
    //Switches player number.  This will affect the value setGridSquare
    //should be sent.
    void setPlayerID(PlayerType playerID);

signals:
    //Sets targer grid square to X, O, or blank, depending on value.
    void setGridSquare(int value);
    void setText(QString string);

private:
    Ui::MainWindow *ui;
    Controller *controllerPointer;
};

#endif // MAINWINDOW_H
