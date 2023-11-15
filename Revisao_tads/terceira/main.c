#include <stdio.h>
#include "livro.c"

int main(){
    Livro *l = NULL;
    int opcao;
    int numlivro;
    int qtd_livros = 0;
    do
    {
        printf("\nEscolha uma opcao:\n");
        printf("1. Cadastrar Livro\n");
        printf("2. Imprimir Livros\n");
        printf("3. Adcionar palavra chave\n");
        printf("4. Buscar palavra chave\n");
        printf("5. Buscar autor\n");
        printf("6. Liberar memoria\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Informe o numero de livros: ");
            scanf("%d", &numlivro);
            l = atribuir(l, numlivro, qtd_livros);
            qtd_livros+=numlivro;
            break;
        case 2:
            imprimir(l, numlivro);
            break;
        case 3:
            adicionarPalavra(l,numlivro);
            break;
        case 4:
            buscarPalavra(l,numlivro);
            break;
        case 5:
            buscarAutor(l,numlivro);
            break;
        case 6:
            liberar(l);
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}


