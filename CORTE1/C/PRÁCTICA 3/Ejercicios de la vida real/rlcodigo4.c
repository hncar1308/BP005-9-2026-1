#include <stdio.h>
int main () {
        int edad;
        bool isCitizen = true;

        printf("Ingrese su edad: ");
        scanf("%d", &edad);

        if (edad >= 18) {
                printf("Edad suficiente para votar.\n");

                if (isCitizen) {
                        printf("Y eres ciudadano, entonces puedes votar!\n");
                } else {
                        printf("Tienes que ser ciudadano para votar.\n");
                }
        } else {
                printf("No eres mayor. No puedes votar.\n");
        }
return 0;
}
