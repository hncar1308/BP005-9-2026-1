#include <iostream>
using namespace std;

int main() {
    int fila = 5;
        int columna;

        while (fila >= 1) {
                columna = 1;

                while (columna <= fila) {
                        cout << ("+ ");
                        columna++;
                }

                cout << "\n";
                fila--;
        }
    return 0;
}
