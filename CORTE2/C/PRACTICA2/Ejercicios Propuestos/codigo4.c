#include <stdio.h>

int main() {
    for (int fila = 6; fila >= 1; fila--) {
        for (int columna = 1; columna <= fila; columna++) {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
