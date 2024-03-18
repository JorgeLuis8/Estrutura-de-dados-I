#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "o.h"
#include <malloc.h>


void inicializar_dados(Dados *v, int tamanho) {
    v->num = (int*)malloc(tamanho * sizeof(int));
    v->tamanho = tamanho;
}

void preencher_array(Dados *v) {
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

void quickSort(Dados *dados, int low, int high) {
    if (low < high) {
        int pi = particionar(dados->num, low, high);

        quickSort(dados, low, pi - 1);
        quickSort(dados, pi + 1, high);
    }
}

void imprimirArray(int arr[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void merge(int arr[], int l, int m, int r, size_t *memoria) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = (int*) malloc(n1 * sizeof(int));
    int *R = (int*) malloc(n2 * sizeof(int));

    *memoria += (n1 + n2) * sizeof(int);

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void mergeSort(Dados *dados, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(dados, l, m);
        mergeSort(dados, m + 1, r);

        merge(dados->num, l, m, r, &dados->memoria);
    }
}

void calcula_tempo_memoria_merge(Dados *dados) {
    clock_t inicio = clock();

    double tempo_execucao;
    dados->memoria = 0;

    mergeSort(dados, 0, dados->tamanho - 1);

    clock_t fim = clock();

    tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    double memoria = (double)dados->memoria;

    printf("Tempo de execução: %.3f segundos\n", tempo_execucao);
    printf("Memória utilizada: %.3f Bytes\n", memoria);
}




void calcula_tempo_memoria_quick(Dados *dados) {
    clock_t inicio = clock(); 

    quickSort(dados, 0, dados->tamanho - 1);

    clock_t fim = clock(); 
    double tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    size_t memoria_utilizada = dados->tamanho * sizeof(int);

    double memoria = (double)memoria_utilizada;

    printf("Tempo de execucao: %.3f segundos\n", tempo_execucao);
    printf("Quantidade de memoria utilizada: %.3f Bytes\n", memoria);
}
