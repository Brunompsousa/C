#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "funcoes.h"

#define NUM 10


int main()
{
    int i = 0;
    int idades[NUM];
    float media = 0;

    for( i=0; i < NUM; i++ )
    {

        printf("Insira a idade do aluno nº %d \n", i+1);
        scanf("%d", &idades[i]);

    }

    media = calc_media(idades,NUM);

    printf("A media das idade e %.2f \n", media);

    return 0;
}
