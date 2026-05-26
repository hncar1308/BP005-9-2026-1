#include <iostream>
using namespace std;

int main(void) {
    int x = 5;
    int *p = &x;
    
    *p = 40;
        
    cout << "x = " << x << endl;
    
    return 0;
}
