#include <stdio.h>
#include <stdlib.h>
#include "info.h"



struct lista{
    int info;
    struct lista *prox;
};

Lista *criarLista(){
    return NULL;
}

void inserirListaInicio(Lista **l,int i){
    Lista *novo = (Lista*) malloc(sizeof(Lista));
    if (novo){
        novo->info = i;
        novo->prox = *l;
        *l = novo;
    }
}

void imprimirLista(Lista *l){
    Lista *aux = l;
    while (aux != NULL){
        printf("%d\n",aux->info);
        aux = aux->prox;
    }
}
int qtdElemento(Lista *l){
    Lista *aux = l;
    int count = 0;
    while (aux != NULL){
        count++;
        aux = aux->prox;
    }
    return count;
}

void inserirFimlista(Lista **l,int i){
    Lista *aux,*novo = (Lista*) malloc(sizeof(Lista));

    if (novo){
        novo->info = i;
        novo->prox = NULL;
        if (*l == NULL){
            *l = novo;
        }else{
            aux = *l;

            while(aux->prox)
                aux = aux->prox;
            aux->prox = novo;
        }
        

        
    }else{
        printf("Erro de alocacao");
    }
    


    }
    

