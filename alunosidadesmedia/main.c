#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,alunos,idade;
    float mediaidades=0;

    printf("Quantos alunos tem a turma\n");
    scanf("%d",&alunos);

    for(i=1;i<=alunos;i++)
    {
        printf("idade do aluno numero %d\n",i);
        scanf("%d",&idade);
        mediaidades += idade;
    }
        mediaidades = mediaidades/alunos;
        printf("A media da idade dos %d alunos e: %.2f\n",alunos,mediaidades);

    return 0;
}
