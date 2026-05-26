#include <iostream>
using namespace std;

int main(void) {
    int x = 25;
    int *p = &x;
    
    cout << "x = " << x << endl;
    cout << "*p = " << &x << endl;
    
    *p = 99;
    
    cout << "x despues = " << x << endl;
    
    return 0;
}
