#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
#include "string.h"

int Contacaracter(char texto[], char a)
{

    int letra = 0;
    int i;

    for(i = 0; i < strlen(texto); i++ )  /* outra maneira e usar s[i]!='\0' */
    {

        if(texto[i]== 'a')
        {

            letra += 1;

        }

    }

    return letra;
}

#endif // FUNCOES_H_INCLUDED
