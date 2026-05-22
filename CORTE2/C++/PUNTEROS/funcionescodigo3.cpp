#include <iostream>
using namespace std;

int calcularSuma(int v[], int n) {
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += v[i];
    }

    return suma;
}

int buscarMayor(int v[], int n) {
    int mayor = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] > mayor) {
            mayor = v[i];
        }
    }

    return mayor;
}

int buscarMenor(int v[], int n) {
    int menor = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }
    }

    return menor;
}

int main() {
    int datos[5] = {8, 3, 15, 6, 10};

    int suma = calcularSuma(datos, 5);
    int mayor = buscarMayor(datos, 5);
    int menor = buscarMenor(datos, 5);

    cout << "Suma = " << suma << endl;
    cout << "Mayor = " << mayor << endl;
    cout << "Menor = " << menor << endl;

    return 0;
}
