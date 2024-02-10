#include <stdio.h>

#include "o.h"

int main() {
    int tamanho = 1000000; 
    Dados dados; 
  
    inicializa(&dados, tamanho);

    preencher_random(&dados);

    imprimirTempoETamanhoMemoria(&dados);

   
    free(dados.num);

    return 0;
}

