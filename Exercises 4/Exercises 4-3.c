/* Escreva um algoritmo que imprima todos os números contido no intervalo fechado [num1,num2], 
com num1 e num2 inteiros positivos ,que divididos por 11 dão resto igual a 5. */

#include <stdio.h>
#include <stdio.h>

void intervalo (int i, int j)
{
  int cont = i;

while (cont <= j)
{
  if (cont % 11 == 5)
  {
  printf ("%d\n", cont);
  }
  cont++;
}

}

int main ()
{
  int x, y, temp;
  scanf ("%d %d", &x, &y);
  
  if (x > y)
  {
    temp = x;
    x = y;
    y = temp;
  }
  intervalo (x, y);

  return 0;
}
