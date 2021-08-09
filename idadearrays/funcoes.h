#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

float calc_media(int idade[], int num)
{

    float media = 0;
    int total = 0;
    int i;

    for( i=0; i < num; i++)
    {
        total += idade[i];
    }

    media = total/num;
    return media;

}

#endif // FUNCOES_H_INCLUDED
