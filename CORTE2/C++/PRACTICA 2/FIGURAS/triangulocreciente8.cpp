#include <iostream>
using namespace std;

int main() {
    int fila = 1;
        int columna ;

        do {
                columna = 1;

                do {
                        cout << "$ ";
                        columna++;
                } while (columna <= fila);


                cout << "\n";
                fila++;
        } while (fila <= 5);
        
    return 0;
}
