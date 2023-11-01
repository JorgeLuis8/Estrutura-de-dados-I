#include <stdio.h>
#include "matriz.h"    
#include <stdlib.h>



Matriz *criar (int c, int l) {
    Matriz *m = (Matriz*) malloc (sizeof(Matriz));
    if (!m) {
        printf("Erro ao alocar.");
        return NULL;
    }

    m -> v = (float *) malloc(c * l * sizeof(float));

    if (!m->v){
        printf("Erro ao alocar.");
        return NULL;
    }
    
    return m;
}

float acessar(Matriz *m, int n, int l)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < l; j++)
        {
            printf("%f ", *(m->v + (i * l) + j));
        }
        printf("\n"); 
    }
    return 0;
}

void atribuir(Matriz *m, int linha, int coluna, float valor) {
    // Certifique-se de que a linha e a coluna estão dentro dos limites da matriz
    if (linha >= 0 && linha < m->linha && coluna >= 0 && coluna < m->coluna) {
        // Calcule o índice da matriz 1D correspondente à linha e coluna especificadas
        int indice = linha * m->coluna + coluna;
        // Atribua o valor à célula correspondente
        m->v[indice] = valor;
    } else {
        printf("Erro: Linha ou coluna fora dos limites da matriz.\n");
    }
}


