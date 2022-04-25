/* Faça uma função que receba a quantidade de quilowatts consumido em uma casa e calcule o valor a ser pago de energia elétrica, 
sabendo-se que o valor a pagar por quilowatt é de R$ 0.618 e imprima o valor total a ser pago pelo usuário
 acrescido de 18% de ICMS. Faça também uma função principal (main) que leia a quantidade de quilowatts
e chame a função desenvolvida. */

#include <stdio.h>
#include <stdlib.h>
 
float Conta_Luz (float kw)
{
    float conta = 0.618 * kw * 1.18;
    return conta;
}

int main ()
{
    float KW, Conta;
    
    scanf("%f", &KW);
    
    Conta = Conta_Luz (KW);
    
    printf("R$%.2f", Conta);
    
    return 0;
    
}