#include <iostream>
#include "Motor.h"

int main() {
    Motor motor1;

    motor1.setVelocidad(120);

    std::cout << "Velocidad: "
              << motor1.getVelocidad()
              << std::endl;

    motor1.detener();

    std::cout << "Velocidad despues de detener: "
              << motor1.getVelocidad()
              << std::endl;

    return 0;
}
