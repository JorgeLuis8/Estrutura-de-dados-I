#include <stdio.h>
#include <stdlib.h>
#include "livro.c"


int main() {
	Livro *l = criar_Livro();
	l = inserir_ordenado(l);
	l = inserir_ordenado(l);
	imprimir(l);
	return 0;
}
