#include <stdio.h>
#include <stdlib.h>
#include "circular.h"

struct livro
{
    int id;
    struct livro *proximo,*anterior;
};

Livro *criar_lista(){
    return NULL;
}

Livro *inserir_ciruclar(Livro *lista_livro){
    Livro *novo = (Livro*)malloc(sizeof(Livro));
    scanf("%d",&novo->id);
    if(lista_livro == NULL ){
        lista_livro = novo;
        novo->proximo = novo;
        novo->anterior = novo;
    }
    return lista_livro;
}
void imprimir_lista(Livro *l) {
    Livro *aux = l;
    do {
        printf("ID: %d\n", aux->id);
        printf("Próximo: ",aux->proximo);
        printf("\n");
        aux = aux->proximo;
    }while(aux != l);
}