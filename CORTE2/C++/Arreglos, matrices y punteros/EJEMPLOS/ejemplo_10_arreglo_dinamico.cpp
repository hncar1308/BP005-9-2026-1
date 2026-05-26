#include <iostream>
using namespace std;

int main() {
    int n;
    int *datos = nullptr;

    cout << "Cuantos enteros desea guardar: ";
    cin >> n;

    datos = new (nothrow) int[n];

    if (datos == nullptr) {
        cout << "No se pudo reservar memoria." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos[" << i << "]: ";
        cin >> datos[i];
    }

    cout << "Datos ingresados: ";
    for (int i = 0; i < n; i++) {
        cout << datos[i] << " ";
    }
    cout << endl;

    delete[] datos;
    datos = nullptr;

    return 0;
}
