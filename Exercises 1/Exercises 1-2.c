/*Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro três valores reais e retorne a média aritmética destes valores.
Escreva uma função principal (main) que leia três valores reais do teclado, chame a função desenvolvida no item anterior e imprima na tela o resultado obtido.*/

#include <stdio.h>

int main()
{
    float a, b, c, media;
    
    scanf("%f %f %f", &a, &b, &c);
    
    media = (a + b + c) / 3.00;

    printf("Média: %.2f", media);
    
    return 0;
}