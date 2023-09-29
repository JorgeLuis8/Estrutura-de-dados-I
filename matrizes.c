#include <stdio.h>

int main(){
    // vetores e strings
    char nome [3][50];
    printf("Qual seu nome? ");
    gets(nome);
    printf("Ola %s\n", nome);

    //vetores e caracteres

    char letras[26];
    int i,count = 0;
    for (i = 97; i <= 122; i++){
        letras[count] = i;
        count++;
    }
    //Imprimindo as letras e seus valores em decimal
    for ( i = 0; i < 26; i++)
    {
        printf("%d == %c\n", letras[i], letras[i]);
    }

    return 0;

}
