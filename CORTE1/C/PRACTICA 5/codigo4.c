  GNU nano 8.7.1                                codigo4.c                                 Modified
#include <stdio.h>

int main() {
        int a, b;

        printf("Ingrese el primer numero: ");
        scanf("%d", &a);

        if (a > b) {
                printf("El mayor es: %d\n", a);
        } else if (b > a) {
                printf("El mayor es: %d\n", b);
        } else {
                printf("Ambos numeros son iguales.\n");
        }

        return 0;
}

