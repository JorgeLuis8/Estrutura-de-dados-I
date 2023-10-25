#include "calculadora.h"
#include <stdio.h>

int soma(int a, int b){
    return a+b;
}

int subtracao(int a, int b){
    return a-b;
}

int multiplicacao(int a, int b){
    return a*b;
}

float divisao(float a, float b){
    return a/b;
}

int potencia(int base,int expoente){
    if (expoente == 0){
        return 1;
    }
    return base * potencia(base,expoente-1);
}