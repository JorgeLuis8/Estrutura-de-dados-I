/*Dado  um  vetor  de  caracteres  estático,  elabore  um  algoritmo  que  calcule  quantos  caracteres 
diferentes esse vetor possui, além das quantidade de vezes que cada caracteres ocorre. Por exemplo, 
para o vetor "O EXERCICIO E FACIL"”, a estatística mostrada será 'O' = 2, ' '=3, 'E' = 3, 'X' = 1, 'R' = 1, 
'C' = 3, 'I' = 3, 'F' = 1, 'A' = 1, 'L' = 1.*/

#include <stdio.h>
#include <string.h>

int main() {
    char vetor[] = "O EXERCICIO E FACIL";
    int contador[256] = {0}; 
    int i;
    
    for (i = 0; i < strlen(vetor); i++) {
        char caractere = vetor[i];
        contador[caractere]++;
    }

    // Exibe as estatísticas
    for (i = 0; i < 256; i++) {
        if (contador[i] > 0) {
            printf("'%c' = %d\n", i, contador[i]);
        }
    }

    return 0;
}
