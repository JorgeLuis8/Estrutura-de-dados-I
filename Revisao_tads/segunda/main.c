#include <stdio.h>
#include "aluno.c"

int main()
{

    Aluno *a= NULL;
    int opcao;
    int numalunos;
    int qtd_alunos = 0;

    do
    {
        printf("\nEscolha uma opcao:\n");
        printf("1. Cadastrar Aluno\n");
        printf("2. Imprimir Alunos\n");
        printf("3. Media dos alunos\n");
        printf("4. Verificar aprovacao\n");
        printf("5. Liberar memoria\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Informe o numero de alunos: ");
            scanf("%d",&numalunos);
            a = atribuir(a,numalunos,qtd_alunos);
            qtd_alunos+=numalunos;
            break;
        case 2:
            imprimir(a,numalunos);
            break;
        case 3:
            media(a,numalunos);
            break;
        case 4:
            aprovacao(a,numalunos);
            break;
        case 5:
            liberar(a);
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
