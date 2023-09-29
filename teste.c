#include <stdio.h>

int main(){
    int a =10;

    char letras[26];
    int count = 0;
    int i;

    for(i = 97 ; i <=122 ; i++){
        letras[count] = i;
        count++;
    }

    for (i =0 ; i < 26; i++){
        printf("%d == %c\n",letras[i],letras[i]);
    } 


    return 0;
}