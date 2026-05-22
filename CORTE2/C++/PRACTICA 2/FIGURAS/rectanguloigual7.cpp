#include <iostream>
using namespace std;

int main() {
    int fila = 1;
        int columna ;

        do {
                columna = 1;

                do {
                        cout << "= ";
                        columna++;
                } while (columna <= 6);


                cout << "\n";
                fila++;
        } while (fila <= 3);
        
    return 0;
}
