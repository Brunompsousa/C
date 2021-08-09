#include <stdio.h>
#include <stdlib.h>
#include "funcoes.c"

int main()
{
    int N=0;

    do
    {
        printf("Insira um numero ate 20\n");
        scanf("%d",&N);
    }while(N > 20);



    escrevertabela(N);

    return 0;
}
