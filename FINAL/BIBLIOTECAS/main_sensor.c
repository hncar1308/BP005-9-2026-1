#include <stdio.h>
#include "sensor.h"

int main() {
    float temperatura = 0.0f;
    float humedad = 0.0f;

    leerSensor(&temperatura, &humedad);

    printf("Temperatura: %.2f C\n", temperatura);
    printf("Humedad: %.2f %%\n", humedad);

    return 0;
}
