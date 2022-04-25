/* Um dos sistemas de encriptação mais antigos é atribuído a Júlio César: 
se uma letra a ser criptografada é a letra de número N do alfabeto, substitua-a com a letra (N+K), 
onde K é um número inteiro constante (César utilizava K = 3).
Dessa forma, para K = 1 a mensagem “Adoro programar em C” se torna “Bepsp!qsphsbnbs!fn!D”. 
Faça um programa que receba como entrada uma mensagem e um valor de K e altere a mensagem criptografando-a pelo código de César. */

#include <stdio.h>
#define TAM 500

void mensagem_cript (char str[], int k)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] + k;
    }
    
    printf ("Mensagem criptografada: %s", str);
}

int main ()
{
    char string[TAM];
    int k;
    
    scanf ("%499[^\n]s", string);
    scanf ("%d", &k);
    
    mensagem_cript (string, k);
    
    return 0;
}
