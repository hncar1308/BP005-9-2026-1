#include <stdio.h>
#include "utilidades.h"

int main() {
    int x = 10;
    int y = 20;

    printf("Antes:\n");
    printf("x= %d\n", x);
    printf("y= %d\n", y);

    intercambiar(&x, &y);

    printf("Despues:\n");
    printf("x= %d\n", x);
    printf("y= %d\n", y);

    return 0;
}
