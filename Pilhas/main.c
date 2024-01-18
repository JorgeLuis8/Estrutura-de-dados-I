#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pilha.h"

void inserirSequencia(Pilha **p, int n);

int main() {
	Pilha *p = criar_pilha();
	clock_t inicio, fim;
	double tempo;
	int opc, num;
	printf(
		"1 - inserir\n"
		"2 - imprimir\n"
		"0 - sair\n"
	);
	scanf("%d", &opc);
	while(opc){
		switch(opc) {
			case 1:
				scanf("%d", &num);
				inserir_pilha(p, num);
				break;
			case 2:
				imprimir_nodo(p);
				break;
			case 3:
				scanf("%d", &num);
				inicio = clock();
				inserirSequencia(&p, num);
				fim = clock();
				tempo = (double) (fim - inicio) / CLOCKS_PER_SEC;
				printf("%.3f\n", tempo);
				break;
			default:
				printf("Opcao nao disponivel\n");
		}
		printf(
			"1 - inserir\n"
			"2 - imprimir\n"
			"0 - sair\n"
		);
		scanf("%d", &opc);
	}
	return 0;
}

void inserirSequencia(Pilha **p, int n) {
	int i;
	for(i = 0; i < n; i++)
		inserir_pilha(*p, i);
}
