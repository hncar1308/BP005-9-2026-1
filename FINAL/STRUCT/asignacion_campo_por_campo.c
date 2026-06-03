#include <stdio.h>

struct Motor {
    float velocidad;
    float voltaje;
    int sentido;
};

int main() {
    struct Motor m1;

    m1.velocidad = 2.5;
    m1.voltaje = 8.0;
    m1.sentido = 1;

    printf("Velocidad: %.2f rad/s\n", m1.velocidad);
    printf("Voltaje: %.2f V\n", m1.voltaje);
    printf("Sentido: %d\n", m1.sentido);

    return 0;
}
