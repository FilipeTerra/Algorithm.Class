/* Faça uma função que calcule o salário líquido do funcionário sabendo que este é constituído pelo salário bruto mais o valor das horas extras subtraindo 8% de INSS do total. 
Esta função deve receber salário bruto, o valor das horas extras e o número de horas extras como parâmetro e retornar o salário liquido. 
Faça também uma função principal (main) que leia os valores necessários para chamar a função e imprima o valor retornado por ela.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float Salario_Bruto, Valor_Horas, Horas_Extras, Salario_Liquido;
    
    scanf("%f %f %f", &Salario_Bruto, &Valor_Horas, &Horas_Extras);
    
    Salario_Liquido = (Salario_Bruto + (Horas_Extras * Valor_Horas)) * 0.92;
        
    printf("Salario Liquido: %.2f", Salario_Liquido);
    
    return 0;
}