#include <iostream>
using namespace std;

int main() {
    double celsius;
    double fahrenheit;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "La temperatura en Fahrenheit es: " << fahrenheit << endl;

    return 0;
}
