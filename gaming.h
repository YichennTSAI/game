#ifndef GAMING_H
#define GAMING_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QFont>
#include <QTimer>
#include <QKeyEvent>
#include <QDebug>
#include <QLabel>
#include <QGraphicsView>
#include <QLabel>
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsTextItem>
#include <vector>
#include "background.h"
#include "floor.h"
#include "mario.h"
#include "goomba.h"
#include "bullet.h"

class gaming : public QWidget
{
public:

    gaming(QWidget *parent = nullptr);

    QGraphicsScene * scene;

    background *back = new background;
    background ba;
    QVector<QLabel *> backlist;




    Floor *F= new Floor;
    Floor fl;
    QVector<QLabel *> Flist;

    mario *M=new mario;
 goomba *G = new goomba;
bullet *b=new bullet;



    void showbackground(QVector<QLabel *> &backlist,int x,int y);
    void showFloor(QVector<QLabel *> &Flist,int x,int y);
    void showMario(int x,int y);
void showgoomba(int x);
void showbullet(int x,int y);
    bool movescene=false;//有改過


    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

public:slots
    void movescenes();
};

#endif // GAMING_H
