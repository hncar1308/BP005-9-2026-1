#include <stdio.h>

typedef struct {
    int x;
    int y;
} Punto;

int sonIguales(Punto a, Punto b) {
    if(a.x == b.x && a.y == b.y)
        return 1;
    else
        return 0;
}

int main() {
    Punto p1 = {3, 5};
    Punto p2 = {3, 5};
    Punto p3 = {4, 1};

    if(sonIguales(p1, p2))
        printf("p1 y p2 son iguales\n");

    if(!sonIguales(p1, p3))
        printf("p1 y p3 son diferentes\n");

    return 0;
}
