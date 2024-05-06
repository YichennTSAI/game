#ifndef BULLET_H
#define BULLET_H
#include<QLabel>
#include<QObject>
#include <QGraphicsItem>
#include "mario.h"
#include"floor.h"
#include"brick.h"
class bullet: public QObject, public  QGraphicsRectItem
{
    Q_OBJECT
public:
    bullet();

    QLabel *pix;
    void movebullet();
    int directionB;
    Floor *F=new Floor;
    mario *M=new mario;
    brick *B=new brick;

    QRect bulletRect;

    int xb;
    int yb;
};

#endif // BULLET_H
