/*Crie um algoritmo que recebe entradas inteiras do usuário até um momento que ele
digitar um valor X que servirá como parada. X = -1, lembrando que o valor de X não pode
ser contabilizado para nada (somatório, média, menor valor, maior valor...). Armazenar
todos os valores em um vetor alocado dinamicamente, neste caso, reflita sobre qual
função melhor se adequa para este problema. Ao final, o algoritmo deverá informar:
a. O valor do somatório de todos os números;
b. O valor da média de todos os números;
c. O menor e o maior números informados;
d. mostrar os valores contidos no vetor;

Ao final, lembre-se de liberar a memória utilizada. */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *pointer = NULL;
    int x, i , count = 0, soma = 0, menor = 1000000, maior = 0;

    while (1){
        printf("Informe um numero (para parar digite : -1): ");
        scanf("%d", &x);

        if (x == -1){
            break;
        }

        pointer = (int *)realloc(pointer, (count + 1) * sizeof(int));
        pointer[count] = x;

        count++;
        soma += x;
        if (x < menor){
            menor = x;
        }
        if (x > maior){
            maior = x;
        }
    }

  
        printf("Valores contidos no vetor: ");
        for (i = 0; i < count; i++){
            printf("%d ", pointer[i]);
        }
        printf("\n");

        printf("A soma dos valores eh: %d\n", soma);
        printf("A media dos valores eh: %.2f\n", (float)soma / count);
        printf("O menor numero eh: %d\n", menor);
        printf("O maior numero eh: %d\n", maior);
 

    free(pointer);
 

    return 0;
}
