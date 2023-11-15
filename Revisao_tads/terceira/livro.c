#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

struct palavras{
    char palavras[100];
};

struct livro{
    char titulo[50];
    char autor[50];
    int ano_publicacao;
    Palavras *palavra_chave;
    int Qtd_chaves;
};

Livro *atribuir(Livro * l ,int num,int qtd_livros){
    int i, qtdChaves, j;
    l = (Livro *) realloc(l,num * sizeof(Livro));

    for (i = qtd_livros; i < num + qtd_livros; i++){
        printf("Qual o titulo do livro: ");
        scanf("%s", l[i].titulo);
        printf("Digite o nome do autor: ");
        scanf("%s", l[i].autor);
        printf("O ano de publicacao: ");
        scanf("%d", &l[i].ano_publicacao);

        printf("Quantas palavras chaves deseja cadastrar? ");
        scanf("%d", &l[i].Qtd_chaves);
        qtdChaves = l[i].Qtd_chaves;

        l[i].palavra_chave = (Palavras *)malloc(qtdChaves * sizeof(Palavras));

        for (j = 0; j < qtdChaves; j++){
            printf("Digite a palavra chave: ");
            scanf("%s", l[i].palavra_chave[j].palavras);
        }
    }
    return l;
}
void imprimir(struct livro *l, int num){
    int i, j;
    for (i = 0; i < num; i++){
        printf("O titulo do livro eh: %s\n", l[i].titulo);
        printf("O autor do livro eh: %s\n", l[i].autor);
        printf("O ano de publicacao do livro eh: %d\n", l[i].ano_publicacao);

        printf("As palavras-chave do livro sao:\n");
        for (j = 0; j < l[i].Qtd_chaves; j++){
            printf("%s\n", l[i].palavra_chave[j].palavras);
        }
    }
}
void adicionarPalavra(Livro *l, int num){
    int i, qtd_palavras, j;
    char Ntitulo[50];
    for (i = 0; i < num; i++){
        printf("Informe o titulo do livro: ");
        scanf("%s", Ntitulo);
        if (strcmp(Ntitulo, l[i].titulo) == 0){
            printf("Informe a quantidade de palavras chaves: ");
            scanf("%d", &qtd_palavras);
            l[i].palavra_chave = (Palavras *)realloc(l[i].palavra_chave, (l[i].Qtd_chaves + qtd_palavras) * sizeof(Palavras));
            if (!l[i].palavra_chave)
                printf("Erro de alocacao");
            for (j = l[i].Qtd_chaves; j < l[i].Qtd_chaves + qtd_palavras; j++){
                printf("Informe a nova palavra chave: ");
                scanf("%s", l[i].palavra_chave[j].palavras);
            }
            l[i].Qtd_chaves += qtd_palavras;
        }
        else{
            printf("Titulo inexistente!\n");
        }
    }
}
void buscarPalavra(Livro *l, int num){
    int i, j, flag = 0;
    char pchave[50];

    printf("Informe a palavra-chave que deseja buscar: ");
    scanf("%s", pchave);

    for (i = 0; i < num; i++){
        for (j = 0; j < l[i].Qtd_chaves; j++)
        {
            if (strcmp(pchave, l[i].palavra_chave[j].palavras) == 0)
            {
                printf("A palavra-chave '%s' existe no livro '%s'\n", pchave, l[i].titulo);
                flag = 1;
                break;
            }
        }
    }
    if (!flag){
        printf("A palavra-chave '%s' nao existe em nenhum livro\n", pchave);
    }
}

void liberar(Livro *l)
{
    free(l);
}

void buscarAutor(Livro *l, int num){
    int i;
    char autorBusca[50];
    int flag = 0;

    printf("Informe o autor que deseja buscar: ");
    scanf("%s", autorBusca);


    for (i = 0; i < num; i++){
        if (strcmp(autorBusca, l[i].autor) == 0){
            flag = 1;
            printf("Livro do autor '%s': %s\n", autorBusca, l[i].titulo);
        }
    }

    if (!flag){
        printf("Nenhum livro encontrado para o autor '%s'\n", autorBusca);
    }
}

void remover(Livro *livros, int num) {
    int i, j,k;
    char palavra[100];

    printf("Informe a palavra-chave que deseja remover: ");
    scanf("%s", palavra);

    for (i = 0; i < num; i++) {
        for (j = 0; j < livros[i].Qtd_chaves; j++) {
            if (strcmp(palavra, livros[i].palavra_chave[j].palavras) == 0) {
                for (k = j; k < livros[i].Qtd_chaves - 1; k++) {
                    strcpy(livros[i].palavra_chave[k].palavras, livros[i].palavra_chave[k + 1].palavras);
                }
                livros[i].Qtd_chaves--;
                livros[i].palavra_chave = (Palavras *)realloc(livros[i].palavra_chave, livros[i].Qtd_chaves * sizeof(Palavras));

                printf("Palavra-chave '%s' removida do livro '%s'\n", palavra, livros[i].titulo);
                return;
            }
        }
    }

    printf("Palavra-chave '%s' não encontrada em nenhum livro\n", palavra);
}