#include <stdio.h>
#include <stdlib.h>
#include "info.c"


int main(){

    Lista *l;
    l = criarLista();
    //l = inserirListaInicio(l,10); 
    //l = inserirListaInicio(l,20); 
    //l = inserirListaInicio(l,30);
    l = inserirFimlista (l,10);
    l = inserirFimlista (l,20);
    l = inserirFimlista (l,30);
  
    imprimirLista(l);
    printf("Quantidade de elementos: %d\n",qtdElemento(l));

   



    return 0;
}