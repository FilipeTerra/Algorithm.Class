/* Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro uma matriz de valores reais quadrada de dimensão três e faça a leitura desta.
Escreva uma função que receba como parâmetro duas matrizes de valores reais quadradas de dimensão três e imprima na tela a soma destas. 
As impressões devem ser feitas utilizando 1 casa decimal.
Escreva uma função principal (main) para chamar as funções desenvolvidas nos itens anteriores. */

#include <stdio.h>
#define TAM 3

void le_matriz (int matriz [TAM] [TAM])
{
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            scanf ("%d", &matriz[i][j]);
}

void soma_matrizes (int m1 [TAM][TAM], int m2 [TAM][TAM])
{
    float m3 [TAM] [TAM];
    
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf ("%.1f ", m3[i][j] = m1 [i][j] + m2 [i][j]);
        }
        printf ("\n");
    }
            
}

int main ()
{
    int m1 [TAM][TAM];
    int m2 [TAM][TAM];
    
    le_matriz(m1);
    le_matriz(m2);
    
    soma_matrizes(m1, m2);
    
    return 0;
    
}
