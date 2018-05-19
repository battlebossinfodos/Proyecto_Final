#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsPixmapItem>
#include<escena.h>
#include<muro.h>
#include<player.h>
#include<enemigo.h>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void objetos();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
