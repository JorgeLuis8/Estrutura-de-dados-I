typedef struct paciente Paciente;

typedef struct No No;

typedef struct  fila Fila;

Fila* cria_fila();
int filaVazia(const Fila* fila);
void enfileirarPaciente(Fila* fila, int numeroIdentificacao);
Paciente desenfileirarPaciente(Fila* fila);
int obterNumeroPacientes(const Fila* fila);
int obterNumeroTotalPacientes(const Fila* filaPadrao, const Fila* filaPrioritaria);
void atenderPacientes(Fila* filaPrioritaria, Fila* filaPadrao);
