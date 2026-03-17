#include <stdio.h>
int main () {

        int time;

        printf("Ingrese una hora: ");
        scanf("%d", &time);


        (time < 18) ? printf("Good day.") : printf("Good evening.");

return 0;
}
