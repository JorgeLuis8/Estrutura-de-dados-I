#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *vet,n,i;
    srand(time(NULL));

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (int *) malloc(sizeof(int) * n);

    for(i = 0; i < n; i++){
        vet[i] = rand() % 100;
    }

    for (i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }


    
    return 0;
}