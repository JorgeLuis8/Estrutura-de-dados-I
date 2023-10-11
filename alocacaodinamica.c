#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int *p;
    int a,i;
    a = 10;

    p= (int *)calloc(a,sizeof(int));

    if (!p){
        printf("Error");
        exit;
    }

    for(i = 0 ; i< a;i++){
        p[i] = i+i;
    }

    for (int i = 0; i < a; i++) {
    printf("%d\n", p[i]);
    }

    a = 5;
    p = (int *)realloc(p,a*sizeof(int));


    for (int i = 0; i < a; i++) {
    printf("%d\n", p[i]);
    }
   return 0;
}