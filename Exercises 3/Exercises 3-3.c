/* Para resolver este exercício, siga os passos abaixo:

1- Escreva uma função que receba como parâmetro um valor inteiro (n) e teste se o valor lido termina com 0 (divisível por 10). 
Em caso positivo, exiba a metade deste número. Caso contrário, exibir a mensagem "O numero digitado nao termina com 0".

2- Escreva uma função principal (main) que leia um valor inteiro do teclado e chame a função desenvolvida no item anterior. */

#include <stdio.h>
#include <stdlib.h>
 
void divisores_dez (int n)
{
    if (n % 10 == 0)
    {
        printf("%d", n / 2);
    }
    else 
    {
        printf("O numero digitado nao termina com 0");
    }
}

int main ()
{
    int numero;
    scanf("%d", &numero);
    
    divisores_dez(numero);
    
    return 0;
}