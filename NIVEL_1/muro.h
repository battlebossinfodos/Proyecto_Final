#ifndef OBSTACULO_H
#define OBSTACULO_H
#include<QGraphicsPixmapItem>


class muro:public QGraphicsPixmapItem
{

public:
    muro();
    muro(int x,int y);
private:
    ~muro();
};

#endif // OBSTACULO_H
