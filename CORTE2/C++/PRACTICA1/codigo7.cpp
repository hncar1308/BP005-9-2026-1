#include <iostream>
using namespace std;

int main() {
        int suma = 0;
        int i;

        for (i = 1; i <= 10; i++) {
                suma = suma + i;
        }

        cout << "La suma es: " << suma << "\n";

        return 0;
}
