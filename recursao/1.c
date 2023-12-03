/* Crie um programa que tenha uma função recursiva que receba um número inteiro positivo N e calcula e
apresente o somatório dos números de 1 a N. */
#include <stdio.h>


int somaNum(int n){
    if( n == 1) return n;

    return n + somaNum(n-1);
}


int main(){
    int n = 3;
    printf("%d",somaNum(n));
    return 0;
}