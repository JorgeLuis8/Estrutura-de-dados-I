#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "o.h"

typedef struct dados {
    int *num;
    int tamanho;
} Dados;

void inicializa(Dados *v, int tamanho) {
    v->num = (int*)malloc(tamanho * sizeof(int));
    v->tamanho = tamanho;
}

void preencher_random(Dados *v) {
    int i;
    srand(time(NULL));
    for (i = 0; i < v->tamanho; i++) {
        v->num[i] = rand() % 10000;
    }
}

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
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
    clock_t inicio = clock(); // Início da contagem de tempo

    if (low < high) {
        // Encontra o índice do pivô
        int pi = particionar(dados->num, low, high);

        // Ordena os elementos antes e depois do pivô
        quickSort(dados, low, pi - 1);
        quickSort(dados, pi + 1, high);
    }

    clock_t fim = clock(); // Fim da contagem de tempo
    double tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %.6f segundos\n", tempo_execucao);
}

// Função para imprimir o array
void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
