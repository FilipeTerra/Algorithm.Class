/* Nomes de autores em referências bibliográficas geralmente aparecem grafados em formato específico. 
Por exemplo, um autor chamado "João José Silva" pode ter seu nome citado como "João J. SILVA", "SILVA, João José" ou "SILVA, J.J.".

a) Faça três funções distintas que recebam duas strings, s1 e s2. 
Cada uma das funções deve atribuir a s2 o nome contido em s1 em um dos formatos citados acima.

b) Elabore um programa que leia um nome e imprima-o em cada um dos formatos citados, 
chamando as funções implementadas na letra a. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 500

void fun3(char s1[], char s2[]){
    
    int esp=0, esp2, i=0, j=0;
    
    for(int i=0; s1[i]!='\0'; i++){
        if(s1[i]==' '){
            esp++;
        }
    }
    
    esp2=esp;

    for(i=0; s1[i]!='\0'; i++){
        if(s1[i]==' '){
            esp--;
        }else if(esp==0){
            s2[j]=toupper(s1[i]);
            j++;
        }
    }
    
    s2[j]=',';
    j++;
    s2[j]=' ';
    j++;
    s2[j]=s1[0];
    j++;
    s2[j]='.';
    j++;
    
    for(i=0; s1[i]!='\0'; i++){
        if(s1[i-1]==' ' && esp2>1){
            s2[j]=s1[i];
            j++;
            s2[j]='.';
            j++;
            esp2--;
        }
    }
    
    s2[j]='\0';
    
    printf("\n%s", s2);
}

void fun2(char s1[], char s2[]){
    
    int esp=0, esp2=0, i=0, j=0;
    
    for(int i=0; s1[i]!='\0'; i++){
        if(s1[i]==' '){
            esp++;
        }
    }
    
    esp2=esp;

    for(i=0; s1[i]!='\0'; i++){
        if(s1[i]==' '){
            esp--;
        }else if(esp==0){
            s2[j]=toupper(s1[i]);
            j++;
        }
    }
    
    s2[j]=',';
    j++;
    s2[j]=' ';
    j++;
    
    for(i=0; s1[i]!='\0'; i++){
        if(esp2>0){
            s2[j]=s1[i];
            j++;
            if(s1[i]==' '){
                esp2--;
            }
        }
    }
    
    s2[j]='\0';
    
    printf("\n%s", s2);
}



void fun1(char s1[], char s2[]){
    
    int esp=0, esp2=0, i=0, j=0;
    
    for(int i=0; s1[i]!='\0'; i++){
        if(s1[i]==' '){
            esp++;
        }
    }
    
    esp2=esp;

    for(i=0; s1[i]!=' '; i++){
        s2[i]=s1[i];
    }

    
    for(j=0; s1[j]!='\0'; j++){
        if(s1[j-1]==' '){
            s2[i]=' ';
            i++;
            s2[i]=s1[j];
            i++;
            s2[i]='.';
            i++;
            esp--;
        }
        if(esp==1){
            break;
        }
    }
    
    s2[i]=' ';
    i++;
    
    for(int k=0; s1[k]!='\0'; k++){
        if(s1[k]==' '){
            esp2--;
        }else if(esp2==0){
            s2[i]=toupper(s1[k]);
            i++;
        }
    }
    
    s2[i]='\0';
    
    printf("%s", s2);
}


int main(){
    char s1[500], s2[500];
    
    scanf("%[^\n]", s1);
    
    fun1(s1, s2);
    for(int i=0; s2[i]!='\0'; i++){
        s2[i]=' ';
    }
    fun2(s1, s2);
    for(int i=0; s2[i]!='\0'; i++){
        s2[i]=' ';
    }
    fun3(s1, s2);
    
    
    return 0;
}