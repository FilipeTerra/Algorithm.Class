/* Uma determinada empresa remunera seus vendedores com um salário fixo e uma bonificação sobre as vendas. 
A bonificação corresponde a 15% das vendas.

Escreva uma função que receba o nome de um vendedor, o salário fixo que ele recebe e o valor das vendas, 
e imprima o nome do vendedor e quanto ele vai receber de salário total. Use duas casas decimais para o salário.
Escreva uma função principal (main) que peça ao usuário para informar o nome de um vendedor da empresa, o salário fixo e o total de vendas. 
Chame a função anterior passando como parâmetros as informações digitadas pelo usuário. */

#include <stdio.h>
#define TAM 100

void salario (char str[], int s, int v)
{
    float sal_fin = s + (v * 0.15);
    
    printf ("O salario de %s sera de R$ %.2f", str, sal_fin);
}

int main ()
{
    char nome[TAM];
    int salario_i, vendas;
    
    scanf ("%[^\n]s", nome);
    scanf ("%d", &salario_i);
    scanf ("%d", &vendas);
    
    salario(nome, salario_i, vendas);
    
    return 0;
}
