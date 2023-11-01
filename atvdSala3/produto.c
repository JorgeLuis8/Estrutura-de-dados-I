#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

struct produto
{
    int id;
    char nome;
    float valor;
};

Produto *cadastrar(){
    Produto *p = (Produto*)malloc(sizeof(Produto));

    if(!p){
        return NULL;
    }

    scanf("%d",&p->id);
    scanf("%f",&p->valor);
    scanf("%s",p->nome, stdin);

    return p;
   
}

void print_produto(Produto *p){
    printf("%d\n",p->id);
    printf("%f\n",p->valor);
    printf("%s\n",p->nome);
}

void alterar(Produto *p){
    scanf("%d",&p->id);
    scanf("%f",&p->valor);
    scanf("%s",p->nome, stdin);
}