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
        scanf ("%d",&l[i].Qtd_chaves);
        qtdChaves = l[i].Qtd_chaves;

        l[i].palavra_chave = (Palavras*)malloc(qtdChaves * sizeof(Palavras));

        for (j=0;j<qtdChaves;j++) {
            printf ("Digite a palavra chave: ");
            scanf ("%s", l[i].palavra_chave[j].palavras);
            }


    }
    return l;

}
void imprimir(struct livro *l, int num) {
    int i, j;
    for (i = 0; i < num; i++) {
        printf("O titulo do livro eh: %s\n", l[i].titulo);
        printf("O autor do livro eh: %s\n", l[i].autor);
        printf("O ano de publicacao do livro eh: %d\n", l[i].ano_publicacao);

        printf("As palavras-chave do livro sao:\n");
        for (j = 0; j < l[i].Qtd_chaves; j++) {
            printf("%s\n", l[i].palavra_chave[j].palavras);
        }
    }
}
void adicionarPalavra(Livro * l,int num){
    int i,qtd_palavras,j;
    char Ntitulo[50];
    for ( i = 0; i < num; i++){
        printf("Informe o titulo do livro: ");
        scanf("%s",Ntitulo);
        if (strcmp(Ntitulo, l[i].titulo) == 0){
            printf("Informe a quantidade de palavras chaves: ");
            scanf("%d",&qtd_palavras);
            l[i].palavra_chave = realloc(l[i].palavra_chave, (l[i].Qtd_chaves + qtd_palavras) * sizeof(Palavras));
            for (j = 0; j < qtd_palavras; j++){
                printf("informe as novas plavras chaves: ");
                scanf ("%s", l[i].palavra_chave[j].palavras);
                }
        }else{
            printf("Titulo inexistente!\n");
        }
        
        
    }
    

}
