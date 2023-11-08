#include <stdio.h>
#include "aluno.c"
int main(){
    int qtd_aluno;
    printf("Informe a quantidade de alunos que deseja cadastrar:\n");
    scanf("%d",&qtd_aluno);
    if(qtd_aluno < 0){
        printf("Informe uma quantidade de alunos valida);\n");
    }else{
        Aluno *aluno = atribuir(qtd_aluno);
        imprimir(aluno,qtd_aluno);
        media(aluno,qtd_aluno);
        aprovacao(aluno,qtd_aluno);
        liberar(aluno);

    }
    return 0;
}