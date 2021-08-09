#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int j;
    int z;

    printf("numero de linhas\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%2d",j+i);
            if(j<n)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
