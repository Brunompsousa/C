#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;

   do
    {
        printf("Introduza um numero para saber a que dia da semana corresponde\n");
        scanf("%d",&n);

    }while(n<1 || n>7);

   switch (n)
    {
        case (1):
            printf("Domingo\n");
            break;

        case (2):
            printf("Segunda-Feira\n");
            break;

        case (3):
            printf("Ter�a-Feira\n");
            break;

        case (4):
            printf("Quarta-Feira\n");
            break;

        case (5):
            printf("Quinta-Feira\n");
            break;

        case (6):
            printf("Sexta-Feira\n");
            break;

        case (7):
            printf("S�bado\n");
            break;

            default:
                printf("A opc�o n�o � valida\n");
    }

    return 0;
}
