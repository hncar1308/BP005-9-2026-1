#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    uint8_t variable = 255;
    variable = variable + 1;

    cout << "Resultado del desbordamiento (255 + 1): " << static_cast<int>(variable) << endl;

    return 0;
}
