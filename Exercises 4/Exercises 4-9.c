/* Faça uma função que leia um valor inteiro e positivo do teclado e verifique se ele é primo ou não. 
Se o número for primo, a função deverá retornar o valor 0; caso contrário, 
deverá retornar o MENOR divisor exato do número.

Crie um programa que chame a função criada e imprima “Numero primo.” 
se o retorno for 0, ou então “Menor divisor do numero:X”, onde X deve ser substituído pelo valor de retorno. */

#include <stdio.h>
#include <stdlib.h>
 
int nprimo ()
{
    int n;
    int divisor;
    int menordivisor = 1;
    scanf ("%d", &n);
    divisor = n;
    
    while (divisor > 1)
    {

      if (n % divisor == 0)
      {
        menordivisor = divisor;
      }

      divisor--;
    }

      if (menordivisor == n && n != 1)
    {
      return 0;
    }
    
    else
    {
        return menordivisor;
    }

}

int main ()
{
    int numero = nprimo();
 
    if (numero == 0)
    {
        printf ("Numero primo.");
    }
    
    else 
    {
        printf ("Menor divisor do numero:%d", numero);
    }
    
    return 0;
}
