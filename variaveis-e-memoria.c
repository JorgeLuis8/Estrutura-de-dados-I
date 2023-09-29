#include <stdio.h>

int main(){
    int a = 10;
    int b , c;

    printf("&a = %p, a = %d\n",&a,a);
    printf("&a = %p, b = %d\n",&b,b);
    printf("&a = %p, c = %d\n",&c,c);

    printf("\n");
    b = 20;
    c = a + b;

    printf("&a = %p, a = %d\n",&a,a);
    printf("&a = %p, b = %d\n",&b,b);
    printf("&a = %p, c = %d\n",&c,c);

    return 0;
}