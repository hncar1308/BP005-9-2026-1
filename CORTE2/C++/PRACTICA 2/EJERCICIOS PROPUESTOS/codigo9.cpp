#include <iostream>
using namespace std;

int main() {
    int fila = 1, columna, n = 9, centro = 5;
    do {
        columna = 1;
        do {
            if (fila == centro || columna == centro) cout << ("+");
            else cout << (" ");
            columna++;
        } while (columna <= n);
        cout << ("\n");
        fila++;
    } while (fila <= n);
    return 0;
}
