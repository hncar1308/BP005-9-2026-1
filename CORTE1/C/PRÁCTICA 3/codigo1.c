#include <stdio.h>

int main () {
        int time;

        printf("Ingrese una hora:\n");
        scanf("%d", &time);

        if (time < 18) {
                printf("Good day.");
        } else {
                printf("Good evening.");
        }
return 0;
}

