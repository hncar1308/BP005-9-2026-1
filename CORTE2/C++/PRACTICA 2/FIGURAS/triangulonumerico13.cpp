#include <iostream>
using namespace std;

int main() {
    int fila, espacios, numero;
    int n = 5;

    for (fila = 1; fila <= n; fila++) {

        // Espacios
        for (espacios = 1; espacios <= n - fila; espacios++) {
            cout << "  "; // doble espacio para alinear
        }

        // Números ascendentes
        for (numero = 1; numero <= fila; numero++) {
            cout << ("%2d ", numero);
        }

        // Números descendentes
        for (numero = fila - 1; numero >= 1; numero--) {
            cout << ("%2d ", numero);
        }

        cout << "\n";
    }

    return 0;
}
