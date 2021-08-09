
/* BIBLIOTECAS */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// programa que peca idade e categoria (a b ou c) e o salario bruto
// a e b descontam 10% e os c 25%
// premios : cat A e mais de 50 anos + 100euros
// B +200euros
// c + salario bruto inferior a 1000 + 300

/* MAIN */
        int main()
        {
            // declaração de variaveis
            float sbruto, sbase;
            int idade;
            char catg;

            // Pede a categoria do empregado
            printf("Qual a sua categoria? (A,B ou C)\n");
            scanf("%c",&catg);

            // Pede a idade do empregado
            do
                {
            printf("Qual a sua idade?\n");
            scanf("%d",&idade);
                } while(idade < 0 || idade > 100);

            //pede o salario bruto
            printf("Qual o seu salario bruto?\n");
            scanf("%f",&sbruto);

            //Faz o desconto no salario bruto
            switch(catg)
            {

                case('A'):
                case('a'):
                    sbase = sbruto - sbruto * 0.1;
                    if(idade > 50)
                        {
                            sbase = sbase + 100;
                        }
                    break;

                case('B'):
                case('b'):
                    sbase = sbruto - sbruto * 0.1 + 200;
                    break;

                case('C'):
                case('c'):
                    sbase = sbruto - sbruto * 0.25;
                    if(sbruto < 1000)
                        {
                            sbase = sbase + 300;
                        }
                    break;

            default:
                printf("categoria invalida");

             }
             printf("Salario Base: %.2f",sbase);
             return(0);
        }
