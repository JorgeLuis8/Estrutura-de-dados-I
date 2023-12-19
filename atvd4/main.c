#include <stdio.h>
#include <stdlib.h>
#include "livro.c"


int main() {
	Livro *l ;
    l =  criar_lista(l);
    l = inserir_ordenado(l);
    l = inserir_ordenado(l);
    l = inserir_ordenado(l);
    l = inserir_ordenado(l);
    l = inserir_ordenado(l);
    l = inserir_ordenado(l);
    l = inserir_ordenado(l);
    l = inserir_ordenado(l);
    imprimir_lista(l);
    l = removerLivroListaCircular(l);
    imprimir_lista(l);
    //quantidadeLivrosPorAutorListaCircular(l);
    return 0;
}