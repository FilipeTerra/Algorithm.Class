/* Fazer um programa para ler uma string e transferir as consoantes para um vetor e as vogais para outro. 
Ao final, imprima cada um dos vetores. */


#include <stdio.h>
#include <stdlib.h>
#define TAM 61

int eh_vogal (char ch)
{
    switch (ch)
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

int eh_letra (char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return 1;
    
    else
        return 0;
}

void cons_vogais (char str[])
{
    char vogais[TAM] = "";
    char consoantes[TAM] = "";
    int i_v = 0;
    int i_c = 0;
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((eh_letra(str[i]) == 1) && (eh_vogal(str[i]) == 1))
        {
            vogais[i_v] = str[i];
            i_v++;
        }
        
        else if ((eh_letra(str[i]) == 1) && (eh_vogal(str[i]) == 0))
        {
            consoantes[i_c] = str[i];
            i_c++;
        }
    }
    
    printf ("Vetor de vogais: %s\n", vogais);
    printf ("Vetor de consoantes: %s", consoantes);
}

int main ()
{
    char string [TAM];
    scanf ("%61[^\n]", string);
    
    cons_vogais(string);
    
    return 0;
}
