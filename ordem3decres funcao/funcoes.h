#include <stdbool.h>

// Funcao de verificacao de dados introduzidos
int verifica (const char *Textoamostrar)
{
    // Variaveis
    int n;
    bool v;
    char c;

    do
    {
        v=1;                                // Mete a verifica��o como verdadeira
        printf("%s",Textoamostrar);         // Imprime uma string que vem do main e � guardada no Textoamostrar

        if(scanf("%d",&n)!= 1)              // Verifica se os dados s�o validos
            {
                v=0;                        // Se verificar que nao � numero, ele mete o verificador a dizer que n�o � valido.
                while ((c = getchar())!= '\n');
            }
        else                                // Se for valido, mete a valida��o certa
            v=1;

    }while (v != 1);                        // Nao aceita ate que algo valido seja inserido

    return(n);                              // Retorna o valor valido que o utilizador inseriu
}


