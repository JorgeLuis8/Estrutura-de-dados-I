#include <stdio.h>
#include "matriz.c"

int main(){

    Matriz *c = criar(3,3);

    atribuir(c,3,3,6);

    acessar(c,3,4);

    return 0;
}