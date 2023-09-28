#include <stdio.h>

int main (){  
    char letras[26];
    int count = 0;
    int i = 97;

    for (i ; i <= 122; i++){
        letras[count] = i;
        count++;
    } 

    for (i = 0; i < 26; i++){
        printf("%d == %c\n", letras[i], letras[i]);
    }

 

    return 0;
}