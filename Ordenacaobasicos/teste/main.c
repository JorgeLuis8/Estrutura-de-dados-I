#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "o.h"

int main() {
    Dados dados;
    int tamanho = 10; // Tamanho do array de números aleatórios

    inicializa(&dados, tamanho); // Inicializa a estrutura de dados
    preencher_random(&dados); // Preenche o array com números aleatórios

    printf("Array antes da ordenacao:\n");
    imprimirArray(dados.num, dados.tamanho); // Imprime o array antes da ordenação

    quickSort(&dados, 0, tamanho - 1); // Ordena o array usando o algoritmo Quick Sort

    printf("Array depois da ordenacao:\n");
    imprimirArray(dados.num, dados.tamanho); // Imprime o array depois da ordenação

    // Libera a memória alocada para o array
    free(dados.num);

    return 0;
}
