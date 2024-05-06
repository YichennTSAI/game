#include "mario.h"

mario::mario()
{
    state=1;  //1 小,2 大,3 火球.
    xsize=(state>1)?70:50;
    ysize=(state>1)?100:50;  //以state決定

    x=0;
    y=520-ysize;

    life=3;   //最多3條
    die=false;
    walk=(state>1)?14:10;   //單位長度
    height=(state>1)?160:70; //跳躍高度
    direction=2;  //1 左邊,2 右邊
    swift=1;      //0 站,1 圖1,2 圖2,3 跳起來

    canmoveright=false;
    canmoveleft=false;
    canjump=false;
}
void mario::moveright()
{
    if(canmoveright)
    {
        pix->move(pix->x()+10,pix->y());
        x+=10;
        marioRect.setRect(x, y, xsize, ysize);
        qDebug()<<x<<endl;
    }

}
