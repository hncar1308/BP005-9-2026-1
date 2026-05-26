#include <iostream>
#include <stddef.h>
using namespace std;

void intercambiar(int *a, int *b) {
    if (a == NULL || b == NULL) {
        return;
    }
    
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int x = 10;
	int y = 20;

	cout << "Antes: x = " << x <<", y = " << y << endl;
	
	intercambiar(&x, &y);
	
	cout << "Despues: x = " << x << ", y = " << y << endl;

	return 0;
}
