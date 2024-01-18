#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct nodo{
	int info;
	struct nodo *prox;
};

struct pilha {
	Nodo *topo;
	Nodo *base;
};

// Funcao que cria uma pilha.
Pilha* criar_pilha() {
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	if(p) {
		p->base = NULL;
		p->topo = NULL;
	}
	return p;
}

// Funcao que cria um nodo de uma pilha.
Nodo* criar_nodo(int valor) {
	Nodo *novo = (Nodo*) malloc(sizeof(Nodo));
	if(novo) {
		novo->info = valor;
		novo->prox = NULL;
	}
	return novo;
}

// Funcao que insere um valor inteiro no topo da pilha.
void inserir_pilha(Pilha*p, int valor) {
	Nodo *novo = criar_nodo(valor);
	// Se a pilha nao possuir nenhum elemento, atribui o novo nodo ao topo da pilha e a base.
	if(p->topo == NULL) {
		p->topo = novo;
		p->base = novo;
	// Caso contrario atribui o novo nodo ao proximo elemento do topo e atualiza o topo da pilha.
	} else {
		p->topo->prox = novo;
		p->topo = p->topo->prox;
	}
}


// Funcao que imprime uma pilha percorrendo da base ate o topo.
void imprimir_nodo(Pilha *p){
	Nodo *aux = NULL;
	if(p->base) {
		// Ponteiro aux recebe o proximo elemento da base e imprime-se o elemento da base
		aux = p->base->prox;
		printf("%d", p->base->info);
		// Enquanto aux nao for nulo, imprime o valor do nodo aux e passa para o proximo elemento na pilha
		while(aux){
			printf(" %d", aux->info);
			aux = aux->prox;
		}
	}
	printf("\n");
}
