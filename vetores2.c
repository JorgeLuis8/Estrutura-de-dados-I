#include <stdio.h>

int main(){
    //vetors de inteiros
    int numeros[10];
    numeros[0]= 1;
    numeros[1]= 3;
    numeros[2]= 5;
    numeros[3]= 7;
    numeros[4]= 9;

    //vetores e reais
    float valores [5];
    int i;

    for ( i = 0; i < 5; i++){
        valores[i] = (float) numeros[i] / (float) 2; 
    }
    
    for (i = 4; i >= 0 ; i--){
        printf("%f\n", valores[i]);
    }
    

    return 0;
}