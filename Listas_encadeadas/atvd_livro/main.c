#include <stdio.h>
#include "livro.c"

int main()
{
    Livro *lista_livros = criar_lista();
    int opcao, id, ano;
    char titulo[100], autor[50];

    do
    {
        exibir_menu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o titulo do livro: ");
            scanf("%s", titulo);
            printf("Digite o autor do livro: ");
            scanf("%s", autor);
            printf("Digite o ano de publicacao do livro: ");
            scanf("%d", &ano);
            printf("Digite o ID do livro: ");
            scanf("%d", &id);
            lista_livros = inserir_livro_ordenado(lista_livros, titulo, autor, ano, id);
            break;
        case 2:
            printf("Digite o ID do livro a ser removido: ");
            scanf("%d", &id);
            lista_livros = remover_livro(lista_livros, id);
            break;
        case 3:
            printf("Digite o autor para listar os livros: ");
            scanf("%s", autor);
            Livro *lista_autor = listar_livros_por_autor(lista_livros, autor);
            // Faça o que quiser com a lista do autor, se necessário
            break;
        case 4:
            printf("Digite o ID do livro para atualizar o ano de publicacao: ");
            scanf("%d", &id);
            printf("Digite o novo ano de publicacao: ");
            scanf("%d", &ano);
            atualizar_ano_publicacao(lista_livros, id, ano);
            break;
        case 5:
            quantidade_livros_por_autor(lista_livros);
            break;
        case 6:
            printf("Saindo do programa. Obrigado!\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}