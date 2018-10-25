/**

Lista 1:

Exercício 4.

Faça um algoritmo que receba um número e mostre uma mensagem caso este seja maior que 10.

**/

#include<stdio.h>

// a variável n dentro da função menorMaiorouIguala10() não é a mesma qe está dentro da função main(); elas estão em escopos diferentes

void menorMaiorouIguala10(float n)
{
  if(n > 10)
    printf("\n%.4f é maior que 10", n);
  else if(n == 10)
    printf("\n%.4f é igual a 10", n);
  else
    printf("\n%.4f é menor que 10", n);
}

int main()
{
  float n;

  printf("Digite um número para verificar se é maior, menor ou igual a 10:\n");
  scanf("%f", &n);

  menorMaiorouIguala10(n);

  return 0;
}
