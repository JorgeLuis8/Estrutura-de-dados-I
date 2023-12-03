#include <stdio.h>
#include <stdlib.h>


int potencia(int base,int expoente){
    if (expoente == 0){
        return 1;
    }
    return base * potencia(base,expoente -1);
}

int main(){
    printf("%d",potencia(2,7));
    return 0;
} 