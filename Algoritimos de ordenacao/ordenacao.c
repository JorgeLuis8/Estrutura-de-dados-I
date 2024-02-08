#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "ordenacao.h"

struct dados{
    int *num;
    int tamanho;
    int comparacoes;
    int trocas;
    clock_t inicio;
    clock_t fim;
};

void inicializa(Dados *v,int tamanho){
    v->num = (int*)malloc(tamanho * sizeof(int));
    v->tamanho = tamanho;
    v->comparacoes = 0;
    v->trocas = 0;
}

void preencher_radom(Dados *v){
    int i;
    srand(time(NULL));
    for (i = 0; i < v->tamanho; i++) {
        v->num[i] = rand() % 100000;
    }
}

void bubble_sort(Dados *num){
    int i,j,aux;
    for(i = 1 ; i<num->tamanho;k++){
        for(j = 0; j <)
    }
}