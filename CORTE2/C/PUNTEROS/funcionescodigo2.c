#include <stdio.h>

int nuevoX(int x, int y) {
    return y;
}

int nuevoY(int x, int y) {
    return x;
}

void mostrar(int x, int y) {
    printf("x = %d, y = %d\n", x, y);
}

int main() {
    int x = 10;
    int y = 20;

    printf("Antes:\n");
    mostrar(x, y);

    int tempX = nuevoX(x, y);
    int tempY = nuevoY(x, y);

    x = tempX;
    y = tempY;

    printf("Despues:\n");
    mostrar(x, y);

    return 0;
}
