#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "o.h"

struct dados {
    int *num;
    int tamanho;
    unsigned long long int comparacoes;
    unsigned long long int trocas;
    clock_t inicio;
    clock_t fim;
};

void inicializa(Dados *v, int tamanho) {
    v->num = (int*)malloc(tamanho * sizeof(int));
    v->tamanho = tamanho;
    v->comparacoes = 0;
    v->trocas = 0;
}

void preencher_random(Dados *v) {
	int i;
    srand(time(NULL));
    for (i = 0; i < v->tamanho; i++) {
        v->num[i] = rand() % 10000; 
    }
}

void bubble_sort(Dados *v) {
	int i,j;
    clock_t inicio = clock();

    for (i = 0; i < v->tamanho - 1; i++) {
        for (j = 0; j < v->tamanho - i - 1; j++) {
            v->comparacoes++;
            if (v->num[j] > v->num[j + 1]) {
                int temp = v->num[j];
                v->num[j] = v->num[j + 1];
                v->num[j + 1] = temp;
                v->trocas++;
            }
        }
    }

    v->inicio = inicio;
    v->fim = clock();
}

void selection_sort(Dados *v) {
	int i,j;
    clock_t inicio = clock();


    for (i = 0; i < v->tamanho - 1; i++) {
        int min_index = i;
        for (j = i + 1; j < v->tamanho; j++) {
            v->comparacoes++;
            if (v->num[j] < v->num[min_index]) {
                min_index = j;
            }
        }
        int temp = v->num[i];
        v->num[i] = v->num[min_index];
        v->num[min_index] = temp;
        v->trocas++;
    }

    v->inicio = inicio;
    v->fim = clock();
}

void insertion_sort(Dados *v) {
	int i,j;
    clock_t inicio = clock();

    for (i = 1; i < v->tamanho; i++) {
        int key = v->num[i];
        int j = i - 1;
        while (j >= 0 && v->num[j] > key) {
            v->comparacoes++;
            v->num[j + 1] = v->num[j];
            j = j - 1;
            v->trocas++;
        }
        v->num[j + 1] = key;
    }

    v->inicio = inicio;
    v->fim = clock();
}

void imprimir_estatisticas(Dados *v, char* nome_algoritmo) {
    printf("%s :\n", nome_algoritmo);
    printf("Comparacoes: %llu\n", v->comparacoes);
    printf("Trocas: %llu\n", v->trocas);
    printf("Tempo: %.6f segundos\n", (double)(v->fim - v->inicio) / CLOCKS_PER_SEC);
	printf("\n");
}


