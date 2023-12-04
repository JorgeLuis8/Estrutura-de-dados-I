#include <stdio.h>
#include "livro.h"
#include <stdlib.h>
#include <string.h>

struct livro{
    char titulo[100];
    char autor[50];
    int ano;
    int id;
    struct livro* next;
};

Livro *criar_livros () {
    return NULL;
}

Livro *inserir_livros(Livro *l, char *titulo, char *autor, int ano, int id) {

    Livro *novo = (Livro*)malloc(sizeof(Livro));
    if (novo != NULL) {
        strcpy(novo->titulo, titulo);
        strcpy(novo->autor, autor);
        novo->ano = ano;
        novo->id = id;

        if (l == NULL || id < l->id) {
            novo->next = l;
            return novo;
        }

        Livro *ante = NULL;
        Livro *atual = l;

        while (atual != NULL && id > atual->id) {
            ante = atual;
            atual = atual->next;
        }

        ante->next = novo;
        novo->next = atual;
    }

    return l;
}

void imprimir_livros(Livro *l, char *autor) {
    printf("Lista de Livros:\n");
    Livro *atual = l;
    int aux = 0;

    while (atual != NULL) {
        if (strcmp(atual->autor, autor) == 0) {
            printf("ID: %d\n", atual->id);
            printf("Titulo: %s\n", atual->titulo);
            printf("Autor: %s\n", atual->autor);
            printf("Ano: %d\n", atual->ano);
            printf("\n");
            aux = 1;
        }
        atual = atual->next;
    }

    if (aux == 0) {
        printf("Nao foi encontrado nenhum livro\n");
    }
}

void atualizar_ano_publicacao(Livro *l, int id, int novo_ano)
{
    Livro *atual = l;

    while (atual != NULL && atual->id != id)
    {
        atual = atual->next;
    }

    if (atual != NULL)
    {
        atual->ano = novo_ano;
        printf("Ano de publicação do Livro com ID %d atualizado para %d.\n", id, novo_ano);
    }
    else
    {
        printf("Livro com ID %d não encontrado.\n", id);
    }
}


void quantidade_livros_por_autor(Livro *l)
{
    int i;
    if (l == NULL)
    {
        printf("Lista vazia.\n");
        return;
    }

    char autores[50][50];
    int quantidades[50] = {0};

    // Initialize the autores array
    for (i = 0; i < 50; i++)
    {
        autores[i][0] = '\0';
    }

    Livro *atual = l;

    while (atual != NULL)
    {
        for (i = 0; i < 50; i++)
        {
            if (strcmp(autores[i], atual->autor) == 0)
            {
                quantidades[i]++;
                break;
            }
            else if (autores[i][0] == '\0')
            {
                strcpy(autores[i], atual->autor);
                quantidades[i]++;
                break;
            }
        }

        atual = atual->next;
    }

    for (i = 0; i < 50 && autores[i][0] != '\0'; i++)
    {
        printf("Autor: %s - Quantidade de Livros: %d\n", autores[i], quantidades[i]);
    }
}


Livro *remover_livro(Livro *l, int id){
    Livro *atual = l;
    Livro *anterior = NULL;

    while (atual != NULL && atual->id != id){
        anterior = atual;
        atual = atual->next;
    }

    if (atual != NULL){

        if (anterior == NULL){
            l = atual->next; 
        }
        else{
            anterior->next = atual->next; 
        }

        free(atual); 
        printf("Livro com ID %d removido.\n", id);
    }
    else
    {
        printf("Livro com ID %d não encontrado.\n", id);
    }

    return l; 
}