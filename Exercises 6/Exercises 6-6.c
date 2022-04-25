/* Fazer uma função que leia uma string do teclado (máx. 50 caracteres) e imprima uma “estatística” dos caracteres 
digitados. O programa deverá imprimir a quantidade total de caracteres digitados, a quantidade de vogais,
 a quantidade de consoantes, e a quantidade de outros caracteres.

Observações:

- Os espaços são contados como caracteres especiais.
- Quando uma vogal é acentuada, o programa considera aquela posição como sendo dois caracteres especiais.
- Além disso, o acento agudo é considerado pelo algoritmo como sendo dois caracteres.
- O cê-cedilha (ç) é considerado dois caracteres especiais. */


#include <stdio.h>
#define TAM 50

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

void estatisticas (char str[])
{
    int vogais = 0;
    int cons = 0;
    int outros = 0;
    int i;
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (eh_vogal(str[i]) == 1)
            vogais++;
            
        else if (eh_letra(str[i]) == 0)
            outros++;
        
        else if ((eh_vogal(str[i]) == 0) && (eh_letra(str[i]) == 1))
            cons++;
    }
    
    int total = vogais + cons + outros;
        
    printf ("Total de caracteres digitados: %d\n", total);
    printf ("--> Vogais: %d.\n", vogais);
    printf ("--> Consoantes: %d.\n", cons);
    printf ("--> Outros: %d.", outros);
}

int main ()
{
    char string [TAM];
    scanf ("%49[^\n]", string);
    
    estatisticas (string);
    
    return 0;
}