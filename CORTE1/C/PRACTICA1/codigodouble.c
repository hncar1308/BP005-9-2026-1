#include <stdio.h>

int main() {
double num1, num2, suma;

printf("Ingrese el primer numero: ");
scanf("%lf", &num1);

printf("Ingrese el segundo numero: ");
scanf("%lf", &num2);


suma = num1 + num2;

printf("La suma de %.2f y %.2f es: %2f\n", num1, num2, suma);


return 0;

}
