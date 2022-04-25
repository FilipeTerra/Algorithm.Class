/* Construa a função classificaNadador que recebe a idade de um nadador (número inteiro) como parâmetro e
 imprime sua categoria, de acordo com a tabela abaixo:

CATEGORIA	FAIXA ETÁRIA
infantil A	5 a 7 anos
infantil B	8 a 10 anos
juvenil A	11 a 13 anos
juvenil B	14 a 17 anos
adulto	18 a 30 anos
sênior	maiores de 30 anos

Faça um programa que leia a idade de um nadador e imprima sua categoria. */

#include <stdio.h>
#include <math.h>

void categoria_nadador (int i)
{
  if (i >= 5 && i <= 7)
  {
    printf ("Categoria: infantil A");
  }

  if (i > 7 && i <= 10)
  {
    printf ("Categoria: infantil B");
  }

  if (i > 10 && i <= 13)
  {
    printf ("Categoria: juvenil A");
  }

  if (i > 13 && i <= 17)
  {
    printf ("Categoria: juvenil B");
  }

  if (i > 17 && i <= 30)
  {
    printf ("Categoria: adulto");
  }

  if (i > 30)
  {
    printf ("Categoria: senior");
  }

  if (i <= 4)
  {
    printf ("Nao ha categoria para a idade informada!");
  }

}

int main ()
{
  int idade;

  scanf ("%d", &idade);

  categoria_nadador (idade);

  return 0;
}