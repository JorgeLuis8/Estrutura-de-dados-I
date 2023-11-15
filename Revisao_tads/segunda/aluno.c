#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

struct aluno{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
};

Aluno *atribuir(int num) {
   Aluno *a = (Aluno*)malloc(num * sizeof(Aluno));


    if (!a) return NULL;

    int i;
    for (i = 0; i < num; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", a[i].nome);
        printf("Digite a matricula do aluno: ");
        scanf("%d", &a[i].matricula);
        printf("Digite a nota 1 do aluno: ");
        scanf("%f", &a[i].nota1);
        printf("Digite a nota 2 do aluno: ");
        scanf("%f", &a[i].nota2);
        printf("Digite a nota 3 do aluno: ");
        scanf("%f", &a[i].nota3);
    }
    return a;
}

void imprimir(Aluno *a, int num) {
    int i;

    for (i = 0; i < num; i++) {
        printf("O nome do aluno eh: %s\n", a[i].nome);
        printf("A matricula do aluno eh: %d\n", a[i].matricula);
        printf("A nota 1 do aluno eh: %.2f\n", a[i].nota1);
        printf("A nota 2 do aluno eh: %.2f\n", a[i].nota2);
        printf("A nota 3 do aluno eh: %.2f\n", a[i].nota3);
        printf("\n");
    }
}
 void media(Aluno *a,int qtd_aluno){
    float soma=0,media;
    int i;
    for(i=0;i<qtd_aluno;i++){
        soma = a[i].nota1 + a[i].nota2 + a[i].nota3;
        media = soma/(3);
        printf("A media do aluno: %s eh = %.2f\n",a[i].nome,media);
    }
    
}
void aprovacao(Aluno *a,int num){
    int i;
    float media_limite = 6;
    float media,soma=0 ;

    for(i=0;i<num;i++){
        soma = a[i].nota1 + a[i].nota2 + a[i].nota3;
        media = soma/(3);
        if (media >= media_limite){
            printf("O aluno %s foi aprovado\n",a[i].nome);
        }else{
            printf("O aluno %s foi reprovado\n",a[i].nome);
        }
        
        
    }
}
void liberar(Aluno *a){
    free(a);
}