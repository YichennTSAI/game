#ifndef BRICK_H
#define BRICK_H

#include <QObject>
#include <QVector>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

class brick:public QGraphicsPixmapItem
{
public:
    QVector<QVector<int>> bri;
  QVector<QRect> brickRect;
    brick();
};

#endif // BRICK_H
