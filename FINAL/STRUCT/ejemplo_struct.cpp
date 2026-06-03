#include <iostream>
using namespace std;

struct Punto {
    int x;
    int y;

    void mostrar() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Punto p;

    p.x = 3;
    p.y = 5;

    p.mostrar();

    return 0;
}
