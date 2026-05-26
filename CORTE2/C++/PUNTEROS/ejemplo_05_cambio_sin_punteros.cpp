#include <iostream>
using namespace std;

void cambiar (int n) {
    n = 100;
    
    cout << "Dentro de cambiar: n = " << n << endl;
}

int main(void) {
    int x = 5;
    
    cout << "Antes: x = " << x << endl; 
    
    cambiar(x);
    
    cout << "Despues: x = " << x << endl;
    
    return 0;
}
