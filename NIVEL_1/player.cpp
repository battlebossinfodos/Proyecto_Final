#include<player.h>
#include<QKeyEvent>
#include<typeinfo>

player::player()
{
    setPos(150,1070);
    setScale(0.5);
    setPixmap(QPixmap(":/down.gif"));
}

void player::keyPressEvent(QKeyEvent *event){


   /* QList <QGraphicsItem *> colliding_Items=collidingItems();
    for( int i=0;i<colliding_Items.size();i++){
        if(typeid(*(colliding_Items[i]))==typeid(muro)){
            flag=false;
        }

        }*/

    if (event->key()== Qt::Key_Up){
        setPixmap(QPixmap(":/up.gif"));
        if(pos().y()>=0){setPos(x(),y()-10);}
    }
    if (event->key()== Qt::Key_Down){
        setPixmap(QPixmap(":/down.gif"));
        if(pos().y()<=1170){setPos(x(),y()+10);}
    }
    if (event->key()== Qt::Key_Left){
        setPixmap(QPixmap(":/left.gif"));
        if(pos().x()>=-50){setPos(x()-10,y());}
    }
    if (event->key()== Qt::Key_Right){
        setPixmap(QPixmap(":/right.gif"));
        if(pos().x()<=370){setPos(x()+10,y());}
    }

}
player::~player(){

    delete this;
}
