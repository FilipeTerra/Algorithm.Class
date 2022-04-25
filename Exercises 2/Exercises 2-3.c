/* Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro dois números inteiros e imprima a soma, o produto, a diferença, o quociente e o resto entre estes.
Escreva uma função principal (main) que leia dois valores inteiros do teclado e chame a função desenvolvida no item anterior. */

#include <stdio.h>
#include <stdlib.h>
 
void operacoes (int a, int b)
{
    printf("%d + %d = %d", a, b, a + b);
    printf("\n%d * %d = %d", a, b, a * b);
    printf("\n%d - %d = %d", a, b, a - b);
    printf("\n%d / %d = %d", a, b, a / b);
    printf("\n%d %% %d = %d", a, b, a % b);
    
}


int main ()
{
    
    int x, y;
    scanf("%d %d", &x, &y);
    
    operacoes (x, y);
    
    return 0;
    
}