/* Escreva uma função que leia os valores n1 e n2 do teclado e imprima o intervalo fechado entre esses dois. 
Exemplo: se os valores lidos forem 5 e 2, a saída deverá ser 5 4 3 2. */


#include <stdio.h>
#include <stdlib.h>

void intervalo ()
{
    int n1, n2, i;
    scanf ("%d %d", &n1, &n2);
    
    if (n1 > n2)
    {
        for (i = n1; i >= n2; i--)
        {
            printf ("%d ", i);
        }
    }
    
    else 
    {
        for (i = n1; i <= n2; i++)
        {
            printf ("%d ",i);
        }
    }
    
}

int main ()
{
    intervalo ();
    
    return 0;
}

