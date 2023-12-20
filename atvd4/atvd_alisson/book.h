typedef struct book Book;

Book *criar_lista();
Book *inserirLivroOrdenadoCircular(Book* livro);
void imprimir_lista(Book *l);
Book *removerLivroListaCircular(Book *livro); 
int quantidadeLivrosListaCircular(Book *livro); 
int quantidadeLivrosPorAutorListaCircular(Book *livro); 
void liberarListaCircular(Book *livro);