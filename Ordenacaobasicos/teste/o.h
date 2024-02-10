typedef struct dados Dados;

void inicializa(Dados *v, int tamanho);
void preencher_random(Dados *v);
void imprimir_estatisticas(Dados *v, char* nome_algoritmo);
void imprimirArray(int arr[], int tamanho);
//void merge_sort(Dados *v)
void quickSort(Dados *dados, int low, int high);
void trocar(int *a, int *b);
int particionar(int arr[], int low, int high);
