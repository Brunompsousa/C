#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia, mes, ano;
} datanasc;

typedef struct{
    char nome[100];
    float altura;
    datanasc birthday;
}individuo;


int main()
{
    individuo ind[100];
    int i,n;

    do{
    printf("De quantas pessoas deseja inserir os dados? (1 a 100)");
    scanf("%d",&n);
    }while((n<=0)||(n>100));

    for(i=0;i<n;i++)
    {
        printf("Nome da pessoa n%d",i+1);
        scanf("%s",&ind[i].nome);

        do{
        printf("Altura da pessoa n%d",i+1);
        scanf("%f",&ind[i].altura);
        }while((n<=0)||(n>2.50));

        do{
        printf("Mes nascimento da pessoa n%d",i+1);
        scanf("%d",&ind[i].birthday.mes);
        }while((n<=0)||(n>12));

        if(ind[i].birthday.mes==2){
            do{
            printf("Dia nascimento da pessoa n%d",i+1);
            scanf("%d",&ind[i].birthday.dia);
            }while((n<=0)||(n>28));
        }

        do{
        printf("Ano nascimento da pessoa n%d",i+1);
        scanf("%d",&ind[i].birthday.ano);
        }while((n<=1900)||(n>2050));

        i++;

    }
return 0;
}
