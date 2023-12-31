#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node.h"

typedef struct no
{
    int valor;
    struct no *proximo;
};

typedef struct lista
{
    No *inicio;
    int tam;
};

void criar_lista(Lista *lista)
{
    lista->inicio = NULL;
    lista->tam = 0;
}

void inserir_inicio(Lista *lista, int valor)
{
    No *novo = (No *)malloc(sizeof(No));

    if (novo)
    {
        novo->valor = valor;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tam++;
    }
    else
    {
        printf("Erro de alocacao!");
    }
}

void inserir_final(Lista *lista, int valor)
{
    No *aux, *novo = (No *)malloc(sizeof(No));
    if (novo)
    {
        novo->valor = valor;
        novo->proximo = NULL;

        if (lista->inicio == NULL)
        {
            lista->inicio = novo;
        }
        else
        {
            aux = lista->inicio;
            while (aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
        lista->tam++;
    }
    else
    {
        printf("Errro de alocacao!");
    }
}
void inserir_ordenado(Lista *lista, int num)
{
    No *aux, *novo = (No *)malloc(sizeof(No));

    if (novo)
    {
        novo->valor = num;
        if (lista->inicio == NULL)
        {
            novo->proximo = NULL;
            lista->inicio = novo;
        }
        else if (novo->valor < lista->inicio->valor)
        {
            novo->proximo = lista->inicio;
            lista->inicio = novo;
        }
        else
        {
            aux = lista->inicio;
            while (aux->proximo && novo->valor > aux->proximo)
            {
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
        lista->tam++;
    }
}
void imprimir_lista(Lista lista)
{
    No *no = lista.inicio;
    printf("O tamanho da lista eh: %d\n", lista.tam);
    while (no)
    {
        printf("Os elementos da lista sao: %d\n", no->valor);
        no = no->proximo;
    }
}

void liberar_lista(Lista *lista)
{
    free(lista);
}

No *remover_elemento(Lista *lista, int valor)
{
    No *aux, *remover = NULL;
    if (lista->inicio)
    {
        if (lista->inicio->valor == valor)
        {
            remover = lista->inicio;
            lista->inicio = remover->proximo;
            lista->tam--;
        }
        else
        {
            aux = lista->inicio;
            while ((aux->proximo && aux->proximo->valor != valor))
            {
                aux = aux->proximo;
            }
            if (aux->proximo)
            {
                remover = aux->proximo;
                aux->proximo = remover->proximo;
                lista->tam--;
            }
        }
    }
    return remover;
}

No *buscar(Lista *lista,int valor){
    No *aux,*no = NULL;
    aux = lista->inicio;
    while (aux && aux->valor != valor){
    {
        aux = aux->proximo;
    }
    if(aux){
        no = aux;
    }
}
    return no; 
}