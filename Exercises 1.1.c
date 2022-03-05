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