#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogador.c"

int main(){

    Jogador *j = NULL;
    int opcao;
    int numjogadores;
    int qtd_jogadores = 0;

    do
    {
        printf("\nEscolha uma opcao:\n");
        printf("1. Adicionar jogador\n");
        printf("2. Imprimir jogadores\n");
        printf("3. Soma das estatisticas\n");
        printf("4. O jogador eh bom?\n");
        printf("5. Liberar memoria\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Informe o numero de jogadores: ");
            scanf("%d",&numjogadores);
            j = atrubuir(j,numjogadores,qtd_jogadores);
            qtd_jogadores+=numjogadores;
            break;
        case 2:
            imprimir(j,numjogadores);
            break;
        case 3:
            printf("A soma das estatisticas do jogador eh: %f",soma(j,numjogadores));
            break;
        case 4:
            ehBom(j,numjogadores);
            break;
        case 5:
            liberar(j);
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
