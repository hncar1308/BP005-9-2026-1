#include <iostream>
using namespace std;

int main() {
    int f, c;
    int n = 3; 

    cout << ("Cuadrado con FOR:\n");
    for (f = 1; f <= n; f++) {
        for (c = 1; c <= n; c++) {
            cout << ("X ");
        }
        cout << ("\n");
    }

    cout << ("\nCuadrado con WHILE:\n");
    f = 1; 
    while (f <= n) {
        c = 1;
        while (c <= n) {
            cout << ("X ");
            c++;
        }
        cout << ("\n");
        f++;
    }

    cout << ("\nCuadrado con DO-WHILE:\n");
    f = 1;
    do {
        c = 1;
        do {
            cout << ("X ");
            c++;
        } while (c <= n);
        cout << ("\n");
        f++;
    } while (f <= n);
    return 0;
}
