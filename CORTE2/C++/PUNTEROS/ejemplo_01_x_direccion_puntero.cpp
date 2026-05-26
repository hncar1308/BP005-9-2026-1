#include <iostream>
using namespace std;

int main(void) {
    int x = 25;
    int *p = &x;
    
    cout << "x = " << x << endl;
    cout << "&x = " << (void *)&x << endl;
    cout << "p = " << (void *)p << endl;
    cout << "*p = " << *p << endl;
    
    return 0;
}
