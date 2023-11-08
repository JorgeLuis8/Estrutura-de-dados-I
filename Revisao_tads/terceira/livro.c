#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

typedef struct{
    char titulo[50];
    char autor [50];
    int ano_lascamento;
    char *palavra_chave;

}Livro;

Livro *atribuir(int num){
    int i,j,qtd_palavras;
    Livro *l = (Livro*) malloc(num *sizeof(Livro));

    if(!l) return NULL;

    for(i=0; i<num; i++){
        printf("Informe o titulo:");
        scanf("%s",l[i].titulo);
        printf("\n");
        printf("Informe o nome do autor: ");
        scanf("%s",l[i].autor);
        printf("\n");
        printf("Informe o ano de publicacao: ");
        scanf("%s",l[i].ano_lascamento);
        printf("\n");
    }
    printf("Informe a quantidade de palavras chave: ");
    scanf("%d",qtd_palavras);
    l->palavra_chave = (char*) malloc(qtd_palavras * sizeof(char));

    for ( i = 0; i < qtd_palavras; i++){
        printf("Informe as palavras chaves: ");
        scanf("%s",l[i].palavra_chave);
    }
    
    
}

void imprimir(Livro *l,int num){
    int i;
    for(i=0;i<num;i++){
        printf("O titulo do livor eh: %s",l[i].titulo);
        printf("O nome do autor eh: %s",l[i].autor);
        printf("O ano de publicacao eh: %d",l[i].ano_lascamento);
        printf("As palavras chaves do livro sao: %s",l[i].palavra_chave);
}