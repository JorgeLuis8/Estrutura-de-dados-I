#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct no{
	int info;
	struct no* prox;
};

typedef struct no No;
struct pilha{
	No* prim;
};


Pilha *criar_pilha(){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

void push(Pilha* p,int valor){
	No *n = (No*) malloc(sizeof(No*));
	n->info = valor;
	n->prox = p->prim;
	p->prim = n;
}

void imprimir(No* no){
   No* aux = no;
   
   while(aux != NULL){
   	printf("%d",aux->info);
   	aux = aux->prox;
   }
}
