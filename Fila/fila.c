#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct no{
    int info;
    struct no* prox;
};
struct fila{
    No* inicio;
    No* final;
};

Fila *criar_fila(){
    Fila *f = (Fila*) malloc(sizeof(Fila*));
    f->inicio = NULL;
    f->final = NULL;
    return f;
}

void enqueue(Fila *f,int valor){
    No* novo = (No*) malloc(sizeof(No*));
    novo->info = valor;
    novo->prox = NULL;
    if(f->final != NULL){
        f->final->prox = novo;
    }else{
        f->inicio = novo;
    }
    f->final =novo;
}

void imprimir(Fila* f) {
    No* atual = f->inicio;

    while (atual != NULL) {
        printf("%d ", atual->info);
        atual = atual->prox;
    }

    printf("\n");
}

int dequeue(Fila* f){
    No* t;
	float v;
	if (f == NULL) { 
		printf("Fila vazia.\n");
		exit(1); 
	}
	t = f->inicio;
	v = t->info;
	f->inicio = t->prox;
	if (f->inicio == NULL)
		f->final = NULL;
	free(t);
	return v;
}

