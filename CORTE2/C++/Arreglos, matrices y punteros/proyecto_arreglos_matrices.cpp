#include <iostream>

using namespace std;

int sumarMatriz(int **matriz, int filas, int columnas) {
    int suma = 0;

    if (matriz == nullptr) {
        return 0;
    }

    for (int i = 0; i < filas; i++) {
        if (matriz[i] == nullptr) {
            return 0;
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma = suma + matriz[i][j];
        }
    }

    return suma;
}

int main() {
    int filas = 2;
    int columnas = 3;
    int **matriz = nullptr;

    matriz = new (nothrow) int*[filas];

    if (matriz == nullptr) {
        cout << "No se pudo reservar memoria para las filas." << endl;
        return 1;
    }

    for (int i = 0; i < filas; i++) {
        matriz[i] = new (nothrow) int[columnas];
        if (matriz[i] == nullptr) {
            cout << "No se pudo reservar memoria para la fila " << i << "." << endl;
            return 1;
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = i * columnas + j + 1;
        }
    }

    cout << "Suma = " << sumarMatriz(matriz, filas, columnas) << endl;

    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
        matriz[i] = nullptr;
    }

    delete[] matriz;
    matriz = nullptr;

    return 0;
}
