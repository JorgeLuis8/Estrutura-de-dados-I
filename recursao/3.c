#include <stdio.h>

void decimal_para_binario(int num){
    if (num > 1){
        decimal_para_binario(num / 2);
    }
    printf("%d",num %2);
}

int main(){
    int numero_decimal;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero_decimal);

    printf("A representacao binaria de %d eh: ", numero_decimal);
    decimal_para_binario(numero_decimal);
    printf("\n");

    return 0;
}
