/* Você certamente já utilizou algum programa de compressão de arquivos (zip, rar, entre outros). 
Estes programas normalmente precisam analisar os dados armazenados nos arquivos para saber a melhor forma de comprimí-los. 
No caso de arquivos de texto, por exemplo, uma possível análise é verificar que letras ou símbolos aparecem com maior frequência no texto.

a) Faça uma função que receba uma string e um vetor de inteiros de tamanho 128. 
Em cada posição i do vetor de inteiros do parâmetro, a função deverá contabilizar o número de vezes
que o caractere de código i aparecerá no texto. Por exemplo, se a string for "AAAB", 
o vetor deve ter o valor 3 na posição 65, 1 na posição 66 e 0 em todas as outras posições. 
Caracteres fora do intervalo entre 0 e 127 não precisam ser contabilizados.

b) Faça uma função que receba um vetor de inteiros de tamanho 128 e um vetor de inteiros de tamanho 5. 
A função deve armazenar no segundo vetor o índice das posições que contém os 5 maiores valores do primeiro vetor (em qualquer ordem).
c) Escreva um programa que leia um texto com até 1000 caracteres e imprima quais são os 5 símbolos mais frequentes, em ordem de frequencia. */

#include <stdio.h>
#define TAMANHO 128

void Inicializacao(int vetor[],int tam){
    for (int i = 0; i < tam; i++){
        vetor[i] = 0;
    }
}

void Rankeamento(int vetor1[],int tam,int vetor2[],int tam2){
int top1 = 0,top2 = 0,top3 = 0,top4 = 0,top5 = 0;
int vetor3[5];

    for (int i = 0; i < tam; i++){


        if (vetor1[i] > top1){
            top1 = vetor1[i];
            vetor3[0] = top1;
            vetor2[0] = i;
            i = 0;
        }
        else if(vetor1[i] < top1 && vetor1[i] > top2){
            top2 = vetor1[i];
            vetor3[1] = top2;           
            vetor2[1] = i;
            i = 0;
        }
        else if(vetor1[i] < top2 && vetor1[i] > top3){
            top3 = vetor1[i];
            vetor3[2] = top3;         
            vetor2[2] = i;
            i = 0;
        } 
        else if(vetor1[i] < top3 && vetor1[i] > top4){
            top4 = vetor1[i];
            vetor3[3] = top4;
            vetor2[3] = i;
            i = 0;
        }
        else if(vetor1[i] < top4 && vetor1[i] > top5){
            top5 = vetor1[i];
            vetor3[4] = top5;
            vetor2[4] = i;
            i = 0;
        }
    }
    
    for (int j = 0; j < tam2; j++){
        if(vetor2[j] != 0){
            printf("Frequencia do simbolo %d: %d\n",vetor2[j], vetor3[j]);
        }
    }
}

void Contabilizador(char str[], int vetor[]){
    for (int i = 0; str[i] != '\0'; i++){
        vetor[(int)str[i]]++;
    } 
}

int main(){
    int posicoes[TAMANHO],rank[5];
    char frase[1001];
    Inicializacao(posicoes,TAMANHO);
    Inicializacao(rank,5);
    scanf ("%1000[^\n]s",frase);
    
    Contabilizador(frase,posicoes);
    Rankeamento(posicoes,TAMANHO,rank,5);
    return 0;
}