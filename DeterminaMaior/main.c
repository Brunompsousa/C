#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1,num2;

    printf("Introduza o primeiro numero\n");
    scanf("%d",&num1);

    printf("Introduza o segundo numero\n");
    scanf("%d",&num2);

    if(num1>num2)
        {
            printf("O primeiro numero e maior que o segundo\n");
        }else if(num1<num2)
            {
                printf("O segundo numero e maior que o primeiro\n");
            }else
                {
                    printf("Ambos os numeros sao iguais\n");
                }
    return 0;
}
