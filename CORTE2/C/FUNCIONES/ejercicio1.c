#include <stdio.h>

float convertirAFahrenheit(float celsius);

int main() {
    float celsius;
    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &celsius);
    printf("La temperatura en Fahrenheit es: %.2f\n", convertirAFahrenheit(celsius));
    return 0;
}

float convertirAFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}
