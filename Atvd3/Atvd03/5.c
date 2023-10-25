/*Escreva uma função recursiva que calcule os juros compostos de um valor. Para isso o programa deverá ler um valor inicial, o número de meses e a taxa de juros ao mês, e passar estes valores à função como parâmetros.*/
#include <stdio.h>
#include <stdlib.h>

float juroscomp(float Vinicial, float Nmeses, float Tjuros) {
    if (Nmeses == 0) {
        return Vinicial;
    }
    return juroscomp(Vinicial, Nmeses - 1, Tjuros) * (1 + Tjuros / 100);
}

int main() {
    float I = 100, M = 3, J = 4;

    printf("%.2f\n \n \n," ,juroscomp(I, M, J));

    return 0;
}