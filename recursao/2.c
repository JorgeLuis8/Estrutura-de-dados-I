/*2. Crie um programa que tenha uma função recursiva que calcule e retorne o fatorial de um número inteiro N.
 */

#include <stdio.h>

int fatorial(int n){
    if (n == 1) return 1;

    return n * fatorial(n-1);
    
}


int main(){

    int n = 5;
    printf("%d", fatorial(n));
    return 0;
}