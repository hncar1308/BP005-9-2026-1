#include <stdio.h>

typedef struct {
    float velocidad;
    float voltaje;
} Motor;

void cambiarVelocidad(Motor m) {
    m.velocidad = 5.0;
}

int main() {
    Motor motor1 = {2.0, 6.0};

    cambiarVelocidad(motor1);

    printf("Velocidad final: %.2f rad/s\n", motor1.velocidad);

    return 0;
}
