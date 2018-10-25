/**

Lista 1:

Exercício 2.

Crie um algoritmo que recebe 5 (cinco) números do usuário, some esses números recebidos e exibe a resposta para o usuário.

**/

#include<stdio.h>

/* a variável n dentro das funções ler5numeros() e somar5numeros() não é a mesma qe está dentro da função main();
elas estão em escopos diferentes  */

void ler5numeros(float *n)
{
  for(int i= 0; i<5; i++)
    scanf("%f", &n[i]);
}

float somar5numeros(float *n)
{
  float acumuladordeSoma= 0;

  for(int i= 0; i<5; i++)
    acumuladordeSoma+= n[i];

  return acumuladordeSoma;
}

int main()
{
  float n[5];

  printf("Digite 5 números para soma-los:\n");
  ler5numeros(n);

  printf("\nO resultado da soma é %.4f", somar5numeros(n));

  return 0;
}
