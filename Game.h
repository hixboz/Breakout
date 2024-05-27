#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QWidget>
#include <QTimer>

class Game: public QGraphicsView{
public:
    Game(QWidget *parent=0);
    void start();

    QGraphicsScene *scene;
};


#endif // GAME_H
