#include <stdio.h>

int main() {
    // Definición de variables
    int fila = 1;
    int columna;
    int n = 9;         // Tamaño de la cuadrícula (9x9)
    int centro = 5;    // Punto donde se cruzan las líneas

    // Bucle exterior para controlar las filas
    do {
        columna = 1; // Reiniciar el contador de columnas para cada fila

        // Bucle interior para controlar las columnas
        do {
            // Condición para dibujar la cruz:
            // Si la fila actual es el centro O la columna actual es el centro
            if (fila == centro || columna == centro) {
                printf("+");
            } else {
                printf(" ");
            }
            
            columna++;
        } while (columna <= n);

        // Salto de línea al terminar cada fila
        printf("\n");
        fila++;
        
    } while (fila <= n);

    return 0;
}
