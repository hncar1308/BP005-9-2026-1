#include <iostream>

void cambiarValor(int &x) {
    x = 100;
}

int main() {
    int numero = 20;

    cambiarValor(numero);

    std::cout << "numero = " << numero << std::endl;

    return 0;
}
