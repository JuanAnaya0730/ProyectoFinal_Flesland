#include "cuchillo.h"

Cuchillo::Cuchillo(int posicionInicialX, int posicionconstanteY)
{
    timer = new QTimer();
    X0 = posicionInicialX;
    t=0;

    posicionY = posicionconstanteY;
    setRect(X0,posicionY,50,10);

    connect(timer, &QTimer::timeout, this, &Cuchillo::actulizarposicion);
    timer->start(10);
}

void Cuchillo::actulizarposicion()
{
    posicionX = X0 + V*t++;
    setPos(posicionX, posicionY);
}

int Cuchillo::getPosicionX() const
{
    return posicionX;
}

int Cuchillo::getPosicionY() const
{
    return posicionY;
}
