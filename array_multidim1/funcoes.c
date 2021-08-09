void escrevertabela(int n)
{
    int tabela[20][20];
    int i   =   0;
    int i2  =   0;


    for(i=0;i<n;i++)
        for(i2=0;i2<n;i2++)
            tabela[i][i2]=i+i2+1;



    for(i=0;i<n;i++)
    {

       for(i2=0;i2<n;i2++)
       {

           printf("%2.d",tabela[i][i2]);
            if(i2 < n )
            {
                printf(" ");
            }
       }

        printf("\n");

    }

}
