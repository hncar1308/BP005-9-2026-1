#include <stdio.h>
#include "operaciones.h"

int main() {
    int a = 10;
    int b = 5;

    int suma = sumar(a, b);
    int resta = restar(a, b);
    int producto = multiplicar(a, b);
    float cociente = dividir((float)a, (float)b);

    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Producto: %d\n", producto);
    printf("Cociente: %.2f\n", cociente);

    return 0;
}
