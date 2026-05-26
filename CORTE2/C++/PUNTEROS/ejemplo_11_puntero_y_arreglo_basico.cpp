#include <iostream> 
#include <stddef.h>
using namespace std;

int main(void) { 
    int *p = NULL; 

    if (p != NULL) { 
        cout << "Valor = " << *p << endl;
    } else {
        cout << "p no apunta a una direccion valida." << endl;
    }

	return 0;
}
