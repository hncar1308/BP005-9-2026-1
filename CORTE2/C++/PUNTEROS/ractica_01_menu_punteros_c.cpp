#include <iostream> 
#include <stddef.h>
using namespace std;

void duplicar(int *p) {
    if (p != NULL) {
        *p = (*p) * 2;
    }
}

void intercambiar(int *a, int *b) {
    if (a == NULL || b == NULL) {
        return;
    }
    
    int temp = *a; 
    *a = *b;
    *b = temp;
}

void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor) {
    if (suma == NULL || mayor == NULL) {
        return;
    }
    
    *suma = a + b + c;
    
    *mayor = a;
    if (b > *mayor) {
        *mayor = b;
    }
    if (c > *mayor) {
        *mayor = c;
    }
    
    *menor = a;
    if (b > *menor) {
        *menor = b;
    }
    if (c > *menor) {
        *menor = c;
    }
}

int main(void) {
    int x = 10;
    int y = 20;
    int z = 5;
    
    int *px = &x;
    
    int suma;
    int mayor;
    int menor;
    int opcion;
    
    do {
        cout << "\n====== MENU CORTO DE PUNTEROS ======\n";
        cout << "1. Mostrar x, &x, px y *px\n";
        cout << "2. Duplicar x usando el puntero px\n";
        cout << "3. Intercambiar x y y usando punteros\n";
        cout << "4. Analizar x, y, z usando punteros de salida\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "x   = " << x << endl;
                cout << "&x  = " << &x << endl;
                cout << "px  = " << px << endl;
                cout << "*px = " << *px << endl;
                break;

            case 2:
                cout << "Antes: x = " << x << endl;
                duplicar(px);
                cout << "Despues: x = " << x << endl;
                break;

            case 3:
                cout << "Antes: x = " << x << ", y = " << y << endl;
                intercambiar(&x, &y);
                cout << "Despues: x = " << x << ", y = " << y << endl;
                break;

            case 4:
                analizarNumeros(x, y, z, &suma, &mayor, &menor);
                cout << "Suma  = " << suma << endl;
                cout << "Mayor = " << mayor << endl;
                cout << "Menor = " << menor << endl;
                break;

            case 0:
                cout << "Fin del programa.\n";
                break;

            default:
                cout << "Opcion no valida.\n";
                break;
        }

    } while (opcion != 0);

    return 0;
}
