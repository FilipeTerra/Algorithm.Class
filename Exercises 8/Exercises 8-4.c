/* Para resolver este exercício, siga os passos abaixo:
Defina uma estrutura para armazenar os dados de um ingresso. 
Esta estrutura deve conter os campos: nome da atração, local e preço do ingresso.
Escreva uma função principal (main) que leia do teclado os dados de N ingressos e, em seguida, informe o nome e o 
preço do evento mais barato e do evento mais caro. A entrada de dados segue a seguinte ordem: nome do evento, local e preço.
 
Dica: utilize o código especial %f%*c para fazer a leitura do preço do ingresso. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 4

void consertafgets (char str[])
{
    int tam = strlen (str);
    if (str[tam - 1] == '\n')
        str[tam - 1] = '\0';
}

typedef struct 
{
    char nome [100];
    char local [100];
    float preco;
} Ingresso;

int main() 
{
    Ingresso atracoes[N];
    
    for (int i = 0; i < N; i++)
        {
            fgets (atracoes[i].nome, 100, stdin);
            consertafgets (atracoes[i].nome);
            fgets (atracoes[i].local, 100, stdin);
            consertafgets (atracoes[i].local);
            scanf ("%f%*c", &atracoes[i].preco);
        }
    
        
    int indice_barato = 0;
    float preco_barato = atracoes[0].preco;
    
    for (int i = 1; i < N; i++)
    {
        if (preco_barato > atracoes[i].preco)
        {
            preco_barato = atracoes[i].preco;
            indice_barato = i;
        }
    }
    
    printf ("Mais Barato: %s (R$ %.2f)\n", atracoes[indice_barato].nome, preco_barato);
    
    int indice_caro = 0;
    float preco_caro = atracoes[0].preco;
    
    for (int i = 1; i < N; i++)
    {
        if (preco_caro < atracoes[i].preco)
        {
            preco_caro = atracoes[i].preco;
            indice_caro = i;
        }
    }
    
    printf ("Mais Caro: %s (R$ %.2f)\n", atracoes[indice_caro].nome, preco_caro);
    
  return 0;
}
