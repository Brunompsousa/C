#include <stdio.h>
#include <stdlib.h>
#include "funcaotabela.c"

int main()
{
    int ncol;
    int nlinhas;

    printf("Insira o numero de linhas \n");
    scanf("%d",&nlinhas);
    printf("Insira o numero de colunas \n");
    scanf("%d",&ncol);

    escrevertabela(ncol,nlinhas);

    return 0;
}
