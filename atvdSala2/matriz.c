#include <stdio.h>
#include "matriz.h"    

#include <stdlib.h>



Matriz *criar (int c, int l) {
    Matriz *m = (Matriz*) malloc (sizeof(Matriz));
    m -> v = (float *) malloc(c * l * sizeof(float));
    if (m == NULL) {
        printf("Erro ao alocar.");
    }

    return m;

}


float acessar(Matriz *m,int n, int l){
    int i,j;
    for(i = 0; i<n;i++){
        for(j = 0;j < l; i++){
            printf("%f", *(m -> v + (i*n) + j));
        }
    }
}
