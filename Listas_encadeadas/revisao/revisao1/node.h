typedef struct no No;
typedef struct lista Lista;
void criar_lista(Lista *lista);
void inserir_inicio(Lista *lista,int valor);
void inserir_final(Lista *lista,int valor);
void inserir_ordenado(Lista *lista,int valor);
void imprimir_lista(Lista lista);
void liberar_lista(Lista *lista);
No *remover_elemento(Lista *lista,int valor);