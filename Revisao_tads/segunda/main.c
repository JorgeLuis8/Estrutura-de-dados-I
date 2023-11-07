#include <stdio.h>
#include "aluno.c"
int main(){
    Aluno *a = atribuir(2);
    imprimir(a,2);
    return 0;
}