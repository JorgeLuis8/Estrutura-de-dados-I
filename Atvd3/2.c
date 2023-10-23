#include <stdio.h>
#include <stdlib.h>

int imprimenum(int k){
    if(k == 0){
        return 0;
    }
    printf("%d\n",k);
    return imprimenum(k-1);
}

int main (){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    imprimenum(n);
    return 0;
}