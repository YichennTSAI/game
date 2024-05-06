#include "bullet.h"

bullet::bullet()
{

if(M->direction==1)
    directionB=1;
if(M->direction==2)
    directionB=2;
xb=M->x;
yb=M->y;

}
void bullet::movebullet()
{QRect bulletRect(xb, yb, 20, 20);

    for (int i = 0; i < 30; i++) { // 使用 brickRect 的大小
        if (bulletRect.intersects(B->brickRect[i]))
        {
            pix->hide();
              delete this;
            return;
        }
    }
   if(directionB == 2)
          {
            pix->move(pix->x()-1,0);
            xb-=1;
            bulletRect.setRect(xb, yb, 20, 20);
        }
else if(directionB == 1){
         pix->move(pix->x()+1,0);
         xb+=1;
         bulletRect.setRect(xb, yb, 20, 20);
}
        }

