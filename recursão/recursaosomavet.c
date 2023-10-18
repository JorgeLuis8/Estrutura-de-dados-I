#include <stdio.h>

int soma_vetor_recursivo(int *vetor, int tamanho) {
    if (tamanho <= 0) {
        return 0;
    } else {
        return *vetor + soma_vetor_recursivo(vetor + 1, tamanho - 1);
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int resultado = soma_vetor_recursivo(vetor, tamanho);

    printf("A soma dos elementos do vetor é: %d\n", resultado);

    return 0;
}
