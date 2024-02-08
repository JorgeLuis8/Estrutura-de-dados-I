typedef struct fazenda Fazenda;
typedef struct endereco Endereco;

Fazenda *criarListaEncadeadaCircularFazendas();
Fazenda *cadastrarFazenda(Fazenda *fazendas);
//Fazenda *remover(Fazenda *fazendas, int id);//nao permitir remover fazenda se houver animais cadastrados
//int buscar(Fazenda *fazendas);

/*
Desenvolva funcoes que, dado uma FAZENDA, informar:
- Quantidade de animais por sexo;
- Peso total em arroba (isto �, a cada 15 KG)
- Valor total da fazenda considerando o pre�o da arroba de R$ 235
- lista de animais por tipo de status
- Funcao para liberar a memoria
*/
