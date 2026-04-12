#include <stdio.h>

int main() {
    int fila, espacios, numero;
    int n = 5;

    for (fila = 1; fila <= n; fila++) {

        // Espacios
        for (espacios = 1; espacios <= n - fila; espacios++) {
            printf("  "); // doble espacio para alinear
        }

        // Números ascendentes
        for (numero = 1; numero <= fila; numero++) {
            printf("%2d ", numero);
        }

        // Números descendentes
        for (numero = fila - 1; numero >= 1; numero--) {
            printf("%2d ", numero);
        }

        printf("\n");
    }

    return 0;
}
