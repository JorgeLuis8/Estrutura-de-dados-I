#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct nodo Nodo;
typedef struct pilha Pilha;

Pilha* criar_pilha();
Nodo* criar_nodo(int valor);
void inserir_pilha(Pilha*p,int valor);
void imprimir_nodo(Pilha *p);
#endif
