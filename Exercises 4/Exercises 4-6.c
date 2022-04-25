/* Escreva uma função que leia 6 números reais e imprima quantos são positivos e a média dos valores positivos. 
Caso nenhum valor positivo seja lido, imprima a mensagem "Nao foram informados numeros positivos".
Escreva uma função principal (main) que chame a função anterior. */

#include <stdio.h>

void numeros_positivos ()
{
    int cont = 0;
    float s = 0;
    int np = 0;
    float a;
    
    while (cont < 6)
    {
        scanf ("%f", &a);
        
        if (a > 0)
        {
            s = s + a;
            
            np++;
        }
        
        cont++;
    }
    
    if (np == 0)
    {
        printf ("Nao foram informados numeros positivos");        
    }

    else 
    {
        printf ("%d numeros sao positivos e a media e %.2f", np, s / np);        
    }

}

int main ()
{
    
    numeros_positivos ();
    
    return 0;
}
