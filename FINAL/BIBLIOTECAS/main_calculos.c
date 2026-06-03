#include <stdio.h>
#include "calculos.h"

int main() {
    int a = 8;
    int b = 3;

    int suma = 0;
    int resta = 0;
    int producto = 0;

    calcularOperaciones(
        a,
        b,
        &suma,
        &resta,
        &producto
    );

    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Producto: %d\n", producto);

    return 0;
}
