#include <stdio.h>
#include <stdlib.h>
#include "lista.c"


int main() {
	Livro *l = criar_Livro();
    inserirCircular(l);
	// l = inserir_ordenado(l);
	// l = inserir_ordenado(l);
	// l = inserir_ordenado(l);
	// l = inserir_ordenado(l);
	// l = inserir_ordenado(l);
	//imprimir(l);
	return 0;
}
