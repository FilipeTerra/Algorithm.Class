/* Construa a função calculaPesoIdeal que recebe o sexo e a altura de uma pessoa como parâmetros. 
A função deve calcular e retornar o peso ideal da pessoa, utilizando uma das seguintes fórmulas:

masculino: (72.7 * altura) - 58;
feminino: (62.1 * altura) - 44.7.

Faça um programa que lê o sexo, a altura e o peso de uma pessoa e imprime se esta pessoa está acima, 
abaixo ou com o peso ideal. */

#include <stdio.h>

void Peso_Ideal (char s, float a, float peso)
{

float p;

switch (s)
{
  
  case 'M': case 'm':

  p = (72.7 * a) - 58;
  printf ("PESO IDEAL: %.4f\n", p);

  if (p < peso)
  {
    printf ("A pessoa esta acima do peso ideal.");
  }

  if (p == peso)
  {
    printf ("A pessoa esta no peso ideal.");
  }

  if (p > peso)
  {
    printf ("A pessoa esta abaixo do peso ideal.");
  }
  break;

  case 'F': case 'f':

  p = (62.1 * a) - 44.7;
  printf ("PESO IDEAL: %.4f\n", p);

  if (p < peso)
  {
    printf ("A pessoa esta acima do peso ideal.");
  }

  if (p == peso)
  {
    printf ("A pessoa esta no peso ideal.");
  }

  if (p > peso)
  {
    printf ("A pessoa esta abaixo do peso ideal.");
  }

  break;
  
  default: 
  printf ("O calculo do peso nao e possivel!");
  
}
}

int main ()
{
  char sexo; 
  float peso, altura;

  scanf ("%c %f %f", &sexo, &altura, &peso);

  Peso_Ideal (sexo, altura, peso);

return 0;
}