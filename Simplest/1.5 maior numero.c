/**

Lista 1:

Exercício 5.

Crie um algoritmo que leia dois valores inteiros distintos e informe qual é o maior.

**/

#include<stdio.h>

// as variáveis n1 e n2 dentro da função maiorNumero() não são as mesma qe estão dentro da função main(); elas estão em escopos diferentes

void maiorNumero(float n1, float n2)
{
  if(n1 > n2)
    printf("\nO maior é %.4f", n1);
  else
    printf("\nO maior é %.4f", n2);
}

int main()
{
  float n1, n2;

  printf("Digite 2 números para verificar o maior:\n");
  scanf("%f %f", &n1, &n2);

  maiorNumero(n1, n2);

  return 0;
}
