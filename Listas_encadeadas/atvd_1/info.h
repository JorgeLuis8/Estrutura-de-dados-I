typedef struct lista Lista;
Lista *criarLista();
void inserirListaInicio(Lista **l,int i);
Lista *inserirFimlista(Lista *l,int i);
void imprimirLista(Lista *l);
int qtdElemento(Lista *l);
Lista *inseirOrdenado(Lista *l,int i);
void liberarLista(Lista *l);
 