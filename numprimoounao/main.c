#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num=0;
    int i=  1;
    int d=  0;

    printf("introduza o numero que quer saber se e primo\n");
    scanf("%d",&num);

    while(i<=num)
    {
        if(num%i==0)
            d++;
        i++;
    }

    if(d==2)
        printf("\nO numero %d e primo\n",num);

        else
            printf("\nO numero %d nao e primo\n",num);

    return 0;
}
