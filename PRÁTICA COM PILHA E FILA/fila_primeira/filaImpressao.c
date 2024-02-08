#include <stdio.h>
#include <stdlib.h>
#include "filaimpressao.h"

struct no {
    int numeroIdentificacao;
    struct no* prox;
};
 struct fila {
    No* frente;
    No* fundo;
    int tam;
};

Fila* cria_fila() {
    Fila* f = (Fila*)malloc(sizeof(Fila));
    if (f == NULL) {
        printf("Erro de alocacao\n");
        exit(1);
    }
    f->frente = f->fundo = NULL;
    f->tam = 0;
    return f;
}

int filaVazia(const Fila* fila) {
    return fila->frente == NULL;
}

void enfileirarDocumento(Fila* fila, int numeroIdentificacao) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocacao\n");
        exit(1);
    }

    novo->numeroIdentificacao = numeroIdentificacao;
    novo->prox = NULL;

    if (filaVazia(fila)) {
        fila->frente = fila->fundo = novo;
    } else {
        fila->fundo->prox = novo;
        fila->fundo = novo;
    }

    fila->tam++;
}

void imprimirDocumento(Fila* fila) {
    if (filaVazia(fila)) {
        printf("Fila de impressao vazia. Nenhum documento para imprimir.\n");
    } else {
        No* nodoRemovido = fila->frente;
        fila->frente = fila->frente->prox;

        printf("Documento %d foi impresso.\n", nodoRemovido->numeroIdentificacao);

        free(nodoRemovido);
        fila->tam--;
    }
}

int obterNumeroDocumentos(Fila* fila) {
    return fila->tam;
}

void liberarFila(Fila* fila) {
    while (!filaVazia(fila)) {
        No* nodoRemovido = fila->frente;
        fila->frente = fila->frente->prox;
        free(nodoRemovido);
        fila->tam--;
    }
    free(fila);
}


