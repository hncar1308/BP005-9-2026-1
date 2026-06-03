#include <stdio.h>

struct Motor {
    float velocidad;
    float voltaje;
    int sentido;
};

int main() {
    struct Motor m1 = {2.5, 8.0, 1};

    printf("Velocidad: %.2f rad/s\n", m1.velocidad);
    printf("Voltaje: %.2f V\n", m1.voltaje);
    printf("Sentido: %d\n", m1.sentido);

    return 0;
}
