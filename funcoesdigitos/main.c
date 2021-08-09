#include <stdio.h>
#include <stdlib.h>
#include "funcao dig.h"


int main()
{
    int num;
    int dig=0;

    printf("insira um numero para saber quantos digitos tem\n");
    scanf("%d",&num);

    digitos(num,&dig);

    printf("o numero tem %d digitos\n",dig);

    return 0;
}
