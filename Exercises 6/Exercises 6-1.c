/* Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro uma string e retorne o número de vogais que esta string contém.
Escreva uma função principal (main) que leia do teclado uma string, 
chame a função desenvolvida no item anterior e imprima na tela o resultado obtido. */

#include <stdio.h>
#define TAM 500

int vogal (char str)
{
    switch (str)
    {
        case 'a': case 'A': 
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            return 1;
            break;
        
        default: 
            return 0;
            break;
    }
}

int qntd_vogais (char str[])
{
    int i;
    int cont = 0;
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (vogal (str[i]) == 1)
            cont++;
    }
    return cont;
}

int main ()
{
    char string[TAM];
    int qntd;
    scanf ("%99[^\n]", string);
    
    qntd = qntd_vogais (string);
    
    printf("Vogais: %d", qntd);
    
    return 0;
}
