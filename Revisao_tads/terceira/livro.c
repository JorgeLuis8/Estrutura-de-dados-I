#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

struct palavras
{
    char palavras[100];
};


struct livro{
    char titulo[50];
    char autor [50];
    int ano_publicacao;
    Palavras *palavra_chave;
    int Qtd_chaves;
};

Livro *atribuir (int QtdLivros) {
    int i, qtdChaves, j;
    Livro *l = (Livro*) malloc (QtdLivros * sizeof(Livro));

    for (i=0;i<QtdLivros;i++)
    {
        printf ("Qual o titulo do livro: ");
        scanf ("%s", l[i].titulo);
        printf ("Digite o nome do autor: ");
        scanf ("%s", l[i].autor);
        printf ("O ano de publicacao: ");
        scanf ("%d", &l[i].ano_publicacao);

        printf ("Quantas palavras chaves deseja cadastrar? ");
        scanf ("%d", &qtdChaves);

        l[i].palavra_chave = (Palavras*)malloc(qtdChaves * sizeof(Palavras));

        for (j=0;j<qtdChaves;j++) {
            printf ("Digite a palavra chave: ");
            scanf ("%s", l[i].palavra_chave[j].palavras);
            }
        l[i].Qtd_chaves = j;


    }
    return l;

}
void imprimir(struct livro *l, int num) {
    int i, j;
    for (i = 0; i < num; i++) {
        printf("O título do livro é: %s\n", l[i].titulo);
        printf("O autor do livro é: %s\n", l[i].autor);
        printf("O ano de publicação do livro é: %d\n", l[i].ano_publicacao);

        printf("As palavras-chave do livro sao:\n");
        for (j = 0; j < l[i].Qtd_chaves; j++) {
            printf("%s\n", l[i].palavra_chave[j].palavras);
        }
    }
}
