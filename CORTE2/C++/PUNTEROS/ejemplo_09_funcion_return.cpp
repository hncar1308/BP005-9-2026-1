#include <iostream>
using namespace std;

int sumar(int a, int b) {
  return a + b;
}

int main(void) {
  int resultado = sumar(4, 7);

  cout << "Resultado = " << resultado << endl;

  return 0;
}
