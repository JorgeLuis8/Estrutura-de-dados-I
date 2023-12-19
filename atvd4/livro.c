#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livro.h"

struct livro{
    int id,ano;
    char nome[100], autor[100];
    struct livro *proximo;
    int qtd;
};
Livro *criar_lista(){
    return NULL;
}
Livro *inserir_ordenado(Livro *livro) {
    int id;
    Livro *aux, *novo = (Livro *)malloc(sizeof(Livro));
    
    printf("Informe o id: ");
    scanf("%d", &id);
    // printf("Informe o nome do autor: ");
    // scanf("%s",novo->autor);
    // printf("Informe o nome do livro:");
    // scanf("%s", novo->nome);
    // printf("Informe ano de lancamento: ");
    // scanf("%s", novo->ano);
    novo->id = id;

    if (livro == NULL) {
        novo->proximo = novo;
        livro = novo;

    } else {
        aux = livro;

        if (id < aux->id) {
            novo->proximo = aux;
            while (aux->proximo != livro) {
                aux = aux->proximo;
            } 
            aux->proximo = novo;
            livro = novo;
         
        } else {
            while (aux->proximo != livro && id > aux->proximo->id) {
                aux = aux->proximo;
            }

            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    }
    return livro;
}

void imprimir_lista(Livro *l){
    Livro *aux = l;
    do{
        printf("ID: %d\n", aux->id);
        printf("\n");
        aux = aux->proximo;
    }while (aux != l);
}
int quantidadeLivrosListaCircular(Livro *livro) {
    Livro *aux = livro;
    int qtd = 0;

    if (livro != NULL) {
        do {
            qtd++;
            aux = aux->proximo;
        } while (aux != livro);
    }

    printf("Quantidade de livros: %d\n", qtd);
    return qtd;
}
int quantidadeLivrosPorAutorListaCircular(Livro *livro) {
    char autorBuscado[100]; 
    printf("Digite o nome do autor: ");
    scanf("%s", autorBuscado);  

    Livro *aux = livro;
    int qtd = 0;

    do{
        if(strcmp(aux->autor, autorBuscado) == 0) {
            qtd++;
        }
        aux = aux->proximo;

    }while(aux != livro);

    printf("Quantidade de livros do autor %s: %d\n", autorBuscado, qtd);
    return qtd;
}

Livro *removerLivroListaCircular(Livro *livro){
    int id;
    Livro *aux = livro;
    Livro* remover = NULL;

    if(aux == NULL){
        printf("Lista vazia");
    }else{
        printf("Informe o id a remover: ");
        scanf("%d",&id);
        if(id == aux->id){
            while (aux->proximo != livro){
                aux = aux->proximo;
            }
            aux->proximo = (livro)->proximo;
            free(livro);
            livro = aux->proximo;
        }else{
            while (aux->proximo != livro && id != aux->proximo->id){
                aux = aux->proximo;
            }
            if(aux->proximo != livro){
                remover = aux->proximo;
                aux->proximo = aux->proximo->proximo;
                free(remover);
            }
        }
    }
    return livro;
}

void liberarListaCircular(Livro *livro){
    Livro *aux = livro;
    do{
        free(aux);
        aux = aux->proximo;
    }while (aux != livro);
}