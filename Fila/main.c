#include <stdio.h>
#include <stdlib.h>
#include "fila.c"


int main() {
    Fila* f = criar_fila();

    // Enfileirar alguns elementos
    enqueue(f, 10);
    enqueue(f, 20);
    enqueue(f, 30);

    printf("Fila apos enfileirar elementos:\n");
    imprimir(f);

    dequeue(f);
	
	imprimir(f);
    return 0;
}
