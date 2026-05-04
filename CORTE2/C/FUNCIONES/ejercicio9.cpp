#include <iostream>

using namespace std;

int factorialIterativo(int n);
int factorialRecursivo(int n);

int main() {
    int num;

    cout << "Digite un numero entero no negativo: ";
    cin >> num;

    cout << "Factorial iterativo: " << factorialIterativo(num) << endl;
    cout << "Factorial recursivo: " << factorialRecursivo(num) << endl;

    return 0;
}

int factorialIterativo(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int factorialRecursivo(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursivo(n - 1);
}
