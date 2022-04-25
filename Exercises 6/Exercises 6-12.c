/* Na eleição para o representante dos alunos da sala, apareceram quatro candidatos: Ana, Ari, Eva e Ivan.
Faça uma função que receba o número de alunos presentes no dia da eleição e leia o nome do candidato em que cada aluno votou. 
Ao final, exiba (como nos exemplos), o número de votos que cada candidato obteve. 
Observe que eventuais erros de grafia no nome digitado por um eleitor indicam voto nulo. 
Implemente também a função principal para ler o número de alunos presentes no dia da eleição e para chamar a função criada.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 500

int eh_ana (char str[])
{
    if ((strlen(str) == 3) && (str[0] == 'a' || str[0] == 'A') && (str[1] == 'n' || str[1] == 'N') && (str[2] == 'a' || str[2] == 'A'))
        return 1;
    
    else
        return 0;
}

int eh_ari (char str[])
{
    if ((strlen(str) == 3) && (str[0] == 'a' || str[0] == 'A') && (str[1] == 'r' || str[1] == 'R') && (str[2] == 'i' || str[2] == 'I'))
        return 1;
        
    else
        return 0;
}

int eh_eva (char str[])
{
    if ((strlen(str) == 3) && (str[0] == 'e' || str[0] == 'E') && (str[1] == 'v' || str[1] == 'V') && (str[2] == 'a' || str[2] == 'A'))
        return 1;
        
    else
        return 0;    
}

int eh_ivan (char str[])
{
    if ((strlen(str) == 4) && (str[0] == 'i' || str[0] == 'I') && (str[1] == 'v' || str[1] == 'V') && (str[2] == 'a' || str[2] == 'A') && (str[3] == 'n' || str[3] == 'N'))
        return 1;
        
    else
        return 0;    
}

void contagem_votos (int n)
{
    int v_ana = 0;
    int v_ari = 0;
    int v_eva = 0;
    int v_ivan = 0;
    int v_nulos = 0;
    char nomes[TAM]= "";
    
    for (int i = 0; i < n; i++)
    {
        scanf ("%[^\n]s", nomes);
        scanf ("%*c");              //ignora ultimo caracter

        if (eh_ana(nomes))
            v_ana++;
        
        else if (eh_ari(nomes))
            v_ari++;
        
        else if (eh_eva(nomes))
            v_eva++;
        
        else if (eh_ivan(nomes))
            v_ivan++;
        
        else
            v_nulos++;
        
        nomes[0] = '\0';    // zera o vetor para ele ser usado novamente
    }
    
    printf ("Ana: %d voto(s)\n", v_ana);
    printf ("Ari: %d voto(s)\n", v_ari);
    printf ("Eva: %d voto(s)\n", v_eva);
    printf ("Ivan: %d voto(s)\n", v_ivan);
    printf ("Nulos: %d voto(s)", v_nulos);   
}    

int main ()
{
    int n_alunos;
    
    scanf ("%d ", &n_alunos);
    contagem_votos(n_alunos);
    
    return 0;
}
