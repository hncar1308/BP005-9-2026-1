#include <math.h>
#include "punto.h"

void inicializarPunto(
    Punto *p,
    float x,
    float y
) {
    p->x = x;
    p->y = y;
}

void moverPunto(
    Punto *p,
    float dx,
    float dy
) {
    p->x = p->x + dx;
    p->y = p->y + dy;
}

float calcularDistanciaAlOrigen(
    Punto p
) {
    return sqrtf((p.x * p.x) + (p.y * p.y));
}
