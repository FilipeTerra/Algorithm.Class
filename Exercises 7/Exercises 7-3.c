/* Faça um programa principal que crie duas matrizes quadradas, com 4 linhas e 4 colunas, para armazenar valores reais. 
A primeira matriz deve ser preenchida com valores informados pelo usuário. 
Desenvolva as funções abaixo para armazenar na segunda matriz, o conteúdo solicitado relativo à primeira matriz.

1- Transposta (float mat1[4][4], float mat2[4][4]): a segunda matriz recebe a transposta da primeira (linhas e colunas invertidas).

2- Diagonal (float mat1[4][4], float mat2[4][4]): a diagonal principal de mat2 recebe a diagonal principal de mat1. Os demais elementos da segunda matriz devem ser nulos.

3- Soma (float mat1[4][4], float mat2[4][4]): a segunda matriz recebe a soma da primeira matriz com ela mesma.

4- Media (float mat1[4][4], float mat2[4][4]): a média dos valores de cada linha da primeira matriz é adicionada à todas as posições da respectiva linha da segunda matriz. Exemplo: a média dos valores da linha 0 de mat1 é adicionada na posição [0][0], [0][1], [0][2] e [0][3] de mat2.

5- maior_e_menor (float mat1[4][4], float mat2[4][4]): as linhas pares da segunda matriz são preenchidas com o maior elemento da primeira, da matriz ao passo que as linhas ímpares recebem o menor elemento de mat1.

6- acima_da_media (float mat1[4][4], float mat2[4][4]): mat2 recebe apenas os elementos de mat1 cujo valor está acima da média dos valores da primeira matriz. As demais posições não preenchidas de mat2, se existirem, devem receber 0.

7- ordenacao (float mat1[4][4], float mat2[4][4]): a segunda matriz recebe, posição a posição, os elementos da primeira matriz ordenados crescentemente. */

#include <stdio.h>
#include <stdlib.h>
#define M 4

void le_matriz (float matriz [M][M])
{
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            scanf ("%f", &matriz[i][j]);
}

void matriz_transposta (float m1 [M][M], float m2 [M][M])
{
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            m2 [i][j] = m1 [j][i];
    
    printf ("Transposta:\n");
        
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
            printf ("%.6f ", m2[i][j]);
    
    printf ("\n");
    }
}

void diagonal_princ (float m1 [M][M], float m2 [M][M])
{
    printf ("Diagonal:\n");
    
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
        {
            if (i == j)
                m2[i][j] = m1[i][j];
            
            else 
                m2[i][j] = 0;
        }
        
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
            printf ("%.6f ", m2[i][j]);
    
    printf ("\n");
    }
}

void soma (float m1 [M][M])
{
    printf ("Soma:\n");
    
    float soma = 0;
    
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
            printf ("%.6f ", soma = m1 [i][j] + m1 [i][j]);
            
        printf ("\n");
    }
}

void media (float m1 [M][M], float m2 [M][M])
{
    printf ("Media:\n");
    
    float soma = 0;
    
    for (int j = 0; j < M; j++)
        soma = soma + m1[0][j];
    
    for (int j = 0; j < M; j++)
    {
        m2 [0][j] = soma / M;
        printf ("%.6f ", m2[0][j]);
    }
    
    soma = 0;
    printf ("\n");

    for (int j = 0; j < M; j++)
        soma = soma + m1[1][j];
    
    for (int j = 0; j < M; j++)
    {
        m2 [1][j] = soma / M;
        printf ("%.6f ", m2[1][j]);
    }

    soma = 0;
    printf ("\n");

    for (int j = 0; j < M; j++)
        soma = soma + m1[2][j];
    
    for (int j = 0; j < M; j++)
    {
        m2 [2][j] = soma / M;
        printf ("%.6f ", m2[2][j]);
    }  

    soma = 0;
    printf ("\n");

    for (int j = 0; j < M; j++)
        soma = soma + m1[3][j];
    
    for (int j = 0; j < M; j++)
    {
        m2 [3][j] = soma / M;
        printf ("%.6f ", m2[3][j]);
    }
    
    printf ("\n");
}

float maior_num (float m1 [M][M])
{
    float maior_n;
    
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
        {
            if (m1[i][j] > maior_n)
                maior_n = m1[i][j];
        }
    
    return maior_n;
}

float menor_num(float m1 [M][M])
{
    float menor_n; 
    
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
        {
            if (m1 [i][j] < menor_n)
                menor_n = m1[i][j];
        }
        
    return menor_n;
    }

void maior_menor (float m1 [M][M], float m2 [M][M])
{
    printf ("Maior e Menor:\n");
    
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i % 2 != 0)
                m2[i][j] = menor_num(m1);
                
            else
                m2[i][j] = maior_num(m1);
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
            printf ("%.6f ", m2[i][j]);
     
    printf ("\n");
    }
}

void acima_media (float m1 [M][M], float m2 [M][M])
{
    printf ("Acima da Media:\n");
    
    float soma = 0;
    
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
            soma = soma + m1[i][j];
    } 
    
    int media =  soma / (M * M);

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (m1[i][j] > media)
                m2[i][j] = m1[i][j];
                
            else
                m2[i][j] = 0;
        }
    }
    
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
            printf ("%.6f ", m2[i][j]);
     
    printf ("\n");
    }
}

void ordenacao (float m1[M][M], float m2[M][M])
{
    printf ("Ordenacao:\n");

        for (int i = 0; i < M; i++)
            for (int j = 0; j < M; j++)
                for (int l = 0; l < M; l++)
                    for (int c = 0; c < M; c++) 
                    {
                        if (m1[i][j] < m1[l][c]) 
                        {
                            int aux = m1[i][j];
                            m1[i][j] = m1[l][c];
                            m1[l][c] = aux;
                        }
                    }
                    
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            m2[i][j] = m1[i][j];
                    
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
            printf ("%.6f ", m2[i][j]);
     
    printf ("\n");
    }
}

int main()
{
    float matriz [M][M];
    float matriz_aux [M][M];
    
    le_matriz (matriz);
    
    matriz_transposta (matriz, matriz_aux);
    diagonal_princ (matriz, matriz_aux);
    soma (matriz);
    media (matriz, matriz_aux);
    maior_menor (matriz, matriz_aux);
    acima_media (matriz, matriz_aux);
    ordenacao (matriz, matriz_aux);
    
    return 0;
}
