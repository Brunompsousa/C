#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeros[100];
    int n,i;
    char a;

    do
    {
        printf("Quantos numeros deseja introduzir? (max. 100):");
        scanf("%d",&n);
    }while(n<0 && n>100);


    for(i=0;i<n;i++)
    {
        printf("Introduza o numero (%d/%d):",i+1,n);
        scanf("%d",&numeros[i]);
    }

        FILE *jesus;
        jesus = fopen("jesus.dat","wb");
            if (jesus == NULL)
            {
                printf("Erro, Jesus não existe, Desculpa.");
                return -1;
            }

    fwrite(a,sizeof(int),n,jesus);

    fclose(jesus);

    return 0;
}
