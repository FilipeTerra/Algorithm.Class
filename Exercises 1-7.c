/* O IMC (Índice de Massa Corporal) é calculado utilizando o peso e a altura da seguinte forma:

IMC = Peso/(Altura x Altura)

Escreva uma função que receba como parâmetro o peso e a altura de uma determinada pessoa, e retorne o IMC.
Escreva uma função principal (main) que leia do teclado o peso e a altura de uma pessoa, chame a função anterior e imprima o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    float Peso, Altura;
    double IMC;
    
    scanf("%f %f", &Peso, &Altura);
    
    IMC = Peso / (Altura * Altura);
    
    printf("IMC = %.6lf", IMC);
    
    return 0;
}