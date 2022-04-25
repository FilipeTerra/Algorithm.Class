/* Para descontrair os alunos após as provas da OBI, a Diretora da escola organizou um campeonato de aviões de papel. 
Cada aluno participante receberá uma certa quantidade de folhas de um papel especial para fazer os seus modelos 
de aviões. A quantidade de folhas que cada aluno deverá receber ainda não foi determinada: 
ela será decidida pelos juízes do campeonato.

A diretora convidou, para atuarem como juízes, engenheiros da Embraer, 
uma das mais bem sucedidas empresas brasileiras, que vende aviões com tecnologia brasileira no mundo todo. 
O campeonato está programado para começar logo após a prova da OBI, mas os juízes ainda não chegaram à escola. 
A diretora está aflita, pois comprou uma boa quantidade de folhas de papel especial, mas não sabe se a quantidade comprada vai ser suficiente.

Considere, por exemplo, que a Diretora comprou 100 folhas de papel especial, e que há 33 competidores. 
Se os juízes decidirem que cada competidor tem direito a três folhas de papel, a quantidade comprada pela
 diretora é suficiente. Mas se os juízes decidirem que cada competidor tem direito a quatro folhas, 
 a quantidade comprada pela diretora não seria suficiente.

Faça o seguinte:

Escreva uma função que receba como parâmetros o número de competidores, 
o número de folhas de papel especial compradas pela Diretora e o número de folhas que cada 
competidor deve receber, e imprima se o número de folhas comprado pela Diretora é suficiente.

Escreva uma função principal (main) que leia o número de competidores, 
o número de folhas de papel especial compradas pela Diretora e o número de folhas que cada 
competidor deve receber, digitados pelo usuário, e chame a função anterior. */

#include <stdio.h>
#include <math.h>

void avioes_papel (int p, int f, int fp)
{
  int x;
  x = f / p;
  
  if (x >= fp)
  {
    printf ("O numero de folhas e suficiente.");
  }

  if (x < fp) 
  {
    printf ("O numero de folhas e insuficiente.");
  }
}

int main ()
{

int pessoas, folhas, folhas_pessoas;

scanf ("%d %d %d", &pessoas, &folhas, &folhas_pessoas);

avioes_papel (pessoas, folhas, folhas_pessoas);

return 0;

}