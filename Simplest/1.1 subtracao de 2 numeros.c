/**

Lista 1:

Exercício 1.

Crie um algoritmo que recebe 2 (dois) números do usuário, calcule a subtração desses dois números e exiba a resposta
para o usuário.

**/

#include<stdio.h>

/* as variáveis n1 e n2 dentro da função subtracaode2numeros() não são as mesmas qe estão dentro da função main();
elas estão em escopos diferentes  */

float subtracaode2numeros(float n1, float n2)
{
  return n1 - n2;
}

int main()
{
  float n1, n2;

  printf("Digite 2 números para subtraí-los:\n");
  scanf("%f %f", &n1, &n2);

  printf("\nO resultado da subtração é %.4f", subtracaode2numeros(n1, n2));

  return 0;
}
