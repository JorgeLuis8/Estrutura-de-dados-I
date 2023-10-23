
/*Escreva a função “obtem_produtos_zerados” que:
• Recebe um vetor de inteiros chamado “código” com os códigos dos produtos
de uma loja, um vetor de inteiros chamado “estoque” com a quantidade em
estoque de cada produto (em que estoque[i] corresponde a codigo[i]), o
número de produtos em ambos os vetores e um ponteiro para uma variável
onde deve ser armazenado o número de produtos com estoque zerado.
• Retorna um novo vetor de inteiros contendo apenas os códigos dos produtos
cujo estoque é zero. A função deve armazenar na variável apontada o número
de produtos com estoque zerado.
• No método main, imprima os códigos dos produtos cujo estoque é zero,
retornados pela função "obtem_produtos_zerados".
Para esta questão, utilize malloc ou calloc. Ao final, lembre-se de liberar a memória
utilizada. */

#include <stdio.h>
#include <stdlib.h>

int *obtem_produtos_zerados(int *codigo, int *estoque, int num_produtos, int *num_zerados)
{
    int *produtos_zerados = NULL,i;
    *num_zerados = 0;

    for (i = 0; i < num_produtos; i++){
        if (estoque[i] == 0){
            (*num_zerados)++;
            produtos_zerados = (int *)realloc(produtos_zerados, (*num_zerados) * sizeof(int));
            produtos_zerados[(*num_zerados) - 1] = codigo[i];
        }
    }

    return produtos_zerados;
}

int main(){
    int codigo[] = {1, 2, 3, 4, 5};
    int estoque[] = {0, 5, 0, 10, 0};
    int num_produtos = 5;
    int num_zerados,i;

    int *produtos_zerados = obtem_produtos_zerados(codigo, estoque, num_produtos, &num_zerados);

    printf("Codigos dos produtos com estoque zerado: ");
    for (i = 0; i < num_zerados; i++){
        printf("%d ", produtos_zerados[i]);
    }
    printf("\n");

    free(produtos_zerados);

    return 0;
}
