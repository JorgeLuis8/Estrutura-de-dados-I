#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct lista {
	float info;
	struct lista* prox;
};
typedef struct lista Lista;
struct pilha {
	Lista* prim;
};

Pilha* pilha_cria (void){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

void pilha_push (Pilha* p, float v){
	Lista* n = (Lista*) malloc(sizeof(Lista));
	n->info = v;
	n->prox = p->prim;
	p->prim = n;
}

void imprimir_nodo(Pilha *p){
	Lista *aux;
	while(aux!= NULL){
		printf("%.2f ",aux->info);
		aux = aux->prox;
	}
	printf("\n");
}



