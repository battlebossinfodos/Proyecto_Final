#include "mainwindow.h"
#include "ui_mainwindow.h"


//continuar con los objetos
// definir limites de movimiento de enemigos
//hacer que  aparezcan cierta cantidad de enemigos aleatoriamente
// definir x e y para la aparicion en posicion aleatoria de el enemigo


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena *Escena=new escena();
    Escena->setBackgroundBrush(QBrush(QImage(":/piso1.png")));
    Escena->setSceneRect(0,0,400,1280);
    ui->graphicsView->setScene(Escena);

// ---------------------division de salas
    muro *M1= new muro(-40,925);
    M1->setPixmap(QPixmap(":/muro2.png"));
    Escena->addItem(M1);
    muro *M2= new muro(-40,600);
    M2->setPixmap(QPixmap(":/muro1.png"));
    Escena->addItem(M2);
    muro *M3= new muro(-40,275);
    M3->setPixmap(QPixmap(":/muro.png"));
    Escena->addItem(M3);
//------------------------------jugador
    player * P1 = new player;
    Escena->addItem(P1);
    P1->setFlag(QGraphicsItem::ItemIsFocusable);
    P1->setFocus();
//-----------------------enemi de prueba
    enemigo * enemy = new enemigo;
    Escena->addItem(enemy);

//-------------------------------------sala1-------------------------------------

    muro *muro11=new muro(300,1000);
    muro11->setPixmap(QPixmap(":/mesa_augusto.png"));
    muro11->setScale(2.9);
    Escena->addItem(muro11);

    muro *muro12=new muro(30,1040);
    muro12->setPixmap(QPixmap(":/mesa2.png"));
    muro12->setScale(2.3);
    Escena->addItem(muro12);

    muro *muro13=new muro(300,1120);
    muro13->setPixmap(QPixmap(":/mesa1.png"));
    muro13->setScale(2.3);
    Escena->addItem(muro13);

    muro *muro14=new muro(30,1170);
    muro14->setPixmap(QPixmap(":/mesa2.png"));
    muro14->setScale(2.3);
    Escena->addItem(muro14);

    //----------------------------------------sala 2-------------------------

    muro *muro21=new muro(20,660);
    muro21->setPixmap(QPixmap(":/mesa1.png"));
    muro21->setScale(2.3);
    Escena->addItem(muro21);

    muro *muro22=new muro(300,870);
    muro22->setPixmap(QPixmap(":/mesa1.png"));
    muro22->setScale(2.3);
    Escena->addItem(muro22);

    muro *muro23=new muro(20,870);
    muro23->setPixmap(QPixmap(":/mesa1.png"));
    muro23->setScale(2.3);
    Escena->addItem(muro23);

    muro *muro24=new muro(300,660);
    muro24->setPixmap(QPixmap(":/mesa1.png"));
    muro24->setScale(2.3);
    Escena->addItem(muro24);

    muro *muro25=new muro(170,750);
    muro25->setPixmap(QPixmap(":/mesa2.png"));
    muro25->setScale(2.3);
    Escena->addItem(muro25);

//------------------------sala3-----------------------------

    muro *muro31=new muro(-40,400);
    muro31->setPixmap(QPixmap(":/mesa2.png"));
    muro31->setScale(2.3);
    Escena->addItem(muro31);

    muro *muro32=new muro(80,400);
    muro32->setPixmap(QPixmap(":/mesa1.png"));
    muro32->setScale(2.3);
    Escena->addItem(muro32);

    muro *muro33=new muro(150,500);
    muro33->setPixmap(QPixmap(":/mesa1.png"));
    muro33->setScale(2.3);
    Escena->addItem(muro33);

    muro *muro34=new muro(330,500);
    muro34->setPixmap(QPixmap(":/mesa2.png"));
    muro34->setScale(2.3);
    Escena->addItem(muro34);

    muro *muro35=new muro(265,400);
    muro35->setPixmap(QPixmap(":/mesa2.png"));
    muro35->setScale(2.3);
    Escena->addItem(muro35);



}
void MainWindow::objetos(){


}

MainWindow::~MainWindow()
{
    delete ui;
    delete this;

}
