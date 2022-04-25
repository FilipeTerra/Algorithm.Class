/* Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro uma string e inverta a ordem de seus caracteres.
Escreva uma função principal (main) que leia do teclado uma string, chame a função desenvolvida no item anterior e imprima na tela o resultado obtido. */

#include <stdio.h>
#include <string.h>
#define TAM 50

int tamanho_string (char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    
    return i;
}

void inverter_letras (char str[])
{
    int t = tamanho_string(str);
    for (int i = t - 1; i >= 0; i--)
        printf ("%c", str[i]);
}

int main ()
{
    char str[TAM] = "";
    scanf ("%[^\n]s", str);
    
    inverter_letras(str);
    
    return 0;
}