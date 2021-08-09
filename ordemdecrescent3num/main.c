#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
       int n[4];
       int i;
       char c;
       bool verify;

    for (i=1;i<4;i++)
    {

        do
        {
            printf("Insira um numero (%d/3)\n",i);

                if(scanf("%d",&n[i]) != 1)
                    {
                        n[i]='a';
                        verify=0;
                        while ((c = getchar())!= '\n');
                    }
                else
                        verify=1;

        }while (verify != 1);
    }

    if (n[1] > n[2])

        if (n[2] > n[3])
            printf("%d %d %d\n", n[1], n[2], n[3]);

        else

            if (n[1] > n[3])
                printf("%d %d %d\n", n[1], n[3], n[2]);

            else
                printf("%d %d %d\n", n[3], n[1], n[2]);
    else

        if (n[2] > n[3])

             if (n[1] > n[3])
                printf("%d %d %d\n", n[2], n[1], n[3]);

             else
                printf("%d %d %d\n", n[2], n[3], n[1]);

        else printf("%d %d %d\n", n[3] ,n[2], n[1]);

     return 0;
}
