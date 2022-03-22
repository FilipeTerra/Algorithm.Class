/* Faça uma função que receba um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e imprima-o expresso no formato hh:mm:ss.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido. */

#include <math.h>
#include <stdio.h>

void duracao (int t)
{
    int h, m, s;
    
    h = t / 3600;
    m = (t / 60) - (h * 60);
    s = t % 60;
    
    printf("%02d:%02d:%02d", h, m, s);
}


int main ()
{
    int T;
    scanf("%d", &T);
    
    duracao (T);
    
    return 0;
    
}