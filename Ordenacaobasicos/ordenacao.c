#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct dados {
    int *num;
    int tamanho;
    unsigned long long int comparacoes;
    unsigned long long int trocas;
    clock_t inicio;
    clock_t fim;
} Dados;

void inicializa(Dados *v, int tamanho) {
    v->tamanho = tamanho;
    v->comparacoes = 0;
    v->trocas = 0;
}

void preencher_random(Dados *v) {
	int i;
    srand(time(NULL));
    for (i = 0; i < v->tamanho; i++)
        v->num[i] = rand() % 100; // Altere o intervalo conforme sua necessidade
}

void bubble_sort(Dados *v) {
    int i, j;
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
}

void selection_sort(Dados *v) {
    int i, j, min_idx;
    for (i = 0; i < v->tamanho - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < v->tamanho; j++) {
            v->comparacoes++;
            if (v->num[j] < v->num[min_idx])
                min_idx = j;
        }
        int temp = v->num[min_idx];
        v->num[min_idx] = v->num[i];
        v->num[i] = temp;
        v->trocas++;
    }
}

void insertion_sort(Dados *v) {
    int i, key, j;
    for (i = 1; i < v->tamanho; i++) {
        key = v->num[i];
        j = i - 1;

        while (j >= 0 && v->num[j] > key) {
            v->comparacoes++;
            v->num[j + 1] = v->num[j];
            j = j - 1;
            v->trocas++;
        }
        v->num[j + 1] = key;
    }
}

void imprimir_estatisticas(Dados *v, char* nome_algoritmo) {
    printf("Estatísticas para o algoritmo %s:\n", nome_algoritmo);
    printf("Trocas: %llu\n", v->trocas);
    printf("Comparações: %llu\n", v->comparacoes);
    printf("Tempo decorrido: %f segundos\n", (double)(v->fim - v->inicio) / CLOCKS_PER_SEC);
}

void imprimir_vetor(Dados *v) {
	int i;
    printf("Vetor ordenado:\n");
    for (i = 0; i < v->tamanho; i++) {
        printf("%d ", v->num[i]);
    }
    printf("\n");
}

