#include <stdio.h>
#include "hospital.h"

int main() {
    Fila* filaPadrao = cria_fila();
    Fila* filaPrioritaria = cria_fila();

    enfileirarPaciente(filaPadrao, 1);
    enfileirarPaciente(filaPadrao, 2);
    enfileirarPaciente(filaPrioritaria, 101);
    enfileirarPaciente(filaPadrao, 3);

    printf("Numero de pacientes na fila padrao: %d\n", obterNumeroPacientes(filaPadrao));
    printf("Numero de pacientes na fila prioritaria: %d\n", obterNumeroPacientes(filaPrioritaria));
    printf("Numero total de pacientes: %d\n", obterNumeroTotalPacientes(filaPadrao, filaPrioritaria));

    atenderPacientes(filaPrioritaria, filaPadrao);
    atenderPacientes(filaPrioritaria, filaPadrao);
    atenderPacientes(filaPrioritaria, filaPadrao);


    return 0;
}

