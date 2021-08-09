#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "funcoes.h" // Ficheiro que contem as funções

int main()
{
        // Variaveis
       int z;
       int *n; // array mas sem tamanho
       int i,j;
       int temp;
       char c;
       char showT[250];
       bool verify;


       do
           {
                   sprintf(showT,"quantos numeros deseja ordenar? \n");
                    z=verifica(showT);

           }
        while(z < 2);

        //criar o array com tamanho que o utilizador quer
        n = (int *) malloc(z*sizeof(int));
      //n = (int *) calloc(z, sizeof(int));


    for (i=0;i < z;i++)
    {
            sprintf(showT, "Insira um numero (%d/%d)\n",i+1,z); // O sprintf vai passar o texto para o array, showT
            n[i]=verifica(showT);                          // Envia a string onde esta o texto do printf
    }

    for( i=0 ;i < z-1 ; i++)
    {
        for( j=i+1 ; i < z ;i++)
        {
            if(n[i] < n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }

    printf("Numeros ordenados\n");

    for( i=0 ;i < z ; i++)
     {
         printf("%d ",n[i]);
     }

     free(n);

     return 0;
}
