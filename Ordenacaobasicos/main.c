#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

int main() {
    Dados *v;
    inicializa(&v, 1000); // Inicializa a estrutura com 1000 elementos
    preencher_radom(&v);
	
	
    bubble_sort(&v);
    imprimir_estatisticas(&v, "Bubble Sort");

    preencher_radom(&v);
    selection_sort(&v);
    imprimir_estatisticas(&v, "Selection Sort");

    preencher_radom(&v);
    insertion_sort(&v);
    imprimir_estatisticas(&v, "Insertion Sort");
	
	
	
    return 0;
}

