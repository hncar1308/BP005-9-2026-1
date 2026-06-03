#include <stdio.h>
#include "punto.h"

int main() {
    Punto p1;

    inicializarPunto(&p1, 3.0f, 4.0f);

    printf("Punto inicial: ( %.2f, %.2f)\n", p1.x, p1.y);

    moverPunto(&p1, 2.0f, -1.0f);

    printf("Punto movido: ( %.2f, %.2f)\n", p1.x, p1.y);

    printf("Distancia al origen: %.2f\n", calcularDistanciaAlOrigen(p1));

    return 0;
}
