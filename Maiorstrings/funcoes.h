#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

int calc_maior(int nums[], int num)
{

    int maior = 0;
    int i;

    maior = nums[i];

    for( i=1; i < num; i++)
    {
        if(maior < nums[i])
        {

         maior = nums[i];

        }
    }

    return maior;

}

#endif // FUNCOES_H_INCLUDED
