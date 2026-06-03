#include <iostream>
using namespace std;

int main() {
    double base;
    double altura;
    double area;

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;

    area = (base * altura) / 2.0;

    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
