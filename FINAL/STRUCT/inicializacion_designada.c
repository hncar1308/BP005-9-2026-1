#include <stdio.h>

struct Medicion {
    int muestra;
    float tiempo;
    float valor;
};

int main() {
    struct Medicion m1 = {
        .muestra = 1,
        .tiempo = 0.01,
        .valor = 3.27
    };

    printf("Muestra: %d\n", m1.muestra);
    printf("Tiempo: %.3f s\n", m1.tiempo);
    printf("Valor: %.2f\n", m1.valor);

    return 0;
}
