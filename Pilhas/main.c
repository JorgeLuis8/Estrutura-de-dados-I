#include <stdio.h>
#include "pilha.h"

int main(){
	
	Pilha* p= criar_pilha();
	No *no;
	
	push(p,1);
	imprimir(no);
	
	return 0;
	
}
