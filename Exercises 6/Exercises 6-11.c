/* Faça uma função que recebe como parâmetros duas strings, strA e strB, e um número inteiro k. 
A função deve copiar os k primeiros caracteres de strB para strA de forma invertida. 
Se k for maior que o tamanho da string, toda a string strB deverá aparecer invertida em strA. 
Assuma que as duas strings foram alocadas com o mesmo tamanho. Exemplo: se strB="ABCDE" e k=3, a string strA deverá receber "CBA". 
Se strB="ABCDE" e k=10, a string strA deverá receber "EDCBA". */

#include <stdlib.h>
#define TAM 500
#include <stdio.h>
#include <string.h>


void inverter_letras (char strA[], char strB[], int k)
{
  if (k > strlen(strA))
  {
    for (int i = 0, k = strlen(strA)-1; k != -2; k--, i++)
      strB[i]=strA[k];
  }
  
  else
  {
    for (int i = 0; k-1 != -2; k--, i++)
      strB[i] = strA[k-1]; 
  }

    printf ("%s", strB);
}

int main ()
{
    char strA[TAM];
    char strB[TAM];
    int k; 
    
    scanf ("%[^\n]s", strA);
    scanf ("%d", &k);
    
    inverter_letras(strA, strB, k);
    
    return 0;
}
