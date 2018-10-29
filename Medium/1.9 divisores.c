/**

Lista 1:

Exercício 9.

Crie um programa que lê um número natural n do teclado e imprime todos os divisores desse número.
Ao final, imprima também a soma dos divisores encontrados.

**/

#include<stdio.h>
#include<stdlib.h>

struct modeloDivisores
{
  int *divisores, qtdDivisores;
};

struct modeloDivisores divisores(int n)
{
  struct modeloDivisores atributosDivisores;
  atributosDivisores.divisores= malloc(0);
  atributosDivisores.qtdDivisores= 0;

  for(int i= 1; i<=n/2; i++)
    if(n%i == 0)
    {
      atributosDivisores.divisores[atributosDivisores.qtdDivisores]= i;
      atributosDivisores.qtdDivisores++;
    }

  atributosDivisores.divisores[atributosDivisores.qtdDivisores]= n;

  return atributosDivisores;
}

void exibirDivisores(struct modeloDivisores atributosDivisores)
{
  for(int i= 0; i<=atributosDivisores.qtdDivisores; i++)
    printf("%i, ", atributosDivisores.divisores[i]);
}

int main()
{
  int n;

  printf("Digite 1 número para ver seus divisores:");
  scanf("%d", &n);

  exibirDivisores(divisores(n));

  return 0;
}
