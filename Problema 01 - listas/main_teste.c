#include <stdio.h>
#include "criador.c"

int main() {
    Criador *listaCriadores = criarListaDuplaCriadores();

    listaCriadores = cadastrar(listaCriadores);
    listaCriadores = cadastrar(listaCriadores);
    listaCriadores = cadastrar(listaCriadores);
    imprimir(listaCriadores);
    return 0;   
}