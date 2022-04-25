/* Faça um programa que leia do teclado vinte valores inteiros, guarde-os em um vetor e determine qual o menor dos valores lidos. 
O programa deve imprimir na tela o valor e o índice do menor elemento encontrado. */

#include <stdio.h>
#define VALOR 20

int main ()
{
    int valores [VALOR];
    int i;
    int i_menor = 0;
    
    for (i = 0; i < VALOR; i++)
    {
        scanf ("%d", &valores[i]);
    }
    
    for (i = 0; i < VALOR; i++)
    {
        if (valores[i] < valores[i_menor])
        {
            i_menor = i;
        }
    }
    
    printf ("Menor: %d\nÍndice: %d", valores[i_menor], i_menor);
    
    return 0;
    
}
