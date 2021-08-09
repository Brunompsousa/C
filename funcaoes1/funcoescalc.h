#ifndef FUNCOESCALC_H_INCLUDED
#define FUNCOESCALC_H_INCLUDED

void fdivisores(int *a,int *d)
{
    int i;
    for(i=1;i<=*a;i++)
    {
        if(*a%i==0)
        {
            (*d)++;
        }

    }
}

#endif // FUNCOESCALC_H_INCLUDED
