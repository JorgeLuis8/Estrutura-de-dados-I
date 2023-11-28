#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node.h"

typedef struct lista{
    int valor;
    struct lista *proximo;
};

void inserirInicio(Lista **lista, int valor){
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if (novo){
        novo->valor = valor;
        novo->proximo = *lista;
        *lista = novo;
    }
    else{
        printf("Erro de alocacao");
    }
}

void inserirFinal(Lista **lista, int num){
    Lista *aux, *novo = (Lista *)malloc(sizeof(Lista));
    if (novo){
        novo->valor = num;
        novo->proximo = NULL;
        if (*lista == NULL){
            *lista = novo;
        }
        else{
            aux = *lista;
        }
    }
    else{
        printf("Erro de alocacao");
    }
}
