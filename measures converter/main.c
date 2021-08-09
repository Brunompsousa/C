#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoes.c"

int main()
{
    float metros;

    printf("insira a medida em metros!\n");
    scanf("%f",&metros);

    printf("%.2f metros equivale a:\n",metros);

    metros=convert(metros);
    printf("%.2f dm\n",metros);

    metros=convert(metros);
    printf("%.2f cm\n",metros);

    metros=convert(metros);
    printf("%.2f mm\n",metros);

    return 0;
}
