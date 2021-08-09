#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoescalc.h"


int main()
{
    int num;
    int divisores=0;

    printf("Insira o numero para saber quantos divisores tem \n");
    scanf("%d",&num);
    fdivisores(&num,&divisores);
    printf("O numero %d tem %d divisores \n",num,divisores);
    return 0;


}
