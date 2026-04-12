#include <stdio.h>

int main() {
    int fila = 1, columna;
    while (fila <= 6) {
        columna = 1;
        while (columna <= 6) {
            printf("@ ");
            columna++;
        }
        printf("\n");
        fila++;
    }
    return 0;
}
