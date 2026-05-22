#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            int pos = (i <= n) ? (n - i) : (i - n);
            if (j == pos + 1 || j == (2 * n - 1) - pos) cout << ("$");
            else cout << (" ");
        }
        cout << ("\n");
    }
    return 0;
}
