#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaracao de variaveis
    float fgcelsius, fgfahren;

    do
    {

    //pedir temperatura em graus celcius
    printf("Qual a temperatura? \n");
    scanf("%f",&fgcelsius);

    if(fgcelsius < -273.15)
        {
            printf("A temperatura introduzida nao e valida. Tera de ser superior a 273.15.\n");
        }
    }
    while (fgcelsius < -273.15);
     // calculo dos graus em fahrenheit
     fgfahren = 1.8 * fgcelsius + 32;

     // mostrar os graus em fahrenheit
     printf("A temperatura em fahrenheit sao %.2f\n",fgfahren);

    return 0;
}
