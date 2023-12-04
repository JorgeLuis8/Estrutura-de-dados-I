typedef struct livro Livro;

Livro *criar_livros ();
Livro *inserir_livros(Livro *l, char *titulo, char *autor, int ano, int id);
void imprimir_livros(Livro *l, char *autor);
void atualizar_ano_publicacao(Livro *l, int id, int novo_ano);
void quantidade_livros_por_autor(Livro *l);
Livro *remover_livro(Livro *l, int id);
