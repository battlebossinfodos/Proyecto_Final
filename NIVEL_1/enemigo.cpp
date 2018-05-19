#include<enemigo.h>


enemigo::enemigo()
{
    srand(time(NULL));
   //int x=100+rand()%(250);
   //int y=900+rand()%(1150);
    setPos(300,1100);
    //setScale(0.5);
    setPixmap(QPixmap(":/enemy.gif"));

    timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(40);


}
void enemigo::move(){

    srand(time(NULL));
    n =rand()%(20);

    QList <QGraphicsItem *> colliding_Items=collidingItems();
    for( int i=0;i<colliding_Items.size();i++){
        if(typeid(*(colliding_Items[i]))==typeid(muro)){

            setPos(x(),y()+10);

        }
    }
    for( int i=0;i<colliding_Items.size();i++){
        if(typeid(*(colliding_Items[i]))==typeid(player)){

           // delete this;


        }
    }

    if (n>=0&&n<5){
        if(pos().y()>=0){setPos(x(),y()-10);}
    }
    else if (n>=5&&n<10){
        if(pos().y()<=1000){setPos(x(),y()+10);}
    }
    else if (n>10&&n<15){
        if(pos().x()>=-25){setPos(x()-10,y());}
    }
  else   if (n<=15&&n<20){
        if(pos().x()<=100){setPos(x()+10,y());}
    }
}
enemigo::~enemigo(){
    delete this;// como van a destruirse en batalla  no se necesita destructor


}
