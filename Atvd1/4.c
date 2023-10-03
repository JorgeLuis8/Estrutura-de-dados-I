/*Escreva uma função recursiva que receba um valor inteiro x e o retorne invertido. Exemplo: se x = 
123, a função deve retornar 321. */

#include <stdio.h>

int inverte(int x){
    if(x < 10){
        return x;
    }else{
        printf("%d", x%10);
        return inverte(x/10);
    }
}

int main(){
    int x;
    scanf("%d", &x);
    printf("%d", inverte(x));
    return 0;
}

