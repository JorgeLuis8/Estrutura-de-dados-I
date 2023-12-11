#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct livro{
    char autor[100], titulo[50];
    int id, ano;
    struct livro *proximo;
};

Livro *criar_Livro(){
    return NULL;
}

Livro *inserirCircular(Livro * l){    
    Livro *aux, *novo = malloc(sizeof(Livro));
    printf("Id:\n");
    scanf("%d", &novo->id);
    /*Verifica se a lista é igual e null, se sim minha lista recebe o novo elemento que quero inserir*/
    if (l == NULL){
        novo->proximo = novo;
        l = novo;
        printf("Inseriu");
    }else{
        Livro *aux = l;

        
        
    }

    return l;
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