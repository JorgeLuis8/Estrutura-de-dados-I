typedef struct criador Criador;

Criador *criarListaDuplaCriadores();
Criador *cadastrarCriador(Criador *criadores);
Criador *remover(Criador *criadores,int id);//Parcialmenre feita, falta verficar se tem fazendas cadastradas nao � permitido remover criador com fazendas cadastradas
//int buscar(Criador *criadores);
void imprimir(Criador *criadores);
/*
Desenvolva fun�oes para:
- Retornar o patrimonio do criador (esse valor deve sempre estar atualizado)
- Funcao para mostrar cada criador e todos os seus respectivos atributos
- Funcao para liberar a memoria
*/
