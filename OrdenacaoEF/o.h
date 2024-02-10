#ifndef O_H_INCLUDED
#define O_H_INCLUDED

typedef struct dados {
    int *num;
    int tamanho;
}Dados;

// Protótipos de funções...
void inicializa(Dados *v, int tamanho);
void preencher_random(Dados *v);
void imprimirArray(int arr[], int tamanho);
void quickSort(Dados *dados, int low, int high);
void trocar(int *a, int *b);
int particionar(int arr[], int low, int high);
void calcularUsoMemoria(Dados *dados);
void imprimirTempoETamanhoMemoria(Dados *dados);

#endif // O_H_INCLUDED

