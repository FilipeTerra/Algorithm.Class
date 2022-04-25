/* Faça um programa para determinar o número de meses necessáriospara que uma aplicação seja suficiente
 para pagar uma dívida. Seu programa deve ler do teclado dois valores reais iniciais para dívida
  e aplicação, respectivamente. Assuma que a dívida cresce a juros de 2.5% ao mês e que a aplicação rende 4% ao mês. */

#include <stdio.h>


void aplicacao_divida (float d, float a)
{
    int cont = 0;
    
    while (d > a)
    {
        d = (d * 1.025);
        a = (a * 1.04);        
        cont++; 
    }
   
        printf ("São necessários %d meses para pagar esta dívida.", cont);
}

int main ()
{
    float divida, aplicacao;
    scanf ("%f %f", &divida, &aplicacao);
    
    aplicacao_divida (divida, aplicacao);
    
    return 0;
    
}

