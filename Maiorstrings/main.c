#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "funcoes.h"

#define NUM 20


int main()
{
    int i = 0;
    int nums[NUM];
    int maior = 0;

    for( i=0; i < NUM; i++ )
    {

        printf("Insira um numero [%d/20] \n", i+1);
        scanf("%d", &nums[i]);

    }

    maior = calc_maior(nums,NUM);

    printf("O maior numero e  %d \n", maior);

    return 0;
}
