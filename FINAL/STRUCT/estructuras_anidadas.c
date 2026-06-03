#include <stdio.h>

typedef struct {
    float x;
    float y;
    float theta;
} Pose;

typedef struct {
    float velocidad;
    float voltaje;
} Motor;

typedef struct {
    Pose pose;
    Motor motorIzq;
    Motor motorDer;
} Robot;

int main() {
    Robot r;

    r.pose.x = 0.0;
    r.pose.y = 0.0;
    r.pose.theta = 0.0;

    r.motorIzq.velocidad = 2.1;
    r.motorIzq.voltaje = 7.5;

    r.motorDer.velocidad = 2.0;
    r.motorDer.voltaje = 7.3;

    printf("Pose: x = %.2f, y = %.2f, theta = %.2f\n",
           r.pose.x, r.pose.y, r.pose.theta);

    printf("Motor izquierdo: %.2f rad/s, %.2f V\n",
           r.motorIzq.velocidad, r.motorIzq.voltaje);

    printf("Motor derecho: %.2f rad/s, %.2f V\n",
           r.motorDer.velocidad, r.motorDer.voltaje);

    return 0;
}
