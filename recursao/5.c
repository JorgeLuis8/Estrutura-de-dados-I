#include <stdio.h>

int multiplicacao(int n1, int n2){
    if (n1 == 0 && n2 == 0){
        return 0;
    }
    if (n2 == 1){
        return n1;
    }
    return n1 + multiplicacao(n1,n2-1);
}


int main(){
    int n = 5;
    int n1 = 5;
    printf("%d", multiplicacao(n,n1));
    return 0;
}