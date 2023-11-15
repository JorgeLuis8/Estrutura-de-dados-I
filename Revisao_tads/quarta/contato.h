typedef struct etiqueta Etiqueta;
typedef struct contato Contato;

Contato *atribuir(int num);
void imprimir(Contato *c,int num);
void adcEtiqueta(Contato *c,int num);
void listaContato(Contato *c,int num);
void atualizarNumero(Contato *c,int num);
void liberar(Contato *c, int num);
int removerContato(Contato *c, int num);