#include <stdio.h>
#include "produto.c"

int main(){
    Produto *p = cadastrar();

    print_produto(p);
    return 0;
}