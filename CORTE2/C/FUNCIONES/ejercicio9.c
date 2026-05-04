#include <stdio.h>

int factorialIterativo(int n);
int factorialRecursivo(int n);

int main() {
    int num;

    printf("Digite un numero entero no negativo: ");
    scanf("%d", &num);

    printf("Factorial iterativo: %d\n", factorialIterativo(num));
    printf("Factorial recursivo: %d\n", factorialRecursivo(num));

    return 0;
}

int factorialIterativo(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int factorialRecursivo(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursivo(n - 1);
}
