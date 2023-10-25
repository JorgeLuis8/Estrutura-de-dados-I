#include <stdio.h>
#include <stdlib.h>

int buscavet(int a[],int tamanho,int chave){
    int i;
    for(i = 0; i < tamanho; i++){
        if(a[i] == chave){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[] = {2,3,4,5,6,7,5,7};
    int tam = 8;
    int num = 3;
    printf(" O numero se encontra na posicao: %d do vetor\n",buscavet(a,tam,5));
}
