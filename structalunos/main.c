#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char nome[100];
    float notaip;
    float notapw;
    float notamat;
    float media;
} aluno;


int main()
{
    aluno a1[30];
    int i, numalunos=0;
    char c;

    do
        {
            printf("Quantos alunos sao no total?\n");
            scanf("%d",&numalunos);
        }while(numalunos>30||numalunos<0);




    for(i=0;i<numalunos;i++)
    {
        while (((c = getchar()) != '\n') && (c != EOF));

        printf("\n Insira o nome do aluno: ");
        gets(a1[i].nome); // Ao fazermos o gets ele guarda o nome mesmo com espacos. e assim imprime todo o nome.

        do
            {
                printf(" Insira a nota de ip: ");
                scanf("%f",&a1[i].notaip);
            }while(a1[i].notaip>20||a1[i].notaip<0);

        do
            {
                printf(" Insira a nota de pw: ");
                scanf("%f",&a1[i].notapw);
            }while(a1[i].notapw>20||a1[i].notapw<0);

        do
            {
                printf(" Insira a nota de mat: ");
                scanf("%f",&a1[i].notamat);
            }while(a1[i].notamat>20||a1[i].notamat<0);

        a1[i].media = (a1[i].notaip + a1[i].notapw + a1[i].notamat) / 3;

    }

    printf("\n");

    for(i=0;i<numalunos;i++)
        printf("\n A media do aluno %s e %.2f!\n",a1[i].nome,a1[i].media);

    return 0;
}
