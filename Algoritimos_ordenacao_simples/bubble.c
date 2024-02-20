#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int vetor[],int tam){
	int i,j,aux;
	for(i= 0; i < tam; i++){
		for(j=0;j < (tam - 1);j++){
		
		if(vetor[j] > vetor[j+1]){
			aux = vetor[j];
			vetor[j] = vetor[j+1];
			vetor [j+1] = aux;
			}
		}
	}
}

void imprimir(int vet[],int tam){
	int i;
		for(i = 0; i< tam; i++){
		printf("%d \n",vet[i]);
	}
}
int main() {
	int i;

	int vet[10]={10,20,50,3,4,6,5,15,20,90};
	printf("Antes de ordenar\n");
	imprimir(vet,10);
	printf("Depois de ordenar\n");
	bubble_sort(vet,10);
	imprimir(vet,10);
	return 0;
}
