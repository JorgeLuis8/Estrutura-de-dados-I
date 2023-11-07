#include <stdio.h>
#include <stdlib.h>
#include "jogador.h"

struct jogador
{
    char nome[50];
    int jogos;
    int gols;
    int assistencias;
};

Jogador *atrubuir(int numjogador){
    Jogador *j =(Jogador*) malloc(numjogador* sizeof(Jogador));

    if (!j) return NULL;
    int i;
    for(i=0 ; i < numjogador ; i++){
        printf("Informe o nome do jogador: ");
        scanf("%s",j[i].nome);    
        
        printf("Informe a quantidade de jogos do jogador: ");
        scanf("%d",&j[i].jogos);    

        printf("Informe a quantidade de gols do jogador: ");
        scanf("%d",&j[i].gols);    

        printf("Informe a quantidade de assistencias do jogador: ");
        scanf("%d",&j[i].assistencias);
        }

    return j;
}

void imprimir(Jogador *j,int numjogador){
    int i;
    for(i =0; i < numjogador; i++){
        printf("O nome do jogador eh: %s\n ",j[i].nome);
        printf("O numero de jogos  do jogador eh: %d\n ",j[i].jogos);
        printf("O numero de gols do jogador eh: %d\n ",j[i].gols);
        printf("O numero de assistencia do jogador eh: %d\n ",j[i].assistencias);
    }
}

float soma(Jogador *j,int numjogador) {
    int i,sum = 0;
    for(i=0;i<numjogador;i++){
     sum = j[i].assistencias + j[i].gols + j[i].jogos;
}
    return sum;
}

void ehBom(Jogador *jogadores, int numJogadores) {
    float godmedia = 1.5;
    int i;

    for (i = 0; i < numJogadores; i++) {
        float media = (float)jogadores[i].gols / jogadores[i].jogos;
        printf("Jogador %d: ", i + 1);

        if (media > godmedia) {
            printf("É um bom jogador\n");
        } else {
            printf("É um péssimo jogador\n");
        }
    }
}

void liberar(Jogador *jogadores) {
    free(jogadores);
}