#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{

    int num;

    do
    {

        printf("Que tabuada deseja ver\n");
        scanf("%d",&num);
        printf("\n");

    }while((num < 1) ||(num > 10));

    tabuada(num);

    return 0;
}
