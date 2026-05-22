#include <iostream>
using namespace std;

int main() {
    int fila = 1;
        int columna ;

        while (fila <= 4) {
                columna = 1;

                while (columna <= 4) {
                        cout << "X ";
                        columna ++;
                }

                cout << "\n";
                fila ++;
        }
    return 0;
}
