#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int x, int y){
    if (x == 0 || y ==0){
        return 0;
    }
    return x + multiplicacao(x,y-1);
}

int fatorial(int n){
    if (n == 0){
        return 1;
    }
    return n * fatorial(n-1);
}

int main(){
    int x =3,y= 5, fat = 5;

    fatorial(fat);
    printf("O fatorial de %d eh %d\n",fat,fatorial(fat));

    printf("O resultado da multiplicacao eh: %d\n",multiplicacao(x,y));
    return 0;
}