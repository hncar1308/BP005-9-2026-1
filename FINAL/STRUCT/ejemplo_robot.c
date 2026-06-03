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
    Motor izquierdo;
    Motor derecho;
} Robot;

void inicializarRobot(Robot *r) {
    r->pose.x = 0.0;
    r->pose.y = 0.0;
    r->pose.theta = 0.0;

    r->izquierdo.velocidad = 0.0;
    r->izquierdo.voltaje = 0.0;

    r->derecho.velocidad = 0.0;
    r->derecho.voltaje = 0.0;
}

void actualizarMotores(Robot *r, float vIzq, float vDer) {
    r->izquierdo.velocidad = vIzq;
    r->derecho.velocidad = vDer;
}

void aplicarVoltajes(Robot *r, float uIzq, float uDer) {
    r->izquierdo.voltaje = uIzq;
    r->derecho.voltaje = uDer;
}

void moverRobot(Robot *r, float dx, float dy, float dtheta) {
    r->pose.x += dx;
    r->pose.y += dy;
    r->pose.theta += dtheta;
}

void mostrarRobot(Robot r) {
    printf("Pose del robot\n");
    printf("x = %.2f, y = %.2f, theta = %.2f\n",
           r.pose.x, r.pose.y, r.pose.theta);

    printf("Motor izquierdo: %.2f rad/s, %.2f V\n",
           r.izquierdo.velocidad,
           r.izquierdo.voltaje);

    printf("Motor derecho: %.2f rad/s, %.2f V\n",
           r.derecho.velocidad,
           r.derecho.voltaje);
}

int main() {
    Robot robot;

    inicializarRobot(&robot);
    actualizarMotores(&robot, 2.1, 2.0);
    aplicarVoltajes(&robot, 7.5, 7.3);
    moverRobot(&robot, 0.10, 0.00, 0.02);

    mostrarRobot(robot);

    return 0;
}
