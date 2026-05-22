#include <iostream>
using namespace std;

int main() {
    for (int fila = 6; fila >= 1; fila--) {
        for (int columna = 1; columna <= fila; columna++) {
            cout << "X";
        }
        cout << "\n";
    }
    return 0;
}
