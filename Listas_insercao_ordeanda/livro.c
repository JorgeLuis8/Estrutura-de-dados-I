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
    Livro *novo = malloc(sizeof(Livro));
    if(novo){
        printf("Oi");
    }
}
