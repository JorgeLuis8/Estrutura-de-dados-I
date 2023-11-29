#include <stdio.h>
#include "node.c"

int main(){
    Lista l;
    criar_lista(&l);

    //inserir_inicio(&l,2);
    //inserir_inicio(&l,5);
    //inserir_inicio(&l,6);
    //imprimir_lista(l);

    inserir_final(&l,277);
    inserir_final(&l,255);
    inserir_final(&l,221);
    imprimir_lista(l);


    return 0;
}