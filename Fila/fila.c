#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// Definição da estrutura de um nó da fila
struct no {
    int info;           // Valor armazenado no nó
    struct no* prox;    // Ponteiro para o próximo nó na fila
};

// Definição da estrutura da fila
struct fila {
    No* inicio;         // Ponteiro para o início da fila
    No* final;          // Ponteiro para o final da fila
};

// Função para criar uma nova fila
Fila *criar_fila() {
    Fila *f = (Fila*) malloc(sizeof(Fila));  // Aloca memória para a fila
    f->inicio = NULL;                        // Inicializa o início como NULL
    f->final = NULL;                         // Inicializa o final como NULL
    return f;                               // Retorna a fila criada
}

// Função para adicionar um elemento ao final da fila (enqueue)
void enqueue(Fila *f, int valor) {
    No* novo = (No*) malloc(sizeof(No));    // Aloca memória para um novo nó
    novo->info = valor;                      // Atribui o valor fornecido ao nó
    novo->prox = NULL;                       // O próximo nó é inicializado como NULL

    // Verifica se a fila não está vazia
    if (f->final != NULL) {
        f->final->prox = novo;               // Conecta o novo nó ao final da fila
    } else {
        f->inicio = novo;                    // Se a fila está vazia, o novo nó torna-se o início
    }

    f->final = novo;                         // Atualiza o ponteiro final para o novo nó
}

// Função para imprimir os elementos da fila
void imprimir(Fila* f) {
    No* atual = f->inicio;                   // Inicializa um ponteiro para percorrer a fila

    // Percorre a fila e imprime os valores dos nós
    while (atual != NULL) {
        printf("%d ", atual->info);         // Imprime o valor do nó atual
        atual = atual->prox;                // Move para o próximo nó na fila
    }

    printf("\n");                           // Imprime uma nova linha ao final
}

// Função para remover e retornar o elemento do início da fila (dequeue)
int dequeue(Fila* f) {
    No* t;
    float v;

    // Verifica se a fila está vazia
    if (f == NULL || f->inicio == NULL) {
        printf("Fila vazia.\n");
        exit(1);
    }

    t = f->inicio;                          // Obtém o nó no início da fila
    v = t->info;                            // Armazena o valor do nó a ser removido
    f->inicio = t->prox;                    // Atualiza o ponteiro de início para o próximo nó

    // Se o nó removido era o último na fila, atualiza o ponteiro final para NULL
    if (f->inicio == NULL) {
        f->final = NULL;
    }

    free(t);                                // Libera a memória alocada para o nó removido
    return v;                               // Retorna o valor do nó removido
}
