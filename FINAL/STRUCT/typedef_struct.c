#include <stdio.h>

typedef struct {
    float temperatura;
    float humedad;
    int estado;
} Sensor;

int main() {
    Sensor s1;

    s1.temperatura = 24.8;
    s1.humedad = 72.0;
    s1.estado = 1;

    printf("Temperatura: %.2f C\n", s1.temperatura);
    printf("Humedad: %.2f %%\n", s1.humedad);
    printf("Estado: %d\n", s1.estado);

    return 0;
}
