#include <stdio.h>
#include <stdlib.h>

int main(){
    char *pointer;
    int strtam;
    

    printf("Informe o tamanho da sua string: ");
    scanf("%d",&strtam);

    pointer = (char *) malloc(strtam*sizeof(char));

    if (!pointer)
    {
        printf("Memory error");
    }
    
    printf("Informe sua string: ");
    scanf("%s",pointer);

    printf("%s\n",pointer);
   
   

    return 0;
}