#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int idade;
    char sexo;
    float peso;
    float altura;
} individuo;

int main()
{

    individuo a1[30];
    int i, numpessoas=0;
    char c;
    float maxalt=0, minalt=2.0;
    int numhomens, nummulheres;



    do
        {
            printf("Quantos elementos tem o grupo?\n");
            scanf("%d",&numpessoas);
        }while(numpessoas>30||numpessoas<0);

    for(i=0;i<numpessoas;i++)
    {
        while (((c = getchar()) != '\n') && (c != EOF));

        do
        {
        printf("\n Idade da pessoa n%d: ",i+1);
        scanf("%d",&a1[i].idade); // Ao fazermos o gets ele guarda o nome mesmo com espacos. e assim imprime todo o nome.
        }while(a1[i].idade>120||a1[i].idade<0);


        while (((c = getchar()) != '\n') && (c != EOF));

            do
            {
            printf(" Sexo da pessoa n%d (M/F): ",i+1);
            scanf("&s",&a1[i].sexo);
            while (((c = getchar()) != '\n') && (c != EOF));
            }while ((a1[i].sexo != 'M') && (a1[i].sexo != 'm') && (a1[i].sexo != 'F') && (a1[i].sexo != 'f'));


        do
            {
                printf(" Peso da pessoa n%d (em kilos) : ",i+1);
                scanf("%f",&a1[i].peso);
            }while(a1[i].peso>150||a1[i].peso<0);

        do
            {
                printf(" altura da pessoa n%d (em metro): ",i+1);
                scanf("%f",&a1[i].altura);
            }while(a1[i].altura>200||a1[i].altura<0);
    }

    //for
    //if > guarda.

    return 0;
}
