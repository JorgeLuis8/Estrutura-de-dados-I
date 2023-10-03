#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz [3] [3];
    int numeros,i,j,x;
    scanf("%d", &x);
    int ocorrencia[x];

    for (i=0;i<x;i++){
        ocorrencia[i] = 0;
    }

    for (i=0; i<200; i++){
        for (j=0; j<100; j++){
            matriz[i][j] = rand()%(x+1);
        }
    }

    for (i=0;i<x;i++){
        for (j=0;j<x;j++){
            ocorrencia[matriz[i][j]]++;
        }
    }
    
    for (i=0;i<x;i++){
        printf("%d ocorre %d vezes\n", i, ocorrencia[i]);
    }


    return 0;
}