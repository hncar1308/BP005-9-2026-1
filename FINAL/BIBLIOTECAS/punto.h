#ifndef PUNTO_H
#define PUNTO_H

typedef struct {
    float x;
    float y;
} Punto;

void inicializarPunto(
    Punto *p,
    float x,
    float y
);

void moverPunto(
    Punto *p,
    float dx,
    float dy
);

float calcularDistanciaAlOrigen(
    Punto p
);

#endif
