#include <stdio.h>
#include <stdlib.h>
#include "contato.h"

struct etiqueta
{
    char etiquetas[100];
};

struct contato
{
    char nome[100];
    int numero;
    Etiqueta *etiquetas; 
    int qtd_etiquetas;
};

Contato *atribuir(int num){
    int i,j,qtd_etiquetas;
    Contato *c = (Contato *) calloc(num,sizeof(Contato));
    for(i=0 ;i<num ;i++){
        printf("Informe o nome do contato: ");
        scanf("%s",c[i].nome);
        printf("\n");
        printf("Informe o numero do contato: ");
        scanf("%d",&c[i].numero);
        printf("\n");
        printf("Informe a quantida de etiquetas: ");
        scanf("%d",&c[i].qtd_etiquetas);
        qtd_etiquetas = c[i].qtd_etiquetas;
        c[i].etiquetas = (Etiqueta *)calloc(qtd_etiquetas, sizeof(Etiqueta));

        for ( j = 0; j < qtd_etiquetas; j++){
            printf("Digite a etiqueta: ");
            scanf("%s",c[i].etiquetas[j].etiquetas);
        }
        
    
    }
    return c;
}

void imprimir(Contato *c,int num){
    int i,j;
    for ( i = 0; i < num; i++){
        printf("O nome do contato eh: %s\n",c[i].nome);
        printf("O numero do contato eh: %d\n",c[i].numero);

        printf("As estiquetas do contato sao: ");
        for(j = 0 ;j < c[i].qtd_etiquetas ;j++){
            printf("%s\n",c[i].etiquetas[j].etiquetas);
        }
    }
    
}
void adcEtiqueta(Contato *c, int  num){
    int i,j,numetiquetas;
    char Ncontato[100];
    for(i= 0; i < num; i++){
        printf("Informe o nome do contato: \n");
        scanf("%s",Ncontato);
         if (strcmp(Ncontato, c[i].nome) == 0){
            printf("Informe a quantida de etiquetas: ");
            scanf("%d",&numetiquetas);
            c[i].etiquetas = (Etiqueta *)realloc(c[i].etiquetas,(c[i].qtd_etiquetas + numetiquetas) * sizeof(Etiqueta));
            if(!c[i].etiquetas){
                printf("Erro de alocacao");
            }
            for (j = c[i].qtd_etiquetas; j < c[i].qtd_etiquetas + numetiquetas; j++){
                printf("Informe a nova etiqueta: ");
                scanf("%s",c[i].etiquetas[j].etiquetas);
            
            }
            c[i].qtd_etiquetas += numetiquetas;
         }
        
      
        
}