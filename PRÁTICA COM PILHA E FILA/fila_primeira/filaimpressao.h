typedef struct no No;

typedef struct fila Fila;

Fila* cria_fila();
int filaVazia(const Fila* fila);
void enfileirarDocumento(Fila* fila, int numeroIdentificacao);
void imprimirDocumento(Fila* fila);
int obterNumeroDocumentos(Fila* fila);
