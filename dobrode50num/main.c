#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,d,i,opcao;

    printf("Introduza com que ciclo quer\n1-for\n2-do...while\n3-while...\n");
    scanf("%d",&opcao);

switch(opcao)
{
    case 1:
    for(i=1;i<=50;i++)
    {
        printf("Introduza o numero\n");
        scanf("%d",&n);
        d=n*2;
        printf("O dobro de %d e %d \n\n",n,d);
    }
    break;
    case 2:
        do
        {
            printf("Introduza o numero\n");
            scanf("%d",&n);
            d=n*2;
            printf("O dobro de %d e %d \n\n",n,d);
            i++;
        }
        while(i<=50);

        break;
    case 3:
        while(i<=50)
        {
            printf("Introduza o numero\n");
            scanf("%d",&n);
            d=n*2;
            printf("O dobro de %d e %d \n\n",n,d);
            i++;
        }

        break;

        default: printf("opcao invalida\n");
}

    return 0;
}
