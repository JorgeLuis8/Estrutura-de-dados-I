#include <stdio.h>
#include "matriz.c"

int main(){

    Matriz *c = criar(10,10);

    acessar(c,3,4);

    atribuir(c,1,2,10);

    return 0;
}