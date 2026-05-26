#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas = 2;
    int columnas = 3;
    int i;
    int j;
    int **matriz = NULL;

    matriz = malloc(filas * sizeof(int *));

    if (matriz == NULL) {
        printf("No se pudo reservar memoria para las filas.\n");
        return 1;
    }

    for (i = 0; i < filas; i++) {
        matriz[i] = malloc(columnas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("No se pudo reservar memoria para la fila %d.\n", i);
            return 1;
        }
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matriz[i][j] = (i + 1) * 10 + j;
        }
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < filas; i++) {
        free(matriz[i]);
        matriz[i] = NULL;
    }

    free(matriz);
    matriz = NULL;

    return 0;
}
