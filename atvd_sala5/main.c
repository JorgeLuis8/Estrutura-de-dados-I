#include <stdio.h>
#include "pilha.h"

int main(){
	
	Pilha *p =  pilha_cria();
	
	pilha_push (p, 1);
	pilha_push (p, 4);
	pilha_push (p, 3);
	pilha_push (p, 5);
	imprimir_nodo(p);
	
	return 0;
}
