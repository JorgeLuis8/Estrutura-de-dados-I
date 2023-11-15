#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contato.c" 

int main(){
    

    Contato *contatos = NULL;
    int opcao;
    int numContatos;
    int qtd_contato = 0;

    do
    {
        printf("\nEscolha uma opcao:\n");
        printf("1. Adcionar contato\n");
        printf("2. Imprimir contatos\n");
        printf("3. Adicionar etiquetas\n");
        printf("4. Listar contatos\n");
        printf("5. Atualizar numero\n");
        printf("6. Remover contato\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("Informe o numero de contatos: ");
            scanf("%d", &numContatos);
            contatos = atribuir(contatos,numContatos,qtd_contato);
            qtd_contato+= numContatos;
            break;
        case 2:
            imprimir(contatos, qtd_contato);
            break;
        case 3:
            adcEtiqueta(contatos, numContatos);
            break;
        case 4:
            listaContato(contatos, numContatos);
            break;
        case 5:
            atualizarNumero(contatos, numContatos);
            break;
        case 6:
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
