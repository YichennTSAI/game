#include"goomba.h"
#include <QRect> // 用于 QRect 类
#include <vector>
goomba::goomba()
{
directionG=1;
Gswift=1;
isalive=true;
  x1=800;
goombaRect.setRect(x1, 0, 50, 50);

/*x2=2000;
x3=3600;
x4=4900;
x5=6500;
}
*/
/*bool Goomba::canmove2(int x2)
{
if(x2>=1400&&x2<=2800)
    return true;

}
bool Goomba::canmove3(int x3)
{
if(x3>=2800&&x3<=4200)
    return true;

}
bool Goomba::canmove4(int x4)
{
if(x4<=5600&&x4>=4200)
    return true;

}
bool Goomba::canmove5(int x5)
{
if(x5>=5600&&x5<=7000)
    return true;

}*/
}
void  goomba::Gchangedirection(int *directionG)
{
    if(*directionG ==1)
       *directionG = 2;
    else
        *directionG = 1;
}
void goomba::moveGoomba()
{


     // 使用 goomba 对象的 y1 值
if(inhole()||(goombaRect.intersects(b->bulletRect)))
{
    pix->hide();
    return;
}
else if (M->marioRect.intersects(goombaRect)) {
        if (x1 < M->x || x1 > M->x) {
            if (M->state == 1) {
                M->life--;
                M->state = 0;
                return;
            } else {M->state=1;}
        } else if (M->y > 0) {
           // isalive = false;
            Gswift = 0;
            return;
        }
    }else {
    for (int i = 0; i < 30; i++) { // 使用 brickRect 的大小
        if (goombaRect.intersects(B->brickRect[i])) {
          Gchangedirection(&directionG);
            return; // 找到碰撞就退出循环，避免重复改变方向
        }
    }

     if (canmove1(x1))     {
    if (x1<=0&&directionG == 2) {
        pix->move(pix->x()+1,0);
        x1+=1;
        goombaRect.setRect(x1, 0, 50, 50);
     } else if (x1<=1400&&directionG == 1) {
        pix->move(pix->x()-1,0);
        x1-=1;
        goombaRect.setRect(x1, 0, 50, 50);
     }
  else if(directionG == 2)
          {
            pix->move(pix->x()-1,0);
             x1+=1;
            goombaRect.setRect(x1, 0, 50, 50);
        }
else if(directionG == 1){
         pix->move(pix->x()+1,0);
          x1+=1;
         goombaRect.setRect(x1, 0, 50, 50);
}
        }

}
 }   //M->CanMoveLeft=true;
    //M->CanMoveRight=true;


bool goomba::canmove1(int x1)//要加跟著背景移動
{

if(x1-10<=1400&&x1-10>=0)
return true;
else return false;
}




bool goomba ::inhole(){
int i;
    for(i=0;i<4;i++)
    if(x1>=F->hole[i]&&x1<=F->hole[i]+50)
       {
        return true;

    }
    if(i==4)
       {
        return false;
    }
}




