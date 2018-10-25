/**

Lista 1:

Exercício 7.

Elabore um algoritmo (e construa um programa) que calcule o fatorial de um número n multiplicando os fatores da direita
para esquerda (ou seja, começando de n e indo até 1). Quais problemas você encontra?

**/

#include<stdio.h>

// a variável n dentro da função fatorial() não é a mesma qe está dentro da função main(); elas estão em escopos diferentes

int fatorial(int n)
{
  int fat= 1;

  for(int i= n; i>1; i--)
    if(i == 0 || i == 1)
      fat= 1;
    else
      fat*= i;

  return fat;
}

int main()
{
  int n;

  printf("Digite 1 número para calcular seu fatorial:\n");
  scanf("%i", &n);

  printf("\nO fatorial é: %i", fatorial(n));

  return 0;
}
