#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QKeyEvent>
#include <math.h>

#define V 71.5
#define Angulo 1.5708
#define G 9.81

class Personaje:
        public QObject,
        public QGraphicsRectItem
{
private:
    QTimer *timer;
    float posicionX;
    float posicionY;
    int X0;
    int Y0;
    float t;
    float Vx;
    float Vy;

public:
    Personaje(int posicionInicialX,int posicionInicialY);

public slots:
    void actualizarPosicion();

};

#endif // PERSONAJE_H
