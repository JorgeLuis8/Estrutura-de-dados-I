#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *vet,n,i,soma,media,x;
    int max,min = 10000;
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
    
    for (i = 0; i< n; i++){
		soma = soma + vet[i];
	}
    
    for (i = 0; i <n ; i++){
		printf("%d\n ",vet[i]);
	}
	
	media = (float) soma/n;
	
	printf("%d",media);
	
	
	



    return 0;
}