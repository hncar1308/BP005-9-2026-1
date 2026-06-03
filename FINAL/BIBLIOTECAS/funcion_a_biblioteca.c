#include <stdio.h>

int sumar(int a, int b) {
  return a + b;
}

int main() {
  int x = 3;
  int y = 4;

  int resultado = sumar(x, y);

  printf("Resultado: %d\n", resultado);

  return 0;
}
