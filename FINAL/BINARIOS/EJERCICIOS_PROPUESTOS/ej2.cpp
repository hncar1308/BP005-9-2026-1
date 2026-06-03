#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;

    cout << "Ingrese el primer entero: ";
    cin >> num1;
    cout << "Ingrese el segundo entero: ";
    cin >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicación: " << num1 * num2 << endl;
    cout << "División: " << num1 / num2 << endl;
    cout << "Residuo: " << num1 % num2 << endl;

    return 0;
}
