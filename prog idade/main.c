#include <stdio.h>
#include <stdlib.h>
#include <math.h>

        int main()
        {

        int idade;
        float preco = 0;

        printf("introduza a idade \n");
        scanf("%d",&idade);
        if (idade <= 14)
        {
            preco=idade*1;
            printf("Socio Junior ");
        }
        else if (idade <= 65)
            {
                preco=idade * 0.5;
                printf("Socio Normal ");
            }
        else
            {
                preco= idade * 0.1;
                printf("Socio Senior ");
            }
            printf("Valor a pagar: %.2f",preco);
        return 0;
        }
