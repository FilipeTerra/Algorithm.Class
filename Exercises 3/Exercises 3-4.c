/* Faça um programa para ler o código de um produto do teclado e informar sua origem.
 
Código do produto entre 01 e 20: "Europa";
Código do produto entre 21 e 40: "Ásia";
Código do produto entre 41 e 60: "América";
Código do produto entre 61 e 80: "África";
Código do produto maior que 80: "Paraguai";
Código fora das faixas de valores acima: "Código Inválido". */

#include <stdio.h>

void produto_pais(int c)
{
  if (c > 0 && c<= 20)
  {
    printf("Europa");
  }

  if (c > 20 && c <= 40)
  {
    printf("Ásia"); 
  }

  if (c > 40 && c <= 60)
  {
    printf("América");
  }

  if (c > 60 && c <= 80)
  {
    printf("África");
  }

  if (c > 80)
  {
    printf("Paraguai");
  }

  if (c <= 0)
  {
    printf("Código Inválido");
  }

}

int main ()
{
    int codigo;
    scanf("%d", &codigo);
    
    produto_pais(codigo);
    
    return 0;
}