#include <stdio.h>
#include "node.c"

int main(){
    Lista l;
    No * removido;
    criar_lista(&l);

    //inserir_inicio(&l,2);
    //inserir_inicio(&l,5);
    //inserir_inicio(&l,6);
    //imprimir_lista(l);

    //inserir_final(&l,277);
    //inserir_final(&l,255);
    //inserir_final(&l,221);
    //imprimir_lista(l);

    inserir_ordenado(&l,5);
    inserir_ordenado(&l,500);
    inserir_ordenado(&l,10);
    imprimir_lista(l);
    //liberar_lista(&l);
    //removido = remover_elemento(&l,10);

    removido = buscar(&l,10);
  

    printf("Valor Encontrado: %d\n",removido->valor);

    imprimir_lista(l);
    return 0;
}