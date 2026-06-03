#include "utilidades.h"

void cambiarValor(int *x) {
    *x = 100;
}

void intercambiar(int *a, int *b) {
    int temporal = *a;
    *a = *b;
    *b = temporal;
}
