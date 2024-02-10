#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "o.h"

int main() {
    Dados *vetor;

    int tamanho = 100000; 

    inicializa(&vetor, tamanho);

    preencher_random(&vetor);


    // Bubble Sort
    bubble_sort(&vetor);
    imprimir_estatisticas(&vetor, "Bubble Sort");


    // Selection Sort
    inicializa(&vetor, tamanho); 
    preencher_random(&vetor);
    selection_sort(&vetor);
    imprimir_estatisticas(&vetor, "Selection Sort");


    // Insertion Sort
    inicializa(&vetor, tamanho); 
    insertion_sort(&vetor);
    imprimir_estatisticas(&vetor, "Insertion Sort");

    
    return 0;
}
