#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main() {
    uint8_t x = 255;
    int8_t y = -1;

    cout << "Bits de x (255): " << bitset<8>(x) << endl;
    cout << "Bits de y (-1):  " << bitset<8>(static_cast<uint8_t>(y)) << endl;

    return 0;
}
