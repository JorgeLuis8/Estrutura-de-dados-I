/*Escreva um algoritmo recursivo que escreva na tela a soma de todos os números inteiros positivos de K até 0.
 */
#include <stdio.h>
#include <stdlib.h>

int somaNum(int k){
   if (k == 0){
    return 0;
}
    return k + somaNum(k-1);
}

int main (){

    int num = 5;

    printf("%d",somaNum(num));

    return 0;
}