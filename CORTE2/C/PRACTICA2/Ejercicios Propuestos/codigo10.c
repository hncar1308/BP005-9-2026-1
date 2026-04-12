#include <stdio.h>

int main() {
    // Techo
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 7 - i; j++) printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) printf("^");
        printf("\n");
    }
    // Base
    for (int i = 1; i <= 4; i++) {
        printf("   | [ ] | \n");
    }
    return 0;
}
