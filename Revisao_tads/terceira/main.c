#include <stdio.h>
#include "livro.c"

int main(){
   int numLivros;
    Livro *livros;

    printf("Informe a quantidade de livros: ");
    scanf("%d", &numLivros);

    livros = atribuir(numLivros);

    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Imprimir livros\n");
        printf("2. Adicionar palavra-chave\n");
        printf("3. Buscar por palavra-chave\n");
        printf("4. Buscar por autor\n");
        printf("5. Remover palavra-chave\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nLivros cadastrados:\n");
                imprimir(livros, numLivros);
                break;
            case 2:
                adicionarPalavra(livros, numLivros);
                break;
            case 3:
                buscarPalavra(livros, numLivros);
                break;
            case 4:
                buscarAutor(livros, numLivros);
                break;
            case 5:
                remover(livros, numLivros);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    liberar(livros);

    return 0;
}
