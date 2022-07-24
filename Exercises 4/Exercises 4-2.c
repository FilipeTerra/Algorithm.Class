/* Escreva uma função que leia os valores n1 e n2 e imprima o intervalo fechado entre esses dois valores 
sempre do menor para o maior. Faça também um programa (main) para chamar essa função. */

#include <stdio.h>

void intervalo (int a, int b)
{
    int cont = 0;
    
    while (a > b)
    {
        printf ("%d ", b + cont);
        cont ++;
        
        if (b + cont == a + 1)
        {
            break;
        }
    }
    
    while (b > a)
    {
        printf ("%d ", a + cont);
        cont++;
        
        if (a + cont == b + 1)
        {
            break;
        }        
    }
}

int main ()
{
    int n1, n2;
    scanf ("%d %d", &n1, &n2);
    
    intervalo (n1, n2);
    
    return 0;
}