#include <stdio.h>

typedef struct {
    char nombre[20];
    float muestras[5];
} Senal;

int main() {
    Senal s = {
        "Entrada",
        {1.2, 1.4, 1.8, 2.0, 2.1}
    };

    int i;

    printf("Senal: %s\n", s.nombre);

    for(i = 0; i < 5; i++) {
        printf("Muestra %d: %.2f\n", i, s.muestras[i]);
    }

    return 0;
}
