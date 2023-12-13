#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

struct livro{
	char titulo[100], autor[100];
	int ano, id;
	struct livro *prox;
};


Livro *criarLista(){
	return NULL;
}

Livro *inserirLivroListaCircular(Livro *lista_de_livros){

	Livro *novo = (Livro*) calloc(sizeof(Livro), 1);
	//preencher os dados do novo livro que serÃ¡ inserido na lista de livros
	printf("Autor: ");scanf("%s", novo->autor);
	printf("Titulo: ");scanf("%s", novo->titulo);
	printf("Ano: ");scanf("%d", &novo->ano);
	printf("ID: ");scanf("%d", &novo->id);

	//se for vazia
	if (lista_de_livros == NULL){
		novo->prox = novo;
	}
	else{
		Livro *aux = lista_de_livros;
		do{
			aux = aux->prox;
		}while(aux->prox != lista_de_livros);

		novo->prox = lista_de_livros;
		aux->prox = novo;
	}

	return novo;
}

void mostrarListaCirular(Livro *lista_de_livros) {
    if (lista_de_livros == NULL) {
        printf("A lista está vazia\n");
        return;
    }

    Livro *aux = lista_de_livros;
    do {
        printf("ID: %d\n", aux->id);
        aux = aux->prox;
    } while (aux != lista_de_livros);
}
