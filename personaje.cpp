#include "personaje.h"

Personaje::Personaje(int posicionInicialX, int posicionInicialY)
{
    timer = new QTimer();
    Vx = V * cos(Angulo);
    Vy = V * sin(Angulo);
    t=0;
    posicionX = posicionInicialX;
    Y0 = posicionInicialY;

    setRect(0,0,80,85);
    setPos(posicionX, Y0);

    connect(timer, &QTimer::timeout, this, &Personaje::actualizarPosicion);
    timer->start(10);
}

void Personaje::actualizarPosicion()
{
    t+=0.1;
    posicionY = Vy*t - ((G*t*t)/2);
    if(Y0-posicionY+80 <= 560 ){
        setPos(posicionX, Y0-posicionY);
    }
}
