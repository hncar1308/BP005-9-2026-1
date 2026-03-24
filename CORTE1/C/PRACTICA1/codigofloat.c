#include <stdio.h>
int main(){
  float num1, num2, suma;

printf("Ingrese el primer numero: ");
scanf("%f", &num1);

printf("Ingrese el segundo numero: ");
scanf("%f", &num2);

suma = num1 + num2;

printf("La suma de %.2f y %.2f es: %.2f\n", num1, num2, suma);

return 0;

}
