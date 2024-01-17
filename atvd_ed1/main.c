#include <stdio.h>
#include "criador.h"

int main() {
    Criador *listaCriadores = criarListaDuplaCriadores();
    int id;
    listaCriadores = cadastrarCriador(listaCriadores);
    listaCriadores = cadastrarCriador(listaCriadores);
    listaCriadores = cadastrarCriador(listaCriadores);
    imprimir(listaCriadores);
    printf("Informe o id do criador que deseja remover: ");
    scanf("%d",&id);
    listaCriadores = remover(listaCriadores,id);
    imprimir(listaCriadores);
    return 0;   
}
