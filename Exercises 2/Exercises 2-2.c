/* Para resolver este exercício, considere a fórmula para o cálculo da distância entre dois pontos e siga os passos abaixo:
Escreva uma função que receba como parâmetro as coordenadas de dois pontos e retorne a distância entre eles.
Escreva uma função principal (main) que leia do teclado as coordenadas dos três vértices de um triângulo, 
chame a função desenvolvida no item anterior e imprima o perímetro deste triângulo. */

#include <math.h>
#include <stdio.h>

float distancia_pontos (float x1, float y1, float x2, float y2)
{
    float d = (sqrt((pow(x1 - x2, 2)) + (pow(y1 - y2, 2))));
    return d;
}


int main ()
{
    
    float X1, Y1, X2, Y2, X3, Y3, d1, d2, d3, perimetro; 
    
    scanf("%f %f %f %f %f %f", &X1, &Y1, &X2, &Y2, &X3, &Y3);
    
    d1 = distancia_pontos (X1, Y1, X2, Y2);
    d2 = distancia_pontos (X1, Y1, X3, Y3);    
    d3 = distancia_pontos (X2, Y2, X3, Y3); 
    perimetro = d1 + d2 + d3;
    
    printf("Perímetro: %.2f.", perimetro);
    
    
    return 0;    
}