/* Implemente uma função que receba um vetor de inteiros e seu tamanho e ordene-o. */ 

#include <stdio.h>
#include <stdlib.h>

void ordenador (int vetor[], int MAX)
{
    int aux, i, j;
    
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (vetor [j] > vetor [i])
            {
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor [i] = aux;
            }
        }
    }    
}

int main ()
{
    int MAX = 5;
    int vetor[MAX], i;
    
    for (i = 0; i < MAX; i++)
        scanf ("%d", &vetor[i]);
    
    ordenador (vetor, MAX);
    
    for (i = 0; i < MAX; i++)
        printf ("%d\n", vetor[i]);
    
    return 0;
}
