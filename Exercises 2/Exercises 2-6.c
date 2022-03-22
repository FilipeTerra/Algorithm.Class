/* A empresa CDA produz caixas-d’água para casas, prédios, indústrias, etc. Por atender clientes com características bastante distintas, a CDA constrói as caixas d’água sob encomenda, permitindo que cada cliente especifique as medidas desejadas (largura, altura e profundidade) conforme sua necessidade. Há algum tempo, os diretores da empresa notaram que alguns funcionários têm dificuldade na hora de calcular o preço do produto quando um orçamento é solicitado. Por isso, contrataram você para construir um programa que calcule o preço de uma caixa d’água (sem tampa) dadas as suas dimensões.
O preço varia de acordo com a espessura da “parede” da caixa-d’água, que, por sua vez, varia com o volume de água armazenado:

Se a caixa-d’água armazena menos que 1 metro cúbico de água, precisa ter a espessura mínima de 0.8 cm.
A cada 1 metro cúbico (ou fração) adicional, a espessura precisa ser aumentada em 0.3 cm.
O preço de uma superfície de 1 metro quadrado corresponde a R$45,00 vezes a espessura (em cm)
a) Construa uma função para calcular o volume de água que a caixa encomendada pode armazenar. A função deve receber como parâmetros as medidas desejadas e retornar o volume.

b) Construa uma função que receba como parâmetro o volume de água e calcule e retorne a espessura mínima que a caixa deve ter. Você pode usar a função ceil da biblioteca math.h para arredondar para cima o valor do volume.

c) Escreva uma função que recebe como parâmetros duas medidas de comprimento e a espessura e retorne o preço da respectiva superfície.

d) Escreva uma função que recebe como parâmetros as três medidas desejadas e retorna o preço da caixa d’água. Sua função vai precisar chamar as funções das letras a, b e c.

e) Escreva um programa que leia as medidas desejadas pelo cliente e imprima o preço da caixa d’água. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    float volume(float largura, float altura, float profundidade)
    {
        return largura*altura*profundidade;
    } 

    float espessura(float volumedeagua)
    {
        float esp;
        esp = 0.8 + 0.3 * (ceil (volumedeagua)-1.0);
        return esp; 
    }

    float custoplaca(float largurapl, float alturapl, float espessurapl)
    {
        float area = largurapl*alturapl;
        float custo =  45.00*espessurapl*area;
        return custo;
    } 

    float custocaixa(float largura, float altura, float profundidade)
    {
        float custo = 0.0; 
        float custobase;
        float volcx = volume(largura, altura, profundidade);
        float espcx = espessura(volcx); 
        custobase = custoplaca(largura, profundidade, espcx);
        float custolados = custoplaca(profundidade, altura, espcx);
        float custofrente = custoplaca(largura, altura, espcx);
        custo = custobase + 2*custolados + 2*custofrente;
        return custo; 
    }     

int main()
{
    float cxlargura;
    float cxaltura;
    float cxprofundidade;
    scanf ("%f%f%f", &cxlargura, &cxaltura, &cxprofundidade);
    float cxcustocaixa = custocaixa(cxlargura, cxaltura, cxprofundidade);
    printf ("Valor da caixa d'agua: R$ %.2f", cxcustocaixa);
    return 0;
}
