#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1;
    double num2;
    double tolerancia = 0.00001;

    cout << "Ingrese el primer decimal: ";
    cin >> num1;
    cout << "Ingrese el segundo decimal: ";
    cin >> num2;

    if (fabs(num1 - num2) < tolerancia) {
        cout << "Los números son considerados iguales bajo la tolerancia." << endl;
    } else {
        cout << "Los números son diferentes." << endl;
    }

    return 0;
}
