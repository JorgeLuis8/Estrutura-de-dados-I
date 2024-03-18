typedef struct dados{
	int *num;
    int tamanho;
    size_t memoria;
}Dados;


void inicializar_dados(Dados *v, int tamanho);
void preencher_array(Dados *v);
void imprimirArray(int arr[], int tamanho);
void quickSort(Dados *dados, int low, int high);
void trocar(int *a, int *b);
int particionar(int arr[], int low, int high);
void imprimirTempoETamanhoMemoria(Dados *dados);
