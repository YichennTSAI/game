#include "gaming.h"

gaming::gaming(QWidget *parent)
{

    setWindowTitle("start");
    setFixedSize(1400, 620);
    setFocusPolicy(Qt::StrongFocus);

    ba.pix = new QLabel(this);
    ba.pix->setStyleSheet("border-image: url(:/Dataset/image/background.png);");
    ba.pix->setGeometry(0,0,0,0);
    backlist.push_back(ba.pix);

    for(int i=1;i<=back->x.size();i++)
    {
        showbackground(backlist,back->x[i-1],back->y[i-1]);
    }


    fl.pix=new QLabel(this);
    fl.pix->setStyleSheet("border-image: url(:/Dataset/image/brick/floor brick.png)");
    fl.pix->setGeometry(0,0,0,0);
    Flist.push_back(fl.pix);
    for(int i=1;i<F->x.size();i++)
    {
        showFloor(Flist,F->x[i-1],520);
    }


    showMario(M->x,M->y);
    showgoomba(G->x1);
showbullet(b->xb,b->yb);
    QTimer *timer1=new QTimer(this);
    connect(timer1,&QTimer::timeout,this,&gaming::movescenes);
    connect(timer1,&QTimer::timeout,M,&mario::moveright);
    connect(timer1,&QTimer::timeout,G,&goomba::moveGoomba);
    connect(timer1,&QTimer::timeout,b,&bullet::movebullet);
    timer1->start(15);
}
void gaming::showbackground(QVector<QLabel *> &backlist,int x,int y)
{
    ba.pix = new QLabel(this);
    ba.pix->setStyleSheet("border-image: url(:/Dataset/image/background.png);");
    ba.pix->setGeometry(x,y,1400,620);
    ba.pix->show();
    backlist.push_back(ba.pix);
}

void gaming::showFloor(QVector<QLabel *> &Flist,int x,int y)
{
    fl.pix=new QLabel(this);
    fl.pix->setStyleSheet("border-image: url(:/Dataset/image/brick/floor brick.png)");
    fl.pix->setGeometry(x,y,50,100);
    fl.pix->show();
    Flist.push_back(fl.pix);
}
void gaming::showMario(int x,int y)
{
    M->pix=new QLabel(this);
    M->pix->setStyleSheet("border-image: url(:/Dataset/image/Mario_small/s_mario_stand_R.png)");
    M->pix->setGeometry(x,y,M->xsize,M->ysize);
    M->pix->show();
        qDebug()<<"mario show"<<endl;
}
void gaming::showbullet(int x,int y)
{
    b->pix=new QLabel(this);
    b->pix->setStyleSheet("border-image: url(::/Dataset/image/bullet.png)");
    b->pix->setGeometry(x,y,20,20);
   b->pix->show();
        qDebug()<<"bullet show"<<endl;
}
void gaming::showgoomba(int x1)
{
    G->pix=new QLabel(this);
    if(G->Gswift==1)
    {
        G->pix->setStyleSheet("border-image: url(:/Dataset/image/toxicmushroom1.png)");
        G->Gswift=2;
    }else if(G->Gswift==2)
    {
        G->pix->setStyleSheet("border-image: url(:/Dataset/image/toxicmushroom2.png)");
        G->Gswift=1;
    }
    else
        G->pix->setStyleSheet("border-image: url(::/Dataset/image/toxic_mushroom3.png)");

    G->pix->setGeometry(x1,370,50,50);
   G->pix->show();

}


void gaming::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Right)
    {
        qDebug()<<"right key pressed";
        //movescene=true;
        M->canmoveright=true;

    }

}
void gaming::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Right)
    {
        movescene=false;
        M->canmoveright=false;
    }
}
void gaming::movescenes()
{
    if(movescene)
    {
        for (int i = 1; i < backlist.size(); ++i)//for background
        {
            backlist[i]->move(backlist[i]->x() - 10, backlist[i]->y());
        }
        for(int i=1;i<Flist.size();i++)//for floor
        {
            Flist[i]->move(Flist[i]->x()-10,Flist[i]->y());
        }

    }
}
