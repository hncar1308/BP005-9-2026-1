#include <stdio.h>

struct Ejemplo {
    char letra;
    int numero;
    float valor;
};

int main() {
    struct Ejemplo e;

    printf("Tamano de char: %zu bytes\n", sizeof(char));
    printf("Tamano de int: %zu bytes\n", sizeof(int));
    printf("Tamano de float: %zu bytes\n", sizeof(float));
    printf("Tamano de struct Ejemplo: %zu bytes\n", sizeof(e));

    return 0;
}
