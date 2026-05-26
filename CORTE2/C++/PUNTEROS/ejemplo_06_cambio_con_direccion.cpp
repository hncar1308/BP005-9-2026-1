#include <iostream>
#include <stddef.h>
using namespace std;

void cambiar (int *p) {
    if (p == NULL) {
        return;
    }
    
    *p = 100;
}

int main(void) {
    int x = 5;
    
    cout << "Antes: x = " << x << endl; 
    
    cambiar(&x);
    
    cout << "Despues: x = " << x << endl;
    
    return 0;
}
