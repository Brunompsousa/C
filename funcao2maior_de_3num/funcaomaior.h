#ifndef FUNCAOMAIOR_H_INCLUDED
#define FUNCAOMAIOR_H_INCLUDED

void maiornum(int num1,int num2,int *maior)
{
    if(num1 > num2)
    {
        *maior=num1;
    }
        else
        {
            *maior = num2;
        }
}

#endif // FUNCAOMAIOR_H_INCLUDED
