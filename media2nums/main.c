#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoes.c"

int main()
{
    float n1;
    float n2;
    float media   =   0;

    printf("Insira 2 numeros para calcular a media (1/2)\n");
    scanf("%f",&n1);

    printf("Insira 2 numeros para calcular a media (2/2)\n");
    scanf("%f",&n2);

    media = fmedia(n1,n2);

    printf("A media dos numeros e %.2f \n",media);

    return 0;
}
