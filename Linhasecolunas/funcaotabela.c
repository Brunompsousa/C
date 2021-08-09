void escrevertabela(int colunas,int linhas)
{
    int i   =   0;
    int i2  =   0;

    for(i=0;i<linhas;i++)
    {

       for(i2=0;i2<colunas;i2++)
       {

           printf("*");
            if(i2 < colunas )
            {
                printf(" ");
            }
       }

        printf("\n");

    }

}
