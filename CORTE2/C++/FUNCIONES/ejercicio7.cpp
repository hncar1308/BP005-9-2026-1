#include <iostream>

using namespace std;

void leerMatriz(int m[][3], int filas);
void mostrarMatriz(int m[][3], int filas);
int sumarMatriz(int m[][3], int filas);

int main() {
    int matriz[3][3];

    leerMatriz(matriz, 3);
    mostrarMatriz(matriz, 3);
    cout << "Suma total: " << sumarMatriz(matriz, 3) << endl;

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

void mostrarMatriz(int m[][3], int filas) {
    cout << "Matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < 3; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
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
