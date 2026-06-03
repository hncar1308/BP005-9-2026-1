#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " byte" << endl;
    cout << "bool: " << sizeof(bool) << " byte" << endl;
    cout << "uint8_t: " << sizeof(uint8_t) << " byte" << endl;
    cout << "uint16_t: " << sizeof(uint16_t) << " bytes" << endl;
    cout << "uint32_t: " << sizeof(uint32_t) << " bytes" << endl;

    return 0;
}
