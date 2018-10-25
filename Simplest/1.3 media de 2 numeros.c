/**

Lista 1:

Exercício 3.

Crie um algoritmo que calcule a média de 2 (dois) números e exibe a resposta para o usuário.

**/

#include<stdio.h>

/* as variáveis n1 e n2 dentro da função mediade2numeros() não são as mesmas qe estão dentro da função main();
elas estão em escopos diferentes  */

float mediade2numeros(float n1, float n2)
{
  return (n1 + n2)/2;
}

int main()
{
  float n1, n2;

  printf("Digite 2 números para calcular a média:\n");
  scanf("%f %f", &n1, &n2);

  printf("\nA média é %.4f", mediade2numeros(n1, n2));

  return 0;
}
