#ifndef PLAYER_H
#define PLAYER_H

#include<QGraphicsPixmapItem>
#include<QTimer>
#include<muro.h>

class player:public QGraphicsPixmapItem{

public:
    player();

     void keyPressEvent(QKeyEvent *event);
     bool flag;
private:
     ~player();

};

#endif // PLAYER_H
