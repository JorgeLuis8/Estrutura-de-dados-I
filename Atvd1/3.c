/*Escreva uma função recursiva que receba dois valores inteiros (x e y) e retorne o resultado de x^y 
para o método principal.*/

#include <stdio.h>

int potencia(int base, int expoente);

int main(){
    double base,expoente;
    int resultado;

    printf("Informe a base: ");
    scanf("%lf",&base);
    
    printf("Informe o expoente: ");
    scanf("%lf",&expoente);

    resultado = potencia(base, expoente);

    printf("%.2lf Elevado a %.2lf eh igual a %d ",base,expoente,resultado);


    

    return 0;
}

int potencia(int base,int expoente){
    if (expoente == 0){
        return 1;
    } 
    else{
        return base * potencia(base,expoente - 1);
    }
}
