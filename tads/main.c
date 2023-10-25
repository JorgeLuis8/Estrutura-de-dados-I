#include "calculadora.h"
#include <stdio.h>

int main(){

    int a,b;

    a =3;
    b=4;

    printf("Soma: %d\n Subtracao: %d\n Multiplicacao: %d\n Divisao: %f\n Potencia: %d\n",soma(a,b),subtracao(a,b),multiplicacao(a,b),divisao(a,b),potencia(a,b));

    printf("Teste");
    return 0;
}