/* Escreva um programa que leia dez valores do teclado (usando a mesma variável) e 
imprima as posições do maior e do menor na sequência. */


#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    double maior, menor;
    int cont = 0;
    double a;
    int contmenor = 1;
    int contmaior = 1;
    
    scanf ("%lf", &a);
    maior = a;
    menor = a;
    
    while (cont < 9)
    {
        scanf ("%lf", &a);
        
        if (a > maior)
        {
            maior = a;
            contmaior = cont + 2;
        }
        
        if (a < menor)
        {
            menor = a;
            contmenor = cont + 2;
        }
        
        cont++;

    }
    
    printf ("O %do elemento é o maior.\nO %do elemento é o menor.", contmaior, contmenor);

    return 0;

}