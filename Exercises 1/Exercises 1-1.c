/*Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro o raio de um círculo e retorne a área deste. Utilize pi = 3.141592.
Escreva uma função principal (main) que leia um valor real do teclado, chame a função desenvolvida no item anterior e imprima na tela o resultado obtido.*/

#include <stdio.h>

int main ()
{
    float pi, raio, area;
    pi = 3.141592;
    
    scanf("%f", &raio);
    
    area = pi * raio * raio;
    
    printf("Área do círculo: %.2f cm2.", area);
    
    return 0;
}