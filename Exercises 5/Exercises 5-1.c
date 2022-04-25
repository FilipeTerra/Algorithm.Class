/* Faça um programa que crie três vetores de cinco posições inteiras, 
preencha dois deles com valores lidos do teclado e, ao final, preencha o terceiro vetor armazenando, 
em cada índice, a soma dos elementos de mesmo índice dos outros vetores. */

#include <stdio.h>
#define TAMANHO 5

int main ()
{
    int vetor1 [TAMANHO];
    int vetor2 [TAMANHO];
    int vetor3 [TAMANHO];
    int c;
    
    for (c = 0; c < TAMANHO; c++)
    {
        scanf ("%d", &vetor1[c]);
    }

    for (c = 0; c < TAMANHO; c++)
    {
        scanf ("%d", &vetor2[c]);
    }
    
    for (c = 0; c < TAMANHO; c++)
    {
        vetor3[c] = vetor1[c] + vetor2[c];
    }

    for (c = 0; c < TAMANHO; c++)
    {
        printf ("%d ", vetor3[c]);   
    }
    printf ("\n");
    
    return 0;
}
