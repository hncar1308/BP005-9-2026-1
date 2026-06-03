#include <stdio.h>

typedef struct {
    float temperatura;
    float humedad;
    int estado;
} Sensor;

void mostrarSensor(Sensor s) {
    printf("Temperatura: %.2f C\n", s.temperatura);
    printf("Humedad: %.2f %%\n", s.humedad);
    printf("Estado: %d\n", s.estado);
}

int main() {
    Sensor s1 = {26.4, 65.0, 1};

    mostrarSensor(s1);

    return 0;
}
