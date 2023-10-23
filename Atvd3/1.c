/*Crie uma função recursiva que calcule a exponenciação de um valor b por um expoente p sem usar o operador de exponenciação.*/



#include <stdio.h>
#include <stdlib.h>

int expoenciacao(int base, int expoente){
    if (expoente == 0){
        return 1;
    }
    return base * expoenciacao(base,expoente-1);
}

int main (){
    int expo,base=2,expoente=3;
    expo = expoenciacao(base,expoente);
    printf("%d elevado a %d eh = %d ",base,expoente,expo);
    return 0;
}