#include <stdio.h>
#include "contato.c"

int main(){

    Contato *c = atribuir(1);
    imprimir(c,1);
    adcEtiqueta(c,1);

    return 0;
}