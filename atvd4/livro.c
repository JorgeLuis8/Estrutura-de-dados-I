#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

struct livro{
    int id;
    char nome[100],titulo[100];
    struct livro *proximo;
};
Livro *criar_lista(){
    return NULL;
}


void imprimir_lista(Livro *l) {
    Livro *aux = l;
    do {
        printf("ID: %d\n", aux->id);
        printf("ID do proximo: %d\n", aux->proximo->id);
        printf("\n");
        aux = aux->proximo;
    }while(aux != l);
}