typedef struct no No;
typedef struct fila Fila;

Fila *criar_fila(void);

void enqueue(Fila *f,int valor);
void imprimir(Fila* f);
int dequeue(Fila* f);