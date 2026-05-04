#include <iostream>
#include <iomanip>

using namespace std;

float convertirAFahrenheit(float celsius);

int main() {
    float celsius, fahrenheit;

    cout << "Digite la temperatura en Celsius: ";
    cin >> celsius;

    fahrenheit = convertirAFahrenheit(celsius);

    cout << fixed << setprecision(2);
    cout << "Temperatura en Fahrenheit: " << fahrenheit << endl;

    return 0;
}

float convertirAFahrenheit(float celsius) {
    return (9.0 / 5.0 * celsius) + 32;
}
