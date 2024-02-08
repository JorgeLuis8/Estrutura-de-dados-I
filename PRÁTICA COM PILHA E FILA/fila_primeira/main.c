#include <stdio.h>
#include <stdlib.h>
#include "filaimpressao.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    Fila* filaDeImpressao = cria_fila();

    enfileirarDocumento(filaDeImpressao, 1);
    enfileirarDocumento(filaDeImpressao, 2);
    enfileirarDocumento(filaDeImpressao, 3);

    printf("Numero de documentos na fila: %d\n", obterNumeroDocumentos(filaDeImpressao));

    imprimirDocumento(filaDeImpressao);
    imprimirDocumento(filaDeImpressao);

    printf("Numero de documentos na fila: %d\n", obterNumeroDocumentos(filaDeImpressao));

    liberarFila(filaDeImpressao);

    return 0;
}
