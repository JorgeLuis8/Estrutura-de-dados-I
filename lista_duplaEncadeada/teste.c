#include <stdio.h>
#include <stdlib.h>
#include "teste.h"


struct livro
{   
    char nome[100],titulo[100];
    int id,ano;
    struct livro *prox,*ant;

};



Livro *criar_lista(){
    return NULL;
}

Livro *inserir_inicio(Livro *lista_livro){
    Livro *novo = (Livro *) malloc(sizeof(Livro));
    printf("Informe o id: ");
    scanf("%d",&novo->id);
    printf("Informe o nome do livro: ");
    scanf("%s",novo->nome);
    printf("Informe o titulo do livro: ");
    scanf("%s",novo->titulo);
    printf("Informe o ano de lancamento: ");
    scanf("%d",&novo->ano);
    novo->prox = lista_livro;
    novo->ant = NULL;
    if (lista_livro){
        lista_livro->ant = novo;
    }
    lista_livro = novo;

    return lista_livro;
}
Livro *inserir_final(Livro *lista_livro){
    Livro *novo = (Livro *) malloc(sizeof(Livro));
    printf("Informe o id: ");
    scanf("%d",&novo->id);
    printf("Informe o nome do livro: ");
    scanf("%s",novo->nome);
    printf("Informe o titulo do livro: ");
    scanf("%s",novo->titulo);
    printf("Informe o ano de lancamento: ");
    scanf("%d",&novo->ano);

    if(lista_livro == NULL){

    novo->prox = NULL;
    novo->ant = NULL;
    lista_livro = novo;
    }else{
        Livro *aux = lista_livro;
        for(aux; aux->prox != NULL;aux = aux->prox);
        aux->prox = novo;
        novo->ant = aux;
        
    }
    return lista_livro;
}
void imprimir_lista(Livro *lista_livro) {
    Livro *atual = lista_livro;
    while (atual != NULL) {
        printf("ID: %d\n", atual->id);
        printf("Nome: %s\n", atual->nome);
        printf("Título: %s\n", atual->titulo);
        printf("Ano de lançamento: %d\n", atual->ano);
        printf("\n");

        atual = atual->prox;
    }
}
