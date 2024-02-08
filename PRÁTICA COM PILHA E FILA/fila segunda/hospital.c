#include <stdio.h>
#include <stdlib.h>
#include "hospital.h"

struct paciente{
    int numeroIdentificacao;
};

struct No {
    Paciente paciente;
    struct No* prox;
};

struct fila {
    No* frente;
    No* fundo;
    int tam;
} ;

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

void enfileirarPaciente(Fila* fila, int numeroIdentificacao) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocacao\n");
        exit(1);
    }

    novo->paciente.numeroIdentificacao = numeroIdentificacao;
    novo->prox = NULL;

    if (filaVazia(fila)) {
        fila->frente = fila->fundo = novo;
    } else {
        fila->fundo->prox = novo;
        fila->fundo = novo;
    }

    fila->tam++;
}

Paciente desenfileirarPaciente(Fila* fila) {
    if (filaVazia(fila)) {
        printf("Fila vazia. Nenhum paciente para desenfileirar.\n");
        Paciente pacienteVazio = {-1}; // Retorna paciente com número de identificação -1
        return pacienteVazio;
    } else {
        No* nodoRemovido = fila->frente;
        fila->frente = fila->frente->prox;

        Paciente paciente = nodoRemovido->paciente;
        free(nodoRemovido);
        fila->tam--;

        return paciente;
    }
}

int obterNumeroPacientes(const Fila* fila) {
    return fila->tam;
}

int obterNumeroTotalPacientes(const Fila* filaPadrao, const Fila* filaPrioritaria) {
    return obterNumeroPacientes(filaPadrao) + obterNumeroPacientes(filaPrioritaria);
}

void atenderPacientes(Fila* filaPrioritaria, Fila* filaPadrao) {
    if (!filaVazia(filaPrioritaria)) {
        printf("Paciente %d atendido na fila prioritaria.\n", desenfileirarPaciente(filaPrioritaria).numeroIdentificacao);
    } else if (!filaVazia(filaPadrao)) {
        printf("Paciente %d atendido na fila padrao.\n", desenfileirarPaciente(filaPadrao).numeroIdentificacao);
    } else {
        printf("Nenhum paciente para atender.\n");
    }
}
