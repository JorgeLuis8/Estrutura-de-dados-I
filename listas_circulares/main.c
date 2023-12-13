#include <stdio.h>
#include <stdlib.h>
#include "lista.c"


int main() {
	Livro *l = criarLista();
    inserirLivroListaCircular(l);
	// l = inserir_ordenado(l);
	// l = inserir_ordenado(l);
	// l = inserir_ordenado(l);
	// l = inserir_ordenado(l);
	// l = inserir_ordenado(l);
	mostrarListaCirular(l);
	return 0;
}
