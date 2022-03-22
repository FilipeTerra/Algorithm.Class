/*Escreva uma função que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora, calcule e retorne o salário desse funcionário. Esta função também deve imprimir o número do funcionário antes de retornar o salário. A seguir, faça uma função principal que o salário do funcionário, com duas casas decimais. Por ser uma empresa multinacional o pagamento é realizado em dólar.

Entrada
O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

Saída
Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.*/

#include <stdio.h>

int main ()
{
    int Numero_Funcionario, Horas_Trabalhadas;
    float Valor_Hora, Salario;
    
    scanf("%d %d %f", &Numero_Funcionario, &Horas_Trabalhadas, &Valor_Hora);
    
    Salario = Horas_Trabalhadas * Valor_Hora;
    
    printf("NUMBER = %d\n", Numero_Funcionario);
    printf("SALARY = U$ %.2f", Salario);
    
    return 0;
}