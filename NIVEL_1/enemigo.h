#ifndef ENEMIGO_H
#define ENEMIGO_H


#include<QGraphicsPixmapItem>
#include<Qtimer>
#include<time.h>
#include<muro.h>
#include<typeinfo>
#include<QObject>
#include<player.h>

class enemigo:public QObject, public QGraphicsPixmapItem
{
   Q_OBJECT
public:
    enemigo();
    int n;//movimiento aleatorio

public slots:
    void move();

private:
     QTimer *timer;
     ~enemigo();
};

#endif // ENEMIGO_H
