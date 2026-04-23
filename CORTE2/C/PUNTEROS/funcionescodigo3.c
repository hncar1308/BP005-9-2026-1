#include <stdio.h>

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

    printf("Suma = %d\n", suma);
    printf("Mayor = %d\n", mayor);
    printf("Menor = %d\n", menor);

    return 0;
}
