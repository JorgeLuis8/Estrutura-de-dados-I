#include <stdio.h>
#include <stdlib.h>
#include "book.c"


int main() {
	Book *book ;
    book =  criar_lista_livro(book);
    book = inserirLivroOrdenadoCircular(book);
    book = inserirLivroOrdenadoCircular(book);
    imprimir_lista(book);
    book = removerLivroListaCircular(book);
    imprimir_lista(book);
    quantidadeLivrosPorAutorListaCircular(book);
    liberarListaCircular(book);
    return 0;
}