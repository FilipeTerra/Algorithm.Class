/* A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça uma função que calcule
 e retorne o salário de um professor. Sabe-se que o valor da hora/aula segue a tabela abaixo: 
Professor Nível 1 R$12,00 por hora/aula
Professor Nível 2 R$17,00 por hora/aula
Professor Nível 3 R$25,00 por hora/aula
Faça a leitura do nível e o número de horas na "main" e passe por parâmetro para a função, 
ao final imprima a resposta o valor do salário na função também na "main" no formato R$9.99, 
ou seja precedido por um R$ e com 2 casas decimais. Caso seja preenchido um nível inválido
 considere R$0,00 por hora/aula. */

 #include <stdio.h>

float niveis_prof (int n, float h)
{
    float hora_aula, s;
    
    switch (n)
  {
    case 1: hora_aula = 12.0;
    break;

    case 2: hora_aula = 17.0;
    break;

    case 3: hora_aula = 25.0;
    break;
    
    default: hora_aula = 0.0;
    break;
  }
  
  s = hora_aula * h;
  return s;
}

int main ()
  {
  
  int nivel;
  float horas, salario;

  scanf("%d %f", &nivel, &horas);
  
  salario = niveis_prof(nivel, horas);
  
  printf("R$%.2f", salario);
  
  return 0;

}