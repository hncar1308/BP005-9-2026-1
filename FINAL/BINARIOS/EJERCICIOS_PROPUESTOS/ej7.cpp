#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "Es par" << endl;
    } else {
        cout << "Es impar" << endl;
    }

    return 0;
}
