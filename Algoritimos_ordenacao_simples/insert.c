#include <stdio.h>
#include <stdlib.h>

void bubble(int vetor[],int tam){
	int i,j,aux;
	
	for(i = 0;i< tam; i++){
		for(j =0; j< (tam -1);j++){
			if(vetor[j]< vetor[j-1]){
				aux = vetor[j];
				vetor[j] = vetor[j-1];
				vetor[j-1] = aux;
			}
		}
	}
}

void insert(int vetor[],int tam){
	int aux,proximo,i;
	
	for(i = 1;i<tam;i++){
		proximo =i;
		while(proximo!= 0 && vetor[proximo]< vetor[proximo -1]){
			aux = vetor[proximo];
			vetor[proximo] = vetor[proximo -1];
			vetor[proximo -1] = aux;
			proximo --;
		}
	}
}

void select(int vetor[],int tam){
	int i,j,troca,menor;
	for(i = 0; i< tam-1;i++){
		menor = i;
		
		for(j = i+1; j<tam;j++){
			if(vetor[j]<vetor[menor]){
				menor =j;
			}
		
		
		}
			if(i!= menor){
				troca = vetor[i];
				vetor[i] = vetor[menor];
				vetor[menor] = troca;
			}
	}
}
void quick_sort(int vetor[], int tam){
    int i, j, grupo, troca;

    //Critério de parada da recursividade!
    if(tam < 2){
        return; //sai da função
    }else{
    	grupo = vetor[tam / 2];
    }

    //Fazendo um loop único se comportar como dois
    //Veja que estamos utilizando tanto a variável 'i'
    //quanto a variável 'j'.
    //Veja que não temos critério de parada aqui...
    for(i = 0, j = tam - 1;; i++, j--){

    	//Fazemos a movimentação dos elementos no vetor
        while(vetor[i] < grupo){
            i++;
        }

        //Fazemos a movimentação dos elementos no vetor
        while(grupo < vetor[j]){
            j--;
        }
        //Critério de parada do loop
        if(i >= j){
            break;
        }else{
        	//Onde ocorre as trocas
			troca = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = troca;
        }
    }
    //Usando recursividade para ordenar os grupos
    quick_sort(vetor, i);
    quick_sort(vetor + i, tam - i);
}

void imprimir_i(int vet[],int tam){
	int i;
		for(i = 0; i< tam; i++){
		printf("%d \n",vet[i]);
	}
}
int main(){
	int vet[10]={10,20,50,3,4,6,5,15,20,90};
	printf("Antes de ordenar\n");
	imprimir_i(vet,10);
	//insert(vet,10);
	//bubble(vet,10);
	quick_sort(vet,10);
	//select(vet,10);
	printf("Depois de ordenar\n");
	imprimir_i(vet,10);
	return  0;
}
