/* Desenvolva um programa que preencha uma matriz 6x6. Além disso, o programa deve contar e imprimir, 
como nos exemplos, quantos valores maiores que 10 ela possui. */


#include <stdio.h>
#define M 6

void ler_matriz (float matriz [M][M])
{
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            scanf ("%f", &matriz[i][j]);
}

void compara_matriz (float matriz [M][M])
{
    int m10 = 0;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            if (matriz[i][j] > 10)
                m10++;
            
    printf("Maiores que 10: %d", m10);
}

int main()
{
    float matriz [M][M];
    
    ler_matriz (matriz);
    compara_matriz (matriz);

    return 0;
}
