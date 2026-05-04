#include <stdio.h>

void leerMatriz(int m[][3], int filas);
void mostrarMatriz(int m[][3], int filas);
int sumarMatriz(int m[][3], int filas);

int main() {
    int matriz[3][3];

    leerMatriz(matriz, 3);
    mostrarMatriz(matriz, 3);
    printf("Suma total: %d\n", sumarMatriz(matriz, 3));

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

void mostrarMatriz(int m[][3], int filas) {
    printf("Matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int sumarMatriz(int m[][3], int filas) {
    int s = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < 3; j++) {
            s += m[i][j];
        }
    }
    return s;
}
