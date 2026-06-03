#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n = 25.0;
    double b = 5.0;
    double e = 2.0;

    cout << "Raíz cuadrada: " << sqrt(n) << endl;
    cout << "Potencia: " << pow(b, e) << endl;
    cout << "Valor absoluto: " << fabs(-9.8) << endl;
    cout << "Redondeo: " << round(4.5) << endl;
    cout << "Piso (floor): " << floor(4.9) << endl;
    cout << "Techo (ceil): " << ceil(4.1) << endl;

    return 0;
}
