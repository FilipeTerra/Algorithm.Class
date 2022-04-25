/* Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores elementos entre as primeiras. */


#include <stdio.h>
#define LIN 4
#define COL 4

void ler_matriz (float matriz [LIN][COL])
{
    for (int i = 0; i < LIN; i++)
        for (int j = 0; j < COL; j++)
            scanf("%f", &matriz[i][j]);
}

void compara_matriz (float matriz1 [LIN][COL], float matriz2 [LIN][COL])
{
    float matriz3[LIN][COL];
    
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if(matriz1[i][j] >= matriz2[i][j])
                matriz3[i][j] = matriz1[i][j];
                
            else
                matriz3[i][j] = matriz2[i][j];
        }
    }
    
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
            printf("%.2f ", matriz3[i][j]);
            
        printf("\n");
    }
}

int main()
{
    float matriz1 [LIN][COL];
    float matriz2 [LIN][COL];
    
    ler_matriz (matriz1);
    ler_matriz (matriz2);
    compara_matriz (matriz1, matriz2);

    return 0;
}

