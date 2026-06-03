#include "Motor.h"

Motor::Motor() {
    velocidad = 0;
}

void Motor::setVelocidad(int nuevaVelocidad) {
    velocidad = nuevaVelocidad;
}

int Motor::getVelocidad() {
    return velocidad;
}

void Motor::detener() {
    velocidad = 0;
}
