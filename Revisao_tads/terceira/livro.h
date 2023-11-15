typedef struct livro Livro;
typedef struct palavras Palavras;
Livro *atribuir(Livro *l,int num,int qtd_livro);
void imprimir(Livro * l,int num);
void adicionarPalavra(Livro * l,int num);
void buscarPalavra(Livro * l,int num);
void liberar(Livro * l);
void buscarAutor(Livro * l,int num);
void remover(Livro * l,int num);

