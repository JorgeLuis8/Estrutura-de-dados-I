#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "o.h"

void inicializa(Dados *v, int tamanho) {
    v->num = (int*)malloc(tamanho * sizeof(int));
    v->tamanho = tamanho;
}

void preencher_random(Dados *v) {
    int i;
    srand(time(NULL));
    for (i = 0; i < v->tamanho; i++) {
        v->num[i] = rand() % 1000000;
    }
}

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int arr[], int low, int high) {
    int pivot = arr[high];
    int j;
    int i = (low - 1);
    for (j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Função Quick Sort recursiva
void quickSort(Dados *dados, int low, int high) {
    if (low < high) {
        // Encontra o índice do pivô
        int pi = particionar(dados->num, low, high);

        // Ordena os elementos antes e depois do pivô
        quickSort(dados, low, pi - 1);
        quickSort(dados, pi + 1, high);
    }
}

// Função para imprimir o array
void imprimirArray(int arr[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Função para imprimir o tempo de execução e a quantidade de memória utilizada
void imprimirTempoETamanhoMemoria(Dados *dados) {
    clock_t inicio = clock(); // Início da contagem de tempo

    // Ordena o array usando o algoritmo Quick Sort
    quickSort(dados, 0, dados->tamanho - 1);

    clock_t fim = clock(); // Fim da contagem de tempo
    double tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    size_t memoria_utilizada = dados->tamanho * sizeof(int);
    printf("Tempo de execucao: %.6f segundos\n", tempo_execucao);
    printf("Quantidade de memoria utilizada: %zu bytes\n", memoria_utilizada);
}

