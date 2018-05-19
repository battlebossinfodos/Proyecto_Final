#ifndef ESCENA_H
#define ESCENA_H

#include<QGraphicsScene>
# include <QTimer>
#include<muro.h>
#include<enemigo.h>
class escena:public QGraphicsScene{

public:
    escena();
    QGraphicsScene Escena;
private:
    ~escena();

};

#endif // ESCENA_H
