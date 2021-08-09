#include <stdio.h>
#include <stdlib.h>
#include "funcaomaior.h"


int main()
{
    int n1,n2,n3;
    int maior = 0;

    printf("Insira 3 numeros para saber qual o maior!\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);

    maiornum(n1,n2, &maior);
    maiornum(maior,n3, &maior);

    printf("O maior dos 3 numeros e %d ",maior);


    return 0;
}
