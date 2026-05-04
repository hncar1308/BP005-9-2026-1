#include <iostream>

using namespace std;

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
            cout << "Digite m[" << i << "][" << j << "]: ";
            cin >> m[i][j];
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
        cout << "Suma fila " << i << ": " << sumarFila(m, i) << endl;
    }
}
