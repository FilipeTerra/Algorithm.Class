/* Crie uma função que retorne a média de combustível (Km/L) gasto pelo usuário. 
Esta função receberá a quantidade de quilômetros rodados e a quantidade de combustível consumido. 
Faça também uma função principal (main) para ler os valores necessários e 
chamar a função desenvolvida e imprimir o resultado. */

#include <stdio.h>
#include <stdlib.h>
 
void km_l (float km, float l)
{
    float c = km / l;
    printf("%.2f (km/l)", c);

}

int main ()
{
    float KM, L;
    scanf("%f %f", &KM, &L);
    
    km_l (KM, L);
    
    return 0;
}
