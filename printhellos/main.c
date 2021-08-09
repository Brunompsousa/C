#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoes.c"

int main()
{
    int num=0;

    printf("Quantas vezes deseja imprimir ?\n");
    scanf("%d",&num);

    hello(num);

    return 0;
}
