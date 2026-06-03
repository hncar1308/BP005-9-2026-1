#include <stdio.h>

typedef struct {
    int muestra;
    float tiempo;
    float valor;
} Medicion;

int main() {
    Medicion datos[3] = {
        {1, 0.00, 2.50},
        {2, 0.01, 2.80},
        {3, 0.02, 3.10}
    };

    int i;
    float suma = 0.0;

    for(i = 0; i < 3; i++) {
        printf("Muestra %d: ", datos[i].muestra);
        printf("t = %.2f s, ", datos[i].tiempo);
        printf("valor = %.2f\n", datos[i].valor);

        suma += datos[i].valor;
    }

    printf("Promedio = %.2f\n", suma / 3.0);

    return 0;
}
