#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

struct livro{
    char autor[100],titulo[50];
    int id,ano;
    struct livro *proximo;
};

Livro * criar_Livro(){
    return NULL;
}

Livro* inserir_ordenado(Livro *lista_livros){
    Livro *aux,*novo = malloc(sizeof(Livro));
    printf("Autor:\n ");
    scanf("%s",novo->autor);
    printf("Titulo:\n ");
    scanf("%s",novo->titulo);
    printf("Ano:\n ");
    scanf("%d",&novo->ano);
    printf("Id:\n");
    scanf("%d",&novo->id);
    novo->proximo = novo;
    
    return novo;
}

void imprimir(Livro *lista_livros){
    Livro *aux = lista_livros;

    while (aux!=NULL){{
        printf("%s\n",aux->autor);
        printf("%s\n",aux->titulo);
        printf("%d\n",aux->ano);
        printf("%d\n",aux->id);
        aux = aux->proximo;
    }
    
}
}