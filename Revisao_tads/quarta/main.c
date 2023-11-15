#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contato.c" 

int main()
{
    int numContatos;
    printf("Informe o numero de contatos: ");
    scanf("%d", &numContatos);

    Contato *contatos = atribuir(numContatos);
    int opcao;

    do
    {
        printf("\nEscolha uma opcao:\n");
        printf("1. Imprimir contatos\n");
        printf("2. Adicionar etiquetas\n");
        printf("3. Listar contatos\n");
        printf("4. Atualizar numero\n");
        printf("5. Remover contato\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            imprimir(contatos, numContatos);
            break;
        case 2:
            adcEtiqueta(contatos, numContatos);
            break;
        case 3:
            listaContato(contatos, numContatos);
            break;
        case 4:
            atualizarNumero(contatos, numContatos);
            break;
        case 5:
            removerContato(contatos,numContatos);
            break;
        case 0:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

   
    liberar(contatos, numContatos);

    return 0;
}
