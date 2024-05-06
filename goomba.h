
#ifndef GOOMBA_H
#define GOOMBA_H
#include <QPixmap>
#include <QTimer>
#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include<QLabel>
#include <QPainter>
#include <QDebug>
#include<QWidget>
#include <QPainter>
#include <QDebug>
#include<QLabel>
#include<QWidget>
#include<QObject>
#include <QGraphicsItem>
#include <QRect>
#include<vector>
#include "mario.h"
#include"floor.h"
#include"brick.h"
#include"bullet.h"
//#include"flag.h"
using namespace std;
class goomba : public QObject, public  QGraphicsRectItem
{
Q_OBJECT
public:
    bool canmove1(int x1);
    /*bool canmove2(int x2);
    bool canmove3(int x3);
    bool canmove4(int x4);
    bool canmove5(int x5);*/
    void  Gchangedirection(int *directionG);
    /*void moveright();
    void moverleft();*/
    bool inhole();
    int directionG;//1右 2左 0死
    bool isalive;
    int x1;
    QLabel *pix;
    int Gswift;//0死1右2左
QRect goombaRect;
     Floor *F=new Floor;
     mario *M=new mario;
     brick *B=new brick;
     bullet *b=new bullet;
    goomba();
public slots:
    void moveGoomba( );


     /*int x2;
     int x3;
     int x4;
     int x5;
*/
//QPixmap pixmap;


};
#endif // GOOMBA_H

