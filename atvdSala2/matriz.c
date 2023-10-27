#include <stdio.h>
#include "matriz.h"    
#include <stdlib.h>



Matriz *criar (int c, int l) {
    Matriz *m = (Matriz*) malloc (sizeof(Matriz));
    if (m == NULL) {
        printf("Erro ao alocar.");
    }

    m -> v = (float *) malloc(c * l * sizeof(float));

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
