/**

Lista 1:

Exercício 10.

Faça um programa que lê dois números inteiros a e b, sendo a > 0 e b >=0, e calcule a potência a b.
Veja se seu algoritmo funciona para o caso b = 0;
tente elaborá-lo de modo que não seja preciso um teste especial para esse caso.

**/

#include<stdio.h>

// macro usada para usar a função exit que equivale ao interrompa do Portugol
#include<stdlib.h>

int potencia(int base, int expoente)
{
  int potencia= 1;

  if((base==0 && expoente==0) || expoente<0)
  {
    printf("Número Inválido");

    // interrompa do Portugol
    exit(0);
  }

  // para i de 1 até b, múltiplique os valores a, a, a... b vezes a pot
  else if(expoente == 0)
    potencia= 1;
  else
    for(int i= 1; i<=expoente; i++)
      potencia*= base;

  return potencia;
}

int main()
{
  int base, expoente;

  scanf("%i %i", &base, &expoente);
  printf("%i", potencia(base,expoente));

  return 0;
}
