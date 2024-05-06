#ifndef MARIO_H
#define MARIO_H

#include <QObject>
#include <QLabel>
#include<QDebug>
#include<QRect>
class mario:public QObject
{

public:
    int x;
    int y;
    int xsize;
    int ysize;  //以state決定
    int life;   //最多3條
    int state;  //1 小,2 大,3 火球.
    bool die;
    int walk;   //單位長度
    int height; //跳躍高度
    int direction;  //1 左邊,2 右邊
    int swift;      //0 站,1 圖1,2 圖2,3 跳起來
QRect marioRect;
    QLabel *pix;

    bool canmoveright;
    bool canmoveleft;
    bool canjump;

    mario();

    public:slots
    void moveright();
};

#endif // MARIO_H
