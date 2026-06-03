#include <stdio.h>

struct Sensor {
    float temperatura;
    float humedad;
    int estado;
};

int main() {
    struct Sensor s1;

    s1.temperatura = 25.6;
    s1.humedad = 68.5;
    s1.estado = 1;

    printf("Temperatura: %.2f C\n", s1.temperatura);
    printf("Humedad: %.2f %%\n", s1.humedad);
    printf("Estado: %d\n", s1.estado);

    return 0;
}
