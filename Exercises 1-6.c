/* Considerando o critério de aprovação de uma disciplina que determina que um aluno está aprovado se a média ponderada de suas três provas for maior ou igual a 5.0, onde a média é dada pela fórmula:

media = (p1 + p2 + 2.0 * p3) / 4.0
a) Escreva uma função que receba como parâmetros as notas das duas primeiras provas de um aluno (p1 e p2) e retorne a nota mínima que o aluno precisa na terceira prova para que seja aprovado.


b) Escreva um programa que leia do teclado as duas primeiras notas de um aluno, chame a função do item anterior e imprima a nota mínima que o aluno precisa tirar na p3 para que seja aprovado.*/

#include <stdio.h>

int main ()

{
    float Prova_01, Prova_02, Nota_Minima;
    
    scanf("%f %f", &Prova_01, &Prova_02);
    
    Nota_Minima = (- Prova_01 - Prova_02 + 20) / 2;
    
    printf("Nota necessaria: %.2f", Nota_Minima);
    
    return 0;
}