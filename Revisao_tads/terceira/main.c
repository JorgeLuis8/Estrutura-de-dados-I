#include <stdio.h>
#include "livro.c"

int main(){
    Livro *l = atribuir(1);
    imprimir(l,1);
    adicionarPalavra(l,1);
    imprimir(l,1);
    
    return 0;
}