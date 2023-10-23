/*Escreva uma função recursiva que calcule a soma de todos os números compreendidos entre os valores A e B passados por parâmetro*/
#include <stdio.h>
#include <stdlib.h>

int somaIntervalo(int a,int b){
    if (a == b){
        return a;
    }
    return a + somaIntervalo(a + 1,b);
}

int main (){
    int a = 3;
    int b =7;

    printf("%d",somaIntervalo(a,b));
    return 0;
}