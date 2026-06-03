#include <stdio.h>

typedef struct {
    int codigo;
    float resistencia;
    float potencia;
} Resistor;

int main() {
    Resistor resistores[3];
    int i;
    float suma = 0.0;

    for(i = 0; i < 3; i++) {
        printf("Resistor %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &resistores[i].codigo);

        printf("Resistencia: ");
        scanf("%f", &resistores[i].resistencia);

        printf("Potencia: ");
        scanf("%f", &resistores[i].potencia);

        suma = suma + resistores[i].resistencia;
    }

    printf("\nListado de resistores:\n");

    for(i = 0; i < 3; i++) {
        printf("Codigo %d: %.2f ohmios, %.2f W\n",
               resistores[i].codigo,
               resistores[i].resistencia,
               resistores[i].potencia);
    }

    printf("Resistencia promedio: %.2f ohmios\n", suma / 3.0);

    return 0;
}
