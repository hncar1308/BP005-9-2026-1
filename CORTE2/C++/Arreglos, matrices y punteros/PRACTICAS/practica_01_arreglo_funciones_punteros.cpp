#include <iostream>

using namespace std;

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
            matriz[i][j] = (i + 1) * 10 + j;
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
        matriz[i] = nullptr;
    }

    delete[] matriz;
    matriz = nullptr;

    return 0;
}
