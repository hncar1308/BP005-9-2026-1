#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int8_t variable = 127;
    variable = variable + 1;

    cout << "Resultado del desbordamiento (127 + 1): " << static_cast<int>(variable) << endl;

    return 0;
}
