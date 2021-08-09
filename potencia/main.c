#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
    int inum, iexp;
    double result;

    //pedir numero ao utilizador
    printf("Introduza um numero\n");
    scanf("%d",&inum);

    //pedir potencia ao utilizador
    printf("Introduza o potencia\n");
    scanf("%d",&iexp);

    //fazer o resultado do num^potencia
    result = pow(inum,iexp);  // ATENCAO: funcao pow devolve um double

    // Imprimir o resultado ao utilizador
    printf("o resultado e: %.0f ", result);

    return 0;
}
