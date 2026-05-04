#include <stdio.h>

void leerMatriz(int m[][3], int filas);
int sumarFila(int m[][3], int fila);
void mostrarSumasPorFila(int m[][3], int filas);

int main() {
    int matriz[3][3];

    leerMatriz(matriz, 3);
    mostrarSumasPorFila(matriz, 3);

    return 0;
}

void leerMatriz(int m[][3], int filas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

int sumarFila(int m[][3], int fila) {
    int s = 0;
    for (int j = 0; j < 3; j++) {
        s += m[fila][j];
    }
    return s;
}

void mostrarSumasPorFila(int m[][3], int filas) {
    for (int i = 0; i < filas; i++) {
        printf("Suma fila %d: %d\n", i, sumarFila(m, i));
    }
}
