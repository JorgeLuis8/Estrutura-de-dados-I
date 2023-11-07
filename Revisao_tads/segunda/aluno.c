#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
} Aluno;

Aluno *atribuir(int num) {
    int i;
    Aluno *a = (Aluno *)malloc(num * sizeof(Aluno));

    if (!a) return NULL;

    for (i = 0; i < num; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", a[i].nome);
        printf("Digite a matrícula do aluno: ");
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
        printf("A nota 1 do aluno eh: %f\n", a[i].nota1);
        printf("A nota 2 do aluno eh: %f\n", a[i].nota2);
        printf("A nota 3 do aluno eh: %f\n", a[i].nota3);
        printf("\n");
    }
}
