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
  int *divisores, qtdDivisores, somaDivisores;
};

struct modeloDivisores divisores(int n)
{
  struct modeloDivisores atributosDivisores;

  atributosDivisores.divisores= malloc(0);
  atributosDivisores.qtdDivisores= 0;
  atributosDivisores.somaDivisores= 0;

  for(int i= 1; i<=n/2; i++)
    if(n%i == 0)
    {
      atributosDivisores.divisores[atributosDivisores.qtdDivisores]= i;
      atributosDivisores.qtdDivisores++;
      atributosDivisores.somaDivisores+= i;
    }

  atributosDivisores.divisores[atributosDivisores.qtdDivisores]= n;
  atributosDivisores.somaDivisores+= n;

  return atributosDivisores;
}

int somaDivisores(struct modeloDivisores atributosDivisores)
{
  int somaDivisores= 0;

  for(int i= 0; i<=atributosDivisores.qtdDivisores; i++)
    somaDivisores+= atributosDivisores.divisores[i];

  return somaDivisores;
}

void exibirDivisores(struct modeloDivisores atributosDivisores)
{
  for(int i= 0; i<=atributosDivisores.qtdDivisores; i++)
    printf("%i, ", atributosDivisores.divisores[i]);
}

int main()
{
  int n;
  struct modeloDivisores retornoDivisores;

  printf("Digite 1 número para ver seus divisores:");
  scanf("%d", &n);
  retornoDivisores= divisores(n);
  exibirDivisores(retornoDivisores);

  printf("\n\nSoma dos divisores: %i", retornoDivisores.somaDivisores);

  return 0;
}
