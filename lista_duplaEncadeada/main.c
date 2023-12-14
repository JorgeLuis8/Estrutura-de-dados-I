#include <stdio.h>
#include <stdlib.h>
#include "teste.c"


int main(){

    Livro *l = criar_lista();

    //l = inserir_inicio(l);
    //l = inserir_inicio(l);
    l = inserir_final(l);
    l = inserir_final(l);
    imprimir_lista(l);

    return 0;
}