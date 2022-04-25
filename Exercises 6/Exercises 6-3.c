/* Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro uma string e apresente-a na tela de forma soletrada, 
isto é, separando cada letra com o uso do hífen.
Escreva uma função principal (main) que leia do teclado uma string e chame a função desenvolvida no item anterior. */

#include <stdio.h>
#include <string.h>
#define TAM 500

void imprime_soletrada (char str[])
{
  int i;

  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i + 1] == ' ')
        printf ("%c", str[i]);
    
    else if (str[i] == ' ')
        printf ("%c", str[i]);
    
    else if (str[i + 1] == '\0')
        printf ("%c", str[i]);
        
    else
        printf ("%c-", str[i]);
  }
}

int main ()
{
  char string[TAM];
  
  scanf ("%499[^\n]", string);
  
  imprime_soletrada (string);

  return 0;
}
