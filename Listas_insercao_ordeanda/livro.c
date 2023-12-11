#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

struct livro{
    char autor[100], titulo[50];
    int id, ano;
    struct livro *proximo;
};

Livro *criar_Livro(){
    return NULL;
}

Livro *inserir_ordenado(Livro *lista_livros){
    Livro *aux, *novo = malloc(sizeof(Livro));
    // printf("Autor:\n ");
    // scanf("%s",novo->autor);
    // printf("Titulo:\n ");
    // scanf("%s",novo->titulo);
    // printf("Ano:\n ");
    // scanf("%d",&novo->ano);
    printf("Id:\n");
    scanf("%d", &novo->id);
    /*Verifica se a lista é igual e null, se sim minha lista recebe o novo elemento que quero inserir*/
    if (lista_livros == NULL){
        lista_livros = novo;
    }
    else{

        aux = lista_livros;
        if (novo->id < aux->id){
            novo->proximo = aux; /* Aponta para o primeiro elemento da lista */
            lista_livros = novo;
        }
        else{
            while (aux->proximo && novo->id > aux->proximo->id){
                aux = aux->proximo; /*Percorre a lista procurando local de insercao*/
            }
            novo->proximo = aux->proximo; /*Aponta o novo elemento para o elemento anterior onde deve ser inserido*/
            aux->proximo = novo;
        }
    }

    return lista_livros;
}

void imprimir(Livro *lista_livros){
    Livro *aux = lista_livros;
    while (aux != NULL){
            // printf("%s\n",aux->autor);
            // printf("%s\n",aux->titulo);
            // printf("%d\n",aux->ano);
            printf("%d\n", aux->id);
            aux = aux->proximo;
        
    }
}