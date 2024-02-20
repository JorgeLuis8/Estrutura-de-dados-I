#include<stdlib.h>
#include<stdio.h>
#include "arvore.h"

void menu();
void menuImprimir();

int main() {
    Arvore *arv = abp_cria_vazia();
    int opc;
    int num;
    
    do {
        menu();
        scanf("%d", &opc);
        switch(opc) {
            case 1:
                scanf("%d", &num);
                arv = abp_inserir(arv, num);
                break;
            case 2:
                scanf("%d", &num);
                printf(
                    "%s\n",
                    abp_consultar(arv, num) ?
                    "Encontrado" :
                    "Nao encontrado"
                );
                break;
            case 3:
                scanf("%d", &num);
                arv = abp_remover(arv, num);
                break;
            case 4:
                menuImprimir();
                scanf("%d", &opc);
                printf("\n");
                switch(opc) {
                    case 1:
                        abp_mostrar_em_ordem(arv);
                        break;
                    case 2:
                        abp_mostrar_pre_ordem(arv);
                        break;
                    case 3:
                        abp_mostrar_pos_ordem(arv);
                }
                break;
            case 9:
                arv = abp_desalocar(arv);
                break;
            case 0:
                printf("Fim da execucao\n");
                break;
            default:
                printf("Opcao nao disponivel\n");
        }
    } while(opc);
    
    return 0;
}

void menu() {
    printf(
        "1 - Inserir\n"
        "2 - Consultar\n"
        "3 - Remover\n"
        "4 - Imprimir\n"
        "9 - Desalocar\n"
        "0 - Sair\n"
    );
}

void menuImprimir() {
    printf(
        "1 - Em ordem\n"
        "2 - Pre ordem\n"
        "3 - Pos ordem\n"
    );
}


