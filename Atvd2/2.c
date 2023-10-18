/*. Crie um algoritmo que recebe entradas inteiras do usuário até um momento que ele
digitar um valor X que servirá como parada. X = -1, lembrando que o valor de X não pode
ser contabilizado para nada (somatório, média, menor valor, maior valor...). Armazenar
todos os valores em um vetor alocado dinamicamente, neste caso, reflita sobre qual
função melhor se adequa para este problema. Ao final, o algoritmo deverá informar:
a. O valor do somatório de todos os números;
b. O valor da média de todos os números;
c. O menor e o maior números informados;
d. mostrar os valores contidos no vetor;
Ao final, lembre-se de liberar a memória utilizada.*/


#include <stdio.h>
#include <stdlib.h>

int main(){

    int x,count=0,i;
    int *pointer;
    while (1){
        if (x == -1){
            break;
        }
    
        scanf("%d",&x);
        
        pointer = (int*) malloc(count*sizeof(int));

        count++;
    }
    
    for(i = 0; i < count; i++){
        pointer[i] = x;
    }

    for (i = 0; i < count; i++){
        printf("%d\n",pointer[i]);
    }
    printf("%d",count);

    return 0;
}