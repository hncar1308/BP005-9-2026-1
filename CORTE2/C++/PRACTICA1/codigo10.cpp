#include <iostream>
using namespace std;

int main() {
        int i = 1;
        float nota;
        float suma = 0.0;
        float promedio;

        for (i = 1; i <= 4; i++) {
                cout << "Ingrese la nota: " << i << "\n";
                cin >> nota;

                suma = suma + nota;
        }

        promedio = suma / 4.0;

        cout << "El promedio: " << promedio << "\n";

        return 0;
}
