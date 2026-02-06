#include <iostream> // Biblioteca necesaria para entrada/salida

using namespace std; // Permite usar cout y cin directamente

int main() {
    // Declaración de variables
    double numero1, numero2, suma;

    // Solicitar datos al usuario
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // Realizar la operación
    suma = numero1 + numero2;

    // Mostrar el resultado
    cout << "La suma es: " << suma << endl;

    return 0; // Indica que el programa finalizó correctamente
}

