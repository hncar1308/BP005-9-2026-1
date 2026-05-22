#include <iostream>
using namespace std;

int nuevoX(int x, int y) {
    return y;
}

int nuevoY(int x, int y) {
    return x;
}

void mostrar(int x, int y) {
    cout << "x = " << x << ", y = " << y << endl;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Antes:" << endl;
    mostrar(x, y);

    int tempX = nuevoX(x, y);
    int tempY = nuevoY(x, y);

    x = tempX;
    y = tempY;

    cout << "Despues:" << endl;
    mostrar(x, y);

    return 0;
}
