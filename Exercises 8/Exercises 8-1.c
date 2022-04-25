/* 1. Crie uma estrutura para representar um triângulo com campos para representar os três lados: a, b, e c.
2. Crie uma função que recebe como parâmetro um triângulo e retorna o seu semi-perímetro, calculado pela fórmula: p=(a+b+c)/2.
3. Crie uma função que recebe como parâmetro uma estrutura representando um triângulo, 
calcule e retorne a sua área, calculada pela fórmula de Heron: A=√p(p−a)(p−b)(p−c), onde p é o semi-perímetro (utilize a função do item anterior). 
Atenção ao fato de que se o valor da expressão p(p−a)(p−b)(p−c) for negativo, os lados não definem um triângulo. Nesse caso, a função deve retornar o valor -1.
4. Crie uma função que recebe como parâmetros um vetor de estruturas do tipo triângulo, 
o tamanho desse vetor e retorne o valor da área do triângulo de maior área (utilize a função do item anterior para determinar a área).
5. Crie um programa que crie um vetor de estruturas para armazenar os dados de 5 triângulos, 
leia os dados desses triângulos, chame a função do item anterior e imprima os lados do triângulo de maior área. */ 

#include <stdio.h>
#include <math.h>
#define QNT 5

typedef struct 
{
    int lado1;
    int lado2;
    int lado3;
    
}LadosTriangulo;

float semi_perimetro (LadosTriangulo triangulo)
{
    float sp = (triangulo.lado1 + triangulo.lado2 + triangulo.lado3) / 2;
    
    return sp;
}

float area_triangulo (LadosTriangulo triangulo)
{
    float sp = semi_perimetro (triangulo);
    float A = sp * (sp - triangulo.lado1) * (sp - triangulo.lado2) * (sp - triangulo.lado3);
    
    if (A < 0)
    {
        return -1;
    }
    
    A = sqrt(A);
    
    return A;
}

float maior_triangulo (LadosTriangulo triangulo [], int TAM)
{
    float maior_a = area_triangulo (triangulo[0]);
    float area;
    
    for (int i = 0; i < TAM; i++)
    {
        area = area_triangulo(triangulo[i]);
        
        if (area > maior_a){
            maior_a = area;
        }
    }
    
    return maior_a;
}


int main ()
{
    LadosTriangulo triangulos [QNT];
    
    for (int i = 0; i < QNT; i++)
    {
        scanf ("%d", &triangulos[i].lado1);
        scanf ("%d", &triangulos[i].lado2);
        scanf ("%d", &triangulos[i].lado3);
    }
    
    for (int i = 0; i < QNT; i++)
        {
            if (area_triangulo (triangulos[i]) == maior_triangulo (triangulos, QNT))
                printf ("%d %d %d", triangulos[i].lado1, triangulos[i].lado2, triangulos[i].lado3);
        }
        
    return 0;
    
}