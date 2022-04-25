/* Faça uma função que deve ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, 
o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e retorne o valor a ser pago. 
Faça também uma função principal (main) para chamar e imprimir o resultado da função anterior

Entrada
A entrada contém duas linhas de dados. Em cada linha haverá 3 valores, 
respectivamente dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço 
após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto. */

#include <stdio.h>
#include <math.h>

void info_produtos(int c1, int n1, float v1, int c2, int n2, float v2)
{
    
    float valor = (n1 * v1) + (n2 * v2);
    printf("VALOR A PAGAR: R$ %.2f", valor);
    
}


int main ()
{
    
    float v1, v2;
    int c1, n1, c2, n2;
    
    scanf("%d %d %f %d %d %f", &c1, &n1, &v1, &c2, &n2, &v2);

    info_produtos(c1, n1, v1, c2, n2, v2);
    
    return 0;
}