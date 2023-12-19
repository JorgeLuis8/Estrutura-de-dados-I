typedef struct livro Livro;

Livro *criar_lista();
Livro *inserir_ordenado(Livro* livro);
void imprimir_lista(Livro *l);
Livro *removerLivroListaCircular(Livro *livro); 
int quantidadeLivrosListaCircular(Livro *livro); 
int quantidadeLivrosPorAutorListaCircular(Livro *livro); 
void liberarListaCircular(Livro *livro);