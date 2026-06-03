#include <stdio.h>

typedef struct {
    float kp;
    float ki;
    float kd;
} PID;

int main() {
    PID controlador1 = {2.0, 0.5, 0.1};
    PID controlador2;

    controlador2 = controlador1;

    printf("Kp: %.2f\n", controlador2.kp);
    printf("Ki: %.2f\n", controlador2.ki);
    printf("Kd: %.2f\n", controlador2.kd);

    return 0;
}
