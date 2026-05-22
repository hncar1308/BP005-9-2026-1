#include <iostream>
using namespace std;

int main() {
    int fila = 1, columna;
    while (fila <= 6) {
        columna = 1;
        while (columna <= 6) {
            cout << "@ ";
            columna++;
        }
        cout << "\n";
        fila++;
    }
    return 0;
}
