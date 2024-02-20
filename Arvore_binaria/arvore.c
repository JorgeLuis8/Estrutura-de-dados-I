#include<stdlib.h>
#include<stdio.h>
#include "arvore.h"

struct arvore {
    int valor;
    struct arvoreBi *esq;
    struct aevoreBi *dir;
};

Arvore* abp_cria_vazia () {
    return NULL;
}

Arvore* abp_inserir (Arvore* arv, int num) {
    Arvore *novo = NULL;
    Arvore **busca = NULL;
    novo = (Arvore*) malloc(sizeof(Arvore));
    novo->valor = num;
    novo->esq = NULL;
    novo->dir = NULL;
    if(arv) {
        busca = &arv;
        while(*busca) {
            if(num < (*busca)->valor)
                busca = &((*busca)->esq);
            else if(num > (*busca)->valor)
                busca = &((*busca)->dir);
        }
        *busca = novo;
    } else
        arv = novo;
    return arv;
}

int abp_consultar (Arvore* arv, int num) {
    Arvore *busca = NULL;
    if(arv) {
        busca = arv;
        while(busca && num != busca->valor) {
            if(num < busca->valor)
                busca = busca->esq;
            else if(num > busca->valor)
                busca = busca->dir;
        }
    }
    return busca;
}

void abp_mostrar_tabulado (Arvore* arv, int nivel) {
    int i;
    if(arv) {
        abp_mostrar_tabulado(arv->esq, nivel + 1);
        for(i = 0; i < nivel; i++)
            printf("\t");
        printf("%d\n", arv->valor);
        abp_mostrar_tabulado(arv->dir, nivel + 1);
    }
}

void abp_mostrar_em_ordem (Arvore* arv) {
    abp_mostrar_tabulado(arv, 0);
}

void abp_mostrar_pre_ordem (Arvore* arv) {
    if(arv) {
        printf("%d\n", arv->valor);
        abp_mostrar_pre_ordem(arv->esq);
        abp_mostrar_pre_ordem(arv->dir);
    }
}

void abp_mostrar_pos_ordem (Arvore* arv) {
    if(arv) {
        abp_mostrar_pos_ordem(arv->esq);
        abp_mostrar_pos_ordem(arv->dir);
        printf("%d\n", arv->valor);
    }
}

Arvore* abp_remover (Arvore* arv, int num) {
    Arvore **busca = NULL;
    Arvore *remover = NULL;
    int temp;
    if(arv) {
        busca = &arv;
        while(*busca && num != (*busca)->valor) {
            if(num < (*busca)->valor)
                busca = &((*busca)->esq);
            else if(num > (*busca)->valor)
                busca = &((*busca)->dir);
        }
        if(*busca) {
            if((*busca)->esq && (*busca)->dir) {
                remover = (*busca)->esq;
                while(remover->dir)
                    remover = remover->dir;
                temp = remover->valor;
                remover->valor = (*busca)->valor;
                (*busca)->valor = temp;
                (*busca)->esq = abp_remover((*busca)->esq, num);
                remover = NULL;
            } else if((*busca)->esq || (*busca)->dir) {
                remover = *busca;
                if((*busca)->esq) *busca = (*busca)->esq;
                else *busca = (*busca)->dir;
            } else {
                remover = *busca;
                *busca = NULL;
            }
            free(remover);
        }
    }
    return arv;
}

Arvore* abp_desalocar (Arvore* arv) {
    if(arv) {
        abp_desalocar(arv->esq);
        abp_desalocar(arv->dir);
        free(arv);
    }
    return NULL;
}
