#include <stdio.h>

typedef struct {
    int codigo;
    float resistencia;
    float potencia;
} Resistor;

int main() {
    Resistor r;

    printf("Ingrese el codigo del resistor: ");
    scanf("%d", &r.codigo);

    printf("Ingrese la resistencia en ohmios: ");
    scanf("%f", &r.resistencia);

    printf("Ingrese la potencia en vatios: ");
    scanf("%f", &r.potencia);

    printf("\nDatos registrados:\n");
    printf("Codigo: %d\n", r.codigo);
    printf("Resistencia: %.2f ohmios\n", r.resistencia);
    printf("Potencia: %.2f W\n", r.potencia);

    return 0;
}
