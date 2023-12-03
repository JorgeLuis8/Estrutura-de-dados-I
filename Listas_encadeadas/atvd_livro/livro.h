typedef struct livro Livro;

Livro* criar_lista();
Livro *inserir_livro(Livro *l, char *nome, char *autor, int ano, int id);
Livro *remover_livro(Livro *l, int id);
Livro *listar_livros_por_autor(Livro *l, char *autor);
void atualizar_ano_publicacao(Livro *l, int id, int novo_ano);
void quantidade_livros_por_autor(Livro *l);
