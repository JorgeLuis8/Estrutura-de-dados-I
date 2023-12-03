#include "livro.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro{
    char titulo[100];
    char autor[50];
    int ano;
    int id;
    struct livro *prox;
};

Livro *criar_lista(){
    return NULL;
}

Livro *inserir_livro_ordenado(Livro *l, char *titulo, char *autor, int ano, int id){
    Livro *novo = (Livro *)malloc(sizeof(Livro));

    if (novo){
        strcpy(novo->titulo, titulo);
        strcpy(novo->autor, autor);
        novo->ano = ano;
        novo->id = id;
        novo->prox = NULL; 
        if (l == NULL || id < l->id){
            novo->prox = l; 
            return novo;   
        }
        else{
            Livro *atual = l;
            Livro *anterior = NULL;

            while (atual != NULL && id >= atual->id){
                anterior = atual;
                atual = atual->prox;
            }

            anterior->prox = novo;
            novo->prox = atual;

            return l;
        }
    }
    else{
        printf("Erro de alocação de memória!");
        return l;
    }
}

Livro *remover_livro(Livro *l, int id)
{
    Livro *atual = l;
    Livro *anterior = NULL;

    // Procura o livro com o ID fornecido na lista
    while (atual != NULL && atual->id != id)
    {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual != NULL)
    {
        // O livro com o ID foi encontrado

        if (anterior == NULL)
        {
            // Se o livro a ser removido é o primeiro na lista
            l = atual->prox; // Atualiza o início da lista
        }
        else
        {
            // Se o livro a ser removido não é o primeiro na lista
            anterior->prox = atual->prox; // Remove o livro da lista
        }

        free(atual); // Libera a memória do livro removido
        printf("Livro com ID %d removido.\n", id);
    }
    else
    {
        printf("Livro com ID %d não encontrado.\n", id);
    }

    return l; // Retorna o início da lista (pode ter sido atualizado ou não)
}
Livro *listar_livros_por_autor(Livro *l, char *autor)
{
    Livro *lista_autor = NULL; // Lista para armazenar os livros do autor especificado

    // Percorre a lista original
    while (l != NULL)
    {
        // Verifica se o autor do livro atual é igual ao autor especificado
        if (strcmp(l->autor, autor) == 0)
        {
            // Encontrou um livro do autor especificado, insere na lista do autor
            lista_autor = inserir_livro_ordenado(lista_autor, l->titulo, l->autor, l->ano, l->id);
        }

        l = l->prox; // Move para o próximo livro na lista original
    }

    if (lista_autor == NULL)
    {
        printf("Nenhum livro encontrado para o autor %s.\n", autor);
    }

    return lista_autor; // Retorna a lista de livros do autor
}

void atualizar_ano_publicacao(Livro *l, int id, int novo_ano)
{
    Livro *atual = l;

    // Procura o livro com o ID fornecido na lista
    while (atual != NULL && atual->id != id)
    {
        atual = atual->prox;
    }

    if (atual != NULL)
    {
        // O livro com o ID foi encontrado, atualiza o ano de publicação
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
    if (l == NULL)
    {
        printf("Lista vazia.\n");
        return;
    }

    // Cria um array para armazenar a quantidade de livros por autor
    char autores[50][50];      // Supõe-se que não haverá mais de 50 autores diferentes
    int quantidades[50] = {0}; // Inicializa todas as quantidades como zero

    Livro *atual = l;

    // Percorre a lista
    while (atual != NULL)
    {
        // Procura o autor na lista de autores
        int i;
        for (i = 0; i < 50; i++)
        {
            if (strcmp(autores[i], atual->autor) == 0)
            {
                // Autor encontrado, incrementa a quantidade
                quantidades[i]++;
                break;
            }
            else if (autores[i][0] == '\0')
            {
                // Fim da lista de autores, adiciona o autor e incrementa a quantidade
                strcpy(autores[i], atual->autor);
                quantidades[i]++;
                break;
            }
        }

        atual = atual->prox;
    }

    // Exibe a quantidade de livros por autor
    for (int i = 0; i < 50 && autores[i][0] != '\0'; i++)
    {
        printf("Autor: %s - Quantidade de Livros: %d\n", autores[i], quantidades[i]);
    }
}