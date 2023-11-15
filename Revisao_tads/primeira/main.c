#include <stdio.h>
#include "jogador.h"

int main(){
     int numJogadores;
    printf("Quantos jogadores deseja cadastrar? ");
    scanf("%d", &numJogadores);

    Jogador *jogadores = atrubuir(numJogadores);

    if (jogadores) {
        imprimir(jogadores, numJogadores);
        printf("Soma dos pontos de todos os jogadores: %.2f\n", soma(jogadores, numJogadores));
        ehBom(jogadores, numJogadores);
        liberar(jogadores);
    } else {
        printf("Falha na alocação de memória.\n");
    }

    return 0;
}