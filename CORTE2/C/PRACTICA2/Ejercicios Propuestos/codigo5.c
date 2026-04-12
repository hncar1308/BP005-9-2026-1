#include <stdio.h>

int main() {
    int n = 6;
    for (int fila = 1; fila <= n; fila++) {
        int espacios = 1;
        while (espacios <= n - fila) {
            printf(" ");
            espacios++;
        }
        int caracteres = 1;
        while (caracteres <= (2 * fila - 1)) {
            printf("o");
            caracteres++;
        }
        printf("\n");
    }
    return 0;
}
