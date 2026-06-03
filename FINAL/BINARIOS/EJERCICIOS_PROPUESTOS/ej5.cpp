#include <iostream>
using namespace std;

int main() {
    double n1;
    double n2;
    double n3;
    double promedio;

    cout << "Ingrese nota 1: ";
    cin >> n1;
    cout << "Ingrese nota 2: ";
    cin >> n2;
    cout << "Ingrese nota 3: ";
    cin >> n3;

    promedio = (n1 + n2 + n3) / 3.0;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}
