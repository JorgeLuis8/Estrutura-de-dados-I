#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *vet,n,i,soma = 0,max = 0,min = 1000000;
    double media;
    float *normal;
    
    srand((unsigned)time(NULL));


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
	}
    media = (float) soma / n;
    printf("A soma dos valores do vetor eh %d\n",soma);
    printf("A media dos valores do vetor eh: ");
    printf("%.2f\n", media);

    for(i = 0; i<n;i++){
        if(vet[i] > max){
            max = vet[i];
        }
        if (vet[i] < min)
        {
            min = vet[i];
        }
        
    }
    printf("A maior posicao do vetor eh:  %d\n",max);
    printf("A menor posicao do vetor eh:  %d\n",min);

    normal = (float *) calloc(n,sizeof(float));

    for (i = 0; i < n; i++){
        normal[i] = (float) (vet[i]-min)/(max - min);

    }

    for (i = 0; i <n ; i++){
        printf("%.2f\n",normal[i]);
    }

    free(vet);
    free(normal);

    return 0;
}