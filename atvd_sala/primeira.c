#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *vet,n,i,soma = 0,media = 0;
    srand(time(NULL));

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (int *) malloc(n*sizeof(int));

  if (!vet)
    {
        printf("Memory error");
        exit(1);
    }

    for (i = 0; i<n; i++)
    {
        vet[i] = rand()%n;
    }
    
    for (i = 0; i <n ; i++){
		printf("%d\n",vet[i]);
	}
    for (i = 0; i <n ; i++){
		soma = soma + vet[i];
        media = (float) soma / n;
	}

    printf("A media dos valores do vetor eh: ");
    printf("%d\n", media);



    return 0;
}