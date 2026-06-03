#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    uint8_t pwm_valor = 128;

    cout << "Valor del PWM asignado: " << static_cast<int>(pwm_valor) << endl;

    return 0;
}
