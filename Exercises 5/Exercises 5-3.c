/* Faça um programa que armazene em um vetor V um total de cinquenta valores reais e calcule a média entre eles. 
Os elementos acima da média devem ser copiados para um vetor chamado V1 e os abaixo da média para um vetor chamado V2. 
O programa deve finalizar com a impressão da média calculada e dos valores armazenados em V1 e V2. */

#include <stdio.h>
#define TAM 50

int main ()
{
    int vetor1 [TAM];
    float vetor2 [TAM];
    float vetor3 [TAM];
    int i, i2, i3;
    float media;
    float soma = 0;
    
    for (i = 0; i < TAM; i++)
    {
        scanf ("%d", &vetor1[i]);
        soma = soma + vetor1[i];
    }

    media = soma / TAM;
    
    printf ("Média: %.1f\n", media);
    
    for (i = 0, i2 = 0; i < TAM; i++)
    {
        if (vetor1[i] > media)
            {
                vetor2[i2] = vetor1[i];
                i2++;
            }
    }  
    
    for (i = 0, i3 = 0; i < TAM; i++)
    {
        if (vetor1[i] < media)
            {
                vetor3[i3] = vetor1 [i];
                i3++;
            }
        
    }      
    
    printf ("V1 = ");
    
        for (i = 0; i < i2; i++)
    {
        printf ("%.1f ", vetor2[i]);
    }
    
    printf ("\nV2 = ");
    
        for (i = 0; i < i3; i++)
    {
        printf ("%.1f ", vetor3[i]);
    }
    
    return 0;
}