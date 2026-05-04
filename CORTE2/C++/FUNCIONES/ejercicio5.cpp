#include <iostream>
#include <iomanip>

using namespace std;

void leerArreglo(int v[], int n);
int sumarArreglo(int v[], int n);
float calcularPromedio(int suma, int n);
void mostrarArreglo(int v[], int n);

int main() {
    int numeros[5];
    int suma;
    float promedio;

    leerArreglo(numeros, 5);
    suma = sumarArreglo(numeros, 5);
    promedio = calcularPromedio(suma, 5);

    mostrarArreglo(numeros, 5);
    cout << "Suma: " << suma << endl;
    cout << fixed << setprecision(2) << "Promedio: " << promedio << endl;

    return 0;
}

void leerArreglo(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Digite el elemento " << i << ": ";
        cin >> v[i];
    }
}

int sumarArreglo(int v[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += v[i];
    }
    return s;
}

float calcularPromedio(int suma, int n) {
    return (float)suma / n;
}

void mostrarArreglo(int v[], int n) {
    cout << "Elementos del arreglo: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
