#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int     num     =0;
    int     inum    =1;
    int     i       =0;
    char c;

    do
        {
            printf("Introduza um numero\n");

                if(scanf("%d",&num) != 1)
                    {
                        num=0;
                        while ((c = getchar())!= '\n');
                        system ("CLS");
                    }

        }while(num<=0);

        printf("numeros impares:");

    for ( i=0 ; i<num ; i++ )
        {
            printf("%d ",inum);
            inum +=2;
        }

    return 0;
}
