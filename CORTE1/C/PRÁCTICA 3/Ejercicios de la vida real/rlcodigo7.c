#include <stdio.h>
int main () {

        bool isLoggedIn = true;
        bool isAdmin = false;
        int securityLevel;

        printf("Nivel de seguridad: \n");
        scanf("%d", &securityLevel);

        if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
                printf("Acceso concedido.\n");
        } else {
                printf("Acceso denegado.\n");
        }
return 0;
}
