/* Desenvolva um programa que leia um vetor de números reais com 10 elementos, um escalar e imprima o resultado da multiplicação do vetor pelo escalar. O primeiro valor fornecido pelo usuário é o valor do escalar, seguido pelos valores que serão usados para preencher o vetor. 
Utilize 2 casas decimais em suas impressões de valores reais. */


#include <stdio.h>
#define TAM 10

int main()
{
    float vetor [TAM], escalar;
    int i;
    
    scanf ("%f\n", &escalar);
    
    for (i = 0; i < TAM; i++)
        scanf ("%f", &vetor[i]);
    
    for (i = 0; i < TAM; i++) 
        printf ("%.2f\n", escalar * vetor[i]);

    return 0;
}