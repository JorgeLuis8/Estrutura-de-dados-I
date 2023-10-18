#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, i,soma=0, count = 0,max = 0,min = 1000000;
    float media=0;
    int *pointer;

    while (1)
    {
        scanf("%d", &x);

        if (x == -1)
        {
            break;
        }

        count++;
        pointer = (int *)malloc(count * sizeof(int));
         if (!pointer){
        printf("Memory error");
        exit(1);
    }
        for (i = 0; i < count; i++)
        {
            pointer[i] = x;
        }
    }
    for (i = 0; i < count; i++)
    {
        printf("%d\n",pointer[i]) ;
    }

    for (i = 0; i < count; i++)
    {
        soma += pointer[i];
    }
    media = (float) soma/ count;

      for(i = 0; i<count;i++){
        if(pointer[i] > max){
            max = pointer[i];
        }
        if (pointer[i] < min)
        {
            min = pointer[i];
        }
        
    }
    printf("A maior posicao do vetor eh:  %d\n",max);
    printf("A menor posicao do vetor eh:  %d\n",min);


    printf("Quantidade de numeros digitados: %d\n", count);
    printf("A media dos valores do vetor eh: %.2f\n", media);
    return 0;
}