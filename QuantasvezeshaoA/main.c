#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "funcoes.h"


int main()
{
    char texto[] = "anabela";
    char letra = 'a';
    int num;

    num = Contacaracter(texto,letra);

    printf("A letra %c aparece %d vezes \n",letra,num);
    return 0;
}
