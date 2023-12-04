#include <stdio.h>
#include <stdlib.h>
#include "livro.c"

int main() {
    Livro *lista_livros = criar_livros();
    int opc, id, ano;
    char titulo[100], autor[50];

    do {
        printf("\nMenu:\n");
        printf("1. Inserir Livro\n");
        printf("2. Imprimir Livros por Autor\n");
        printf("3. Atualizar Ano de Publicacao\n");
        printf("4. Quantidade de Livros por Autor\n");
        printf("5. Remover Livro\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                printf("Digite o titulo do livro: ");
                scanf(" %[^\n]", titulo);
                printf("Digite o autor do livro: ");
                scanf(" %[^\n]", autor);
                printf("Digite o ano de publicacao do livro: ");
                scanf("%d", &ano);
                printf("Digite o ID do livro: ");
                scanf("%d", &id);
                lista_livros = inserir_livros(lista_livros, titulo, autor, ano, id);
                break;
            case 2:
                printf("Digite o autor para imprimir os livros: ");
                scanf(" %[^\n]", autor);
                imprimir_livros(lista_livros, autor);
                break;
            case 3:
                printf("Digite o ID do livro que deseja atualizar: ");
                scanf("%d", &id);
                printf("Digite o novo ano de publicacao: ");
                scanf("%d", &ano);
                atualizar_ano_publicacao(lista_livros, id, ano);
                break;
            case 4:
                quantidade_livros_por_autor(lista_livros);
                break;
            case 5:
                printf("Digite o ID do livro que deseja remover: ");
                scanf("%d", &id);
                lista_livros = remover_livro(lista_livros, id);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opc != 0);

    while (lista_livros != NULL) {
        Livro *temp = lista_livros;
        lista_livros = lista_livros->next;
        free(temp);
    }

    return 0;
}
