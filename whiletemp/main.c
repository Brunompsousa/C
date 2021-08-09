#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char opcao;
    int tmax;
    int tmin;
    float tmedia=0;
    int temp;
    int cont=0;

   do
   {
        printf("introduza a temperatura\n");
        scanf("%d",&temp);

        if(tmax<temp)
            tmax=temp;
        if(tmin>temp)
            tmin=temp;
        tmedia += temp;
        cont++;

        printf("pretende continuar(s/n)?\n");
        scanf("%c",&opcao);

    }while(opcao == 's');

    printf("Maxima: %d",tmax);
    printf("Minima: %d",tmin);
    printf("Media: %d",tmedia/cont);
    //mostra max,min e media;

    return 0;
}
