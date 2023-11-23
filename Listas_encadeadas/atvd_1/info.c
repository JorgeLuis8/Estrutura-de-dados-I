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

Lista *inserirListaInicio(Lista *l,int i){
    Lista *novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
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

Lista *inserirFimlista(Lista *l,int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = NULL;

    if (l == NULL) { 
        return novo;
    } 
    else { 
        Lista* p; 
        for (p = l; p->prox != NULL; p = p->prox);
        p->prox = novo; 
        return l;
    }

    }
    
Lista *inseirOrdenado(Lista *l,int i){
    Lista *novo = (Lista*) malloc(sizeof(Lista));
    int j;
    for(j=0 ; novo!= NULL;j++){
        if (i[i] <= n[i]){
            /* code */
        }
        
    }
    
}
