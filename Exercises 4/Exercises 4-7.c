/* Para resolver este exercício, siga os passos abaixo:

E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + ... + 1 / (k-1)! + 1 / k!

A função deve receber um valor real x e calcule o valor de E. 
x representa o valor máximo (tolerância) para a diferença entre dois termos consecutivos. 
Isto é, o cálculo do valor de E deve ser computado até que |1/k! – 1/(k+1)! | < x . 
Imprima cada termo gerado e o resultado de E ao final.

Escreva uma função principal (main) que ​leia​ um valor real x e chame​ a função desenvolvida no item anterior.  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fatorial (float x)
{
    int i = 1;
    float f = 1;
    float k = 2.0;
    float f2;
    float dif = 1;
    float ti = 1;
    float tf = ti / 2;
    float soma = 2;
    int inteiro = 2;
    
    printf ("1 + 1/1!");
    
    while (dif >= x)
    {
    
    f = 1;
    
    for (i = 1; i <= inteiro; i++)
    {
        f = f * i;
    }
    
    f2 = f * (k + 1);
    ti = 1 / f;
    tf = 1 / f2;
    dif = ti - tf;
    
    printf (" + 1/%d!", inteiro);
    
    soma = soma + ti;
    
    inteiro++;
    }
    
    printf (" = %.3f", soma);
}

int main()
{
    float x;
    
    scanf ("%f", &x);
    
    fatorial (x);
    
    return 0;
}
