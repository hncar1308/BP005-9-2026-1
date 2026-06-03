#include <stdio.h>

void cambiarValor(int *x) {
    *x = 100;
}

int main() {
    int numero = 20;

    cambiarValor(&numero);
    printf("numero= %d\n", numero);

    return 0;
}
