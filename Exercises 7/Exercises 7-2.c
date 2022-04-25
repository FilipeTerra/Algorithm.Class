/* Elabore um algoritmo que, dadas duas matrizes de números inteiros A e B mxm tal que m=3, 
calcule o produto das duas, ou seja, A x B. Para isso, faça o que se pede:

Crie uma função “multlc” que receba as matrizes A e B, uma linha i e uma coluna j e 
retorne um valor inteiro seguindo a seguinte fórmula: .
Crie outra função que receba três matrizes  A,  B e R, e utilize a função anterior (1) para calcular o 
produto das matrizes A,  B e armazená-lo em  R. O cálculo de cada elemento de R é dado por;

Crie a função principal que declare três matrizes A, B e R, leia as matrizes A e B, 
chame a função do item (2) e imprima a matriz R. */

#include <stdio.h>
#define M 3

int multlc (int m1 [M][M], int m2 [M][M], int lin, int col)
{
     int soma = 0;
     
     for (int k = 0; k < 3; k++)
         soma = soma + m1[lin][k] * m2[k][col];
    
     return soma;    
}

void produto_matrizes (int m1 [M][M], int m2 [M][M], int mR [M][M])
{
    for (int i = 0; i < M; i++)
        for (int j = 0; j < 3; j++)
            mR[i][j] = multlc (m1, m2, i, j);    
}

void le_matriz (int matriz [M][M])
{
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            scanf ("%d", &matriz[i][j]);
}

void imprime_matriz (int matriz [M][M])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", matriz[i][j]);

    printf("\n");
    }

}

int main() 
{
    int m1 [M][M];
    int m2 [M][M];
    int m3 [M][M];
    
    le_matriz (m1);
    le_matriz (m2);
    
    produto_matrizes (m1, m2, m3);
    
    imprime_matriz (m3);
    
    return 0;
}