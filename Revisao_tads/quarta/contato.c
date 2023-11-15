#include <stdio.h>
#include <stdlib.h>
#include "contato.h"
#include <string.h>

struct etiqueta{
    char etiquetas[100];
};

struct contato{
    char nome[100];
    int numero;
    Etiqueta *etiquetas;
    int qtd_etiquetas;
};

Contato *atribuir(Contato *c,int num,int qtd_contato){
    int i, j, qtd_etiquetas;
    c = (Contato *) realloc(c, num * sizeof(Contato));
    if (!c){
        printf("Erro de alocacao");
        exit(1);
    }
    
    for (i = qtd_contato; i < qtd_contato + num; i++){
        printf("Informe o nome do contato: ");
        scanf("%s", c[i].nome);
        printf("\n");
        printf("Informe o numero do contato: ");
        scanf("%d", &c[i].numero);

        printf("\n");
        printf("Informe a quantida de etiquetas: ");
        scanf("%d", &c[i].qtd_etiquetas);
        qtd_etiquetas = c[i].qtd_etiquetas;
       
        c[i].etiquetas = (Etiqueta *)malloc(qtd_etiquetas * sizeof(Etiqueta));

        for (j = 0; j < qtd_etiquetas; j++){
            printf("Digite a etiqueta: ");
            scanf("%s", c[i].etiquetas[j].etiquetas);
        }
    }
    return c;
}

void imprimir(Contato *contato, int QtdContatos)
{
    int i, j, contador = 1;

    printf("Contatos na agenda: ");
    for (i = 0; i < QtdContatos; i++)
    {
        printf("Contato %d -\n", contador);
        printf("Nome: %s\n", contato[i].nome);
        printf("Numero: %d\n", contato[i].numero);
        printf("Etiquetas: ");
        for (j = 0; j < contato[i].qtd_etiquetas; j++)
        {
            printf("[");
            printf("%s", contato[i].etiquetas[j].etiquetas);
            printf("]");
        }
        contador++;
        printf("\n");
    }
}

void adcEtiqueta(Contato *c, int num){
    int i, qtdEtiquetas, j,numContato;

    for (i = 0; i < num; i++){
        printf("Informe o numero do contato: ");
        scanf("%d", &numContato);

        if (c[i].numero == numContato){
            printf("Informe a quantidade de etiquetas: ");
            scanf("%d", &qtdEtiquetas);

            c[i].etiquetas = (Etiqueta *)realloc(c[i].etiquetas, (c[i].qtd_etiquetas + qtdEtiquetas) * sizeof(Etiqueta));

            if (!c[i].etiquetas){
                printf("Erro de alocação");
            }

            for (j = c[i].qtd_etiquetas; j < c[i].qtd_etiquetas + qtdEtiquetas; j++){
                printf("Informe uma nova etiqueta: ");
                scanf("%s", c[i].etiquetas[j].etiquetas);
            }

            c[i].qtd_etiquetas += qtdEtiquetas;
        }
        else{
            printf("Contato não existe na agenda");
        }
    }
}

void listaContato(Contato *c,int num){
    int i;
    printf("Os contatos da sua agenda:\n ");
    for ( i = 0; i < num; i++){
        printf("%s\n",c[i].nome);
    }
    
}

void atualizarNumero(Contato *c, int num){
    int numeroNovo,numeroAntigo,i,flag;
    printf("Informe o numero antigo: ");
    scanf("%d",&numeroAntigo);
    for ( i = 0; i < num; i++){
        if (numeroAntigo == c[i].numero){
            printf("Informe o numero novo: ");
            scanf("%d",&numeroNovo);
            c[i].numero = numeroNovo;
            flag = 1;
        }
    if (!flag){
        printf("Este numero nao existe na agenda");
    }  
        
    }
    
}
int removerContato(Contato *c, int num){
    char nomeRemover[100];
    int i, j;

    printf("Informe o nome do contato a ser removido: ");
    scanf("%s", nomeRemover);

    
    for (i = 0; i < num; i++){
        if (strncmp(c[i].nome, nomeRemover, sizeof(c[i].nome)) == 0){
            free(c[i].etiquetas);

            for (j = i; j < (num - 1); j++){
                c[j] = c[j + 1];
            }
            memset(&c[num - 1], 0, sizeof(Contato));

            num--; 
            printf("Contato removido com sucesso.\n");
            break;
        }
    }

    return num; 
}

void liberar(Contato *c,int num){
    int i;
    for (i = 0; i < num; i++){
        free(c[i].etiquetas);
    }
    free(c);
}