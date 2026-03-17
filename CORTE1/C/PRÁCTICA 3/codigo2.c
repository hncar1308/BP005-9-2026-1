#include <stdio.h>

int main () {

        int time;

        printf("Ingrese una hora: \n");
        scanf("%d", &time);
        bool isDay = time < 18;

        if (isDay) {
                printf("Good day.");
        } else {
                printf("Good evening.");
        }
return 0;
}

