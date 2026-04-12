#include <stdio.h>

int main() {
    int f, c;
    int n = 3; //Tamaño del cuadrado

    // FOR
    printf("Cuadrado con FOR:\n");
    for (f = 1; f <= n; f++) {
        for (c = 1; c <= n; c++) {
            printf("X ");
        }
        printf("\n");
    }

    //WHILE
    printf("\nCuadrado con WHILE:\n");
    f = 1; 
    while (f <= n) {
        c = 1;
        while (c <= n) {
            printf("X ");
            c++;
        }
        printf("\n");
        f++;
    }

    //DO-WHILE
    printf("\nCuadrado con DO-WHILE:\n");
    f = 1;
    do {
        c = 1;
        do {
            printf("X ");
            c++;
        } while (c <= n);
        printf("\n");
        f++;
    } while (f <= n);

    return 0;
}
