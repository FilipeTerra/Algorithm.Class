/* Para resolver este exercício, use a estrutura "Ponto" definida no exemplo e siga os passos abaixo:
Escreva uma função que receba como parâmetro dois pontos e retorne o ponto mais próxima da origem.
Escreva uma função principal (main) para ler do teclado as informações de quatro pontos, 
chamar a função desenvolvida no item anterior e imprimir na tela apenas as coordenadas do ponto mais próxima da origem. */

#include <math.h>
#include <stdio.h>
#include <math.h>

typedef struct 
{
    int x;
    int y;
} Ponto;

int distancia_origem (Ponto a)
{
    int d = (pow((0 - a.x), 2)) + (pow((0 - a.y), 2));
    
    return sqrt(d);
}

Ponto prox_origem (Ponto a, Ponto b)
{
    int dist_a = distancia_origem(a);
    int dist_b = distancia_origem(b);
    Ponto ponto;
    
    if (dist_a > dist_b)
        {
            ponto.x = b.x;
            ponto.y = b.y;
        }
    
    else
        {
            ponto.x = a.x;
            ponto.y = a.y;
        }
        
    return ponto;
}

int main() 
{
    Ponto a, b, c, d;
    scanf ("%d %d", &a.x, &a.y);
    scanf ("%d %d", &b.x, &b.y);
    scanf ("%d %d", &c.x, &c.y);
    scanf ("%d %d", &d.x, &d.y);
    
    Ponto prox1, prox2, mais_prox;
    
    prox1 = prox_origem (a, b);
    prox2 = prox_origem (c, d);
    mais_prox = prox_origem (prox1, prox2);
    
    printf ("Mais Próximo: (%d,%d)", mais_prox.x, mais_prox.y);
    
    return 0;
}