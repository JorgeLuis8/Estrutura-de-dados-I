#include <stdio.h>
#include "matriz.c"

int main(){

    Matriz *c = criar(3,3);

    atribuir(c,0,2,3);

    acessar(c,3,3);


    return 0;
}