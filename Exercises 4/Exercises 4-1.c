
/* Escreva uma função que receba como parâmetros um número inteiro A e um número inteiro N 
e retorne a soma dos N números a partir de A, incluindo A.
Escreva uma função principal (main) que leia dois números inteiros A e N, 
chame a função anterior e imprima o resultado. Se o usuário informar um número negativo ou zero para N, 
o programa deve deve ler um novo par de números até que um número inteiro e positivo seja informado para N. */

#include <stdio.h>

void contador (int A, int N)
{
  int cont = 0;
  int soma = 0;
  
  while (cont < N)
  {

  soma = soma + (A + cont);

  cont++;
  }
  printf ("%d\n", soma);

}

int main (){
  int A, N;
  scanf ("%d %d", &A, &N);
  
  while (N <= 0){
    scanf ("%d %d", &A, &N);
  }

  contador (A, N);


  return 0;
}