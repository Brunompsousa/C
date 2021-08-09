#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int scores[99]; // scores of players
    char names[99][99];
    char c; // names of players
    int playernum,i=1,is=1,op,wp;

    // Inicias scores a 0's
    do
        {
            scores[is] = 0;
            is++;
        }
            while(is < 99);

    //Inicio do Programa
    printf("Welcome to Score Register\n\n");
        do
        {
           // do{
                // Introducao de numero de jogadores
        printf("How many players? (2 - 10)\n");
            if(scanf("%d",&playernum) != 1)
                {
                    playernum=0;
                    while ((c = getchar())!= '\n');
                    system ("CLS");
                }

        }while (playernum < 2);
   // inicio do programa
    do
        {

            printf("Name of player %d?\n",i);
            scanf("%c",&names[i]);
            i++;

        }while(i <= playernum);

    system("CLS");
    i=1;


        // menu de opcoes
    do
    {
        // mostra a lista de jogadores
        printf("Players:\n");
            while(i <= playernum)
                {
                    printf("Jogador numero %d - %c Score: %d\n",i,names[i],scores[i]);
                    i++;
                }
            i=1;

        printf("\n What you want to do? \n 1 - Increase score \n 2 - Decrease score \n 5 - Exit \n");
        scanf("%d",&op);

        switch (op)
        {
        case(1):
            printf("Winner player? \n");
            scanf("%d",&wp);
            scores[wp]++;
            system("CLS");
            break;

        case(2):
            printf("Bad point? \n");
            scanf("%d",&wp);
            scores[wp]--;
            system("CLS");
            break;

        case(5):
            return 0;

        default:
            {
                printf("Invalid option\n");
                system("CLS");
            }

        }
    }
        while(op > 1 || op < 5);

    return 0;
}
