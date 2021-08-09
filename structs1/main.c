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
    aluno a1;

    printf("Insira o nome do aluno!\n");
    gets(a1.nome); // Ao fazermos o gets ele guarda o nome mesmo com espacos. e assim imprime todo o nome.

    do{
    printf("Insira a nota de ip!\n");
    scanf("%f",&a1.notaip);
    }while(a1.notaip>20||a1.notaip<0);

    do{
    printf("Insira a nota de pw!\n");
    scanf("%f",&a1.notapw);
    }while(a1.notapw>20||a1.notapw<0);

    do{
    printf("Insira a nota de mat!\n");
    scanf("%f",&a1.notamat);
    }while(a1.notamat>20||a1.notamat<0);

    a1.media = (a1.notaip + a1.notapw + a1.notamat) / 3;

    printf("A media do aluno %s e %.2f!\n",a1.nome,a1.media);

    return 0;
}
