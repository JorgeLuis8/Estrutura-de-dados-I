#include <stdio.h>
#include <stdlib.h>

int main(){
    char *pointer;
    int strtam,i;
    

    printf("Informe o tamanho da sua string: ");
    scanf("%d",&strtam);

    pointer = (char *) malloc((strtam + 1)*sizeof(char));

    if (!pointer)
    {
        printf("Memory error");
    }

    printf("Informe sua string: ");
    getchar();
    fgets(pointer,strtam,stdin);

    for (i = 0; pointer[i] != '\0'; i++){
        printf("%c",pointer[i]);
    }

   
   

    return 0;
}