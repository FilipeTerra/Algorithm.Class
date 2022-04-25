/* Faça uma estrutura que represente um número complexo, onde um número complexo c é escrito da forma
 c = a+bi. Portanto é necessário armazenar os números reais a e b. 

Implemente uma função para fazer adição de números complexos, recebendo 2 números complexos e retornando o 
número complexo resultante. Dica  Adição: c1 + c2 = (a1 + b1i) + (a2 + b2i)= (a1 + a2) + (b1 + b2)i

Implemente uma função para fazer subtração de números complexos, recebendo 2 números complexos e retornando o 
número complexo resultante. Dica  Subtração: c1 - c2 = (a1 + b1i) - (a2 + b2i)= (a1 - a2) + (b1 - b2)i

Implemente uma função para fazer multiplicação de números complexos, recebendo 2 números complexos e
retornando o número complexo resultante. Dica  

Multiplicação: c1 * c2 = (a1 + b1i) * (a2 + b2i) = (a1*a2 -b1*b2 ) + (a1*b2 + b1*a2)i

4. Faça um programa para ler números complexos e testar as funções implementadas */

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float a;
    float b;
    
}NumeroComplexo;

NumeroComplexo soma_complexos (NumeroComplexo x, NumeroComplexo y)
{
    NumeroComplexo soma;
    
    soma.a = (x.a + y.a);
    soma.b = (x.b + y.b);
    
    return soma;
}

NumeroComplexo subtracao_complexos (NumeroComplexo x, NumeroComplexo y)
{
    NumeroComplexo subtracao;
    
    subtracao.a = (x.a - y.a);
    subtracao.b = (x.b - y.b);
    
    return subtracao;
}

NumeroComplexo multiplicacao_complexos (NumeroComplexo x, NumeroComplexo y)
{
    NumeroComplexo multiplicacao;
    
    multiplicacao.a = -(x.b * y.b) + (y.a * x.a);
    multiplicacao.b = (x.a * y.b) + (y.a * x.b);
    
    return multiplicacao;
}

int main() 
{
    NumeroComplexo n1, n2;
    scanf ("%f %f", &n1.a, &n1.b);
    scanf ("%f %f", &n2.a, &n2.b);

    
    NumeroComplexo s, sub, m;
    s = soma_complexos (n1, n2);
    sub = subtracao_complexos (n1, n2);
    m = multiplicacao_complexos (n1, n2);

    if (s.b >= 0)
        printf ("%.2f +%.2fi\n", s.a, s.b);
    else
        printf ("%.2f %.2fi\n", s.a, s.b);
        
    if (sub.b >= 0)
        printf ("%.2f +%.2fi\n", sub.a, sub.b);
    else 
        printf ("%.2f %.2fi\n", sub.a, sub.b);
        
    if (m.b >= 0)
        printf ("%.2f +%.2fi\n", m.a, m.b);
    else
        printf ("%.2f %.2fi\n", m.a, m.b);

    return 0;
}