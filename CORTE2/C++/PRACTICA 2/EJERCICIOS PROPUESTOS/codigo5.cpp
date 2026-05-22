#include <iostream>
using namespace std;

int main() {
    int n = 6;
    for (int fila = 1; fila <= n; fila++) {
        int espacios = 1;
        while (espacios <= n - fila) {
            cout << (" ");
            espacios++;
        }
        int caracteres = 1;
        while (caracteres <= (2 * fila - 1)) {
            cout << ("o");
            caracteres++;
        }
        cout << ("\n");
    }
    return 0;
}
