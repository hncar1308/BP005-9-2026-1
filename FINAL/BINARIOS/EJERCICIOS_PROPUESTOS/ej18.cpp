#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int entrada;
    uint8_t valor;

    cout << "Ingrese un valor entre 0 y 255: ";
    cin >> entrada;

    if (entrada >= 0 && entrada <= 255) {
        valor = static_cast<uint8_t>(entrada);
        cout << "Almacenado exitosamente: " << static_cast<int>(valor) << endl;
    } else {
        cout << "Error: El valor está fuera del rango permitido." << endl;
    }

    return 0;
}
