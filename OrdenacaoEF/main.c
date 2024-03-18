#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "o.h"

int main() {
    Dados d_quick, d_merge;
    int tam = 1000000; 

    inicializar_dados(&d_quick, tam);
    inicializar_dados(&d_merge, tam);

    preencher_array(&d_quick);
    preencher_array(&d_merge);

    printf("Tempo de ordencao e memoria utilizada pelo Quick Sort:\n");
    calcula_tempo_memoria_quick(&d_quick);

    printf("\nTempo de ordenacao e memoria utilizada pelo Merge Sort:\n");
    calcula_tempo_memoria_merge(&d_merge);
 


    return 0;
}
