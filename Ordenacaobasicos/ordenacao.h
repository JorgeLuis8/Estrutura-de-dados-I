#ifndef ORDENACAO_H
#define ORDENACAO_H

typedef struct dados Dados;

void inicializa(Dados *v, int tamanho);
void preencher_radom(Dados *v);
void bubble_sort(Dados *v);
void selection_sort(Dados *v);
void insertion_sort(Dados *v);
void imprimir_estatisticas(Dados *v, char* nome_algoritmo);
void imprimir_vetor(Dados *v);
#endif

