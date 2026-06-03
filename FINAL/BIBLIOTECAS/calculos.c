#include "calculos.h"

void calcularOperaciones(
    int a,
    int b,
    int *suma,
    int *resta,
    int *producto
) {
    *suma = a + b;
    *resta = a - b;
    *producto = a * b;
}
