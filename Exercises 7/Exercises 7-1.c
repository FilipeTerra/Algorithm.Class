/* Para saber um pouco mais sobre sua turma, um professor quis saber a media das idades de seus alunos. 
Considere uma sala de aula com M linhas e N colunas. 
Considere que a matriz terá dimensão máxima 100x100. Faça o que se pede utilizando matrizes:
 
Crie uma função que recebe uma matriz (MxN) preenchida com a idade de cada aluno, 2 inteiros 
representando o número de linhas e colunas (respectivamente) e um terceiro inteiro j. 
Considere que, nesta matriz, caso um aluno esteja ausente estará preenchido com o valor 0. 
Essa função deve calcular e retornar media da idade alunos presentes sentados em uma coluna j desta sala.

Crie uma função principal que declare as variáveis necessárias, leia o valor de M, o valor de N e leia a
matriz com a idade de cada aluno. Além disso, deverá ler uma inteiro j. 
Este programa deve chamar a função anterior e imprimir na tela a média da idade de alunos presentes sentados na coluna j.

A saída deve ser feita conforme os exemplos abaixo: */

#include <stdio.h>
#define TAM 100

void le_matriz (int matriz [][TAM], int lin, int col)
{
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            scanf ("%d", &matriz[i][j]);
}

void media_idade (int matriz [TAM][TAM], int lin, int col, int j)
{
    float soma = 0;
    int cont = 0;
    
    for (int i = 0; i < lin; i++)
    {
        if (matriz [i][j] != 0)
            {
                soma = soma + matriz[i][j];
                cont++;
            }
    }
    
    printf ("%.2f", soma / cont);
}

int main ()
{
    int lin, col, j;
    int matriz[TAM][TAM];
    
    scanf ("%d %d", &lin, &col);
    le_matriz(matriz, lin, col);
    scanf ("%d", &j);
    
    media_idade (matriz, lin, col, j);
    
    return 0;
    
}
