#include <iostream>

using namespace std;

float convertirAFahrenheit(float celsius);

int main() {
    float celsius;
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;
    cout << "La temperatura en Fahrenheit es: " << convertirAFahrenheit(celsius) << endl;
    return 0;
}

float convertirAFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}
