#include <iostream>
#include <iomanip>

using namespace std;

float area(float lado);
float area(float base, float altura);
float area(float baseMayor, float baseMenor, float altura);

int main() {
    cout << fixed << setprecision(2);
    cout << "Area del cuadrado: " << area(5.0) << endl;
    cout << "Area del rectangulo: " << area(8.0, 3.0) << endl;
    cout << "Area del trapecio: " << area(10.0, 5.0, 4.0) << endl;

    return 0;
}

float area(float lado) {
    return lado * lado;
}

float area(float base, float altura) {
    return base * altura;
}

float area(float baseMayor, float baseMenor, float altura) {
    return ((baseMayor + baseMenor) * altura) / 2.0;
}
