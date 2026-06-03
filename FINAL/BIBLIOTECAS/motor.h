#ifndef MOTOR_H
#define MOTOR_H

class Motor {
public:
    Motor();
    void setVelocidad(int nuevaVelocidad);
    int getVelocidad();
    void detener();

private:
    int velocidad;
};

#endif
