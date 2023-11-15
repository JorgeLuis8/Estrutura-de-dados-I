#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int *a,int tam, int chave){
    int i;
    for (i = 0; i < tam; i++){
        if (a[i] == chave)
        {
            return i;
        }
        
    }
    
}