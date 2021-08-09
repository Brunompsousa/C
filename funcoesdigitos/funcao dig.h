#ifndef FUNCAO_DIG_H_INCLUDED
#define FUNCAO_DIG_H_INCLUDED

void digitos(int num,int *div)
{
    int a;
    a=num;
    do
    {
        a = a/10;
        (*div)++;

    }while(a!=0);

}


#endif // FUNCAO_DIG_H_INCLUDED
