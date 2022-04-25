/* Para resolver este exercício, siga os passos abaixo:

Escreva uma função que receba os valores inteiros n1, n2 e x como parâmetro, 
e imprima os valores do intervalo fechado de n1 a n2 que divididos por x dão resto 5, em ordem crescente.

Escreva uma função principal (main) que ​leia​ os valores inteiros n1,n2 e x. 
Por fim, chame​ a função desenvolvida no item anterior. */


#include <stdio.h>
#include <stdlib.h>

void nova_funcao (int n1, int n2, int x)
{
  int cont = n1;

  while (cont < n2)
{ 
  if (cont % x == 5)
  {
    printf ("%d ", cont);
  }

  cont++;
}
}


int main ()
{
  int N1, N2, X, temp;

  scanf ("%d %d %d", &N1, &N2, &X);

  if (N1 > N2)
  {
    temp = N1;
    N1 = N2;
    N2 = temp;
  }
  
  if (N1 == N2)
  {
      printf ("%d", N1);
  }

nova_funcao (N1, N2, X);

return 0;

}