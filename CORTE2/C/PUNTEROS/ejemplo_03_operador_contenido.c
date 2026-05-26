#include <stdio.h>

int main(void) {
    int x = 25;
    int *p = &x;
    
    printf("x = %d\n", x);
    printf("*p = %p\n", (void *)&x);
    
    *p = 99;
    
    printf("x despues = %d\n", x);
    
    return 0;
}
