/**

Lista 1:

Exercício 8.

Faça um programa que lê do teclado dois números, a > 0 e b >= 0, e imprime o valor da potência a^b.

**/

#include<stdio.h>
#include<stdlib.h>

/* as variáveis base e expoente dentro da função potencia() não são as mesmas qe estão dentro da função main();
elas estão em escopos diferentes  */

float potencia(float base, int expoente)
{
  float potencia= 1;

  if((base == 0 && expoente == 0) || expoente < 0)
  {
    printf("Número Inválido");
    exit(0);
  }
  else if(expoente == 0)
    potencia= 1;
  else
    for(int i= 1; i<=expoente; i++)
      potencia*= base;
 
  return potencia;
}

int main()
{
  float base;
  int expoente;

  printf("Digite a base da potência.\n\
          Em seguida digite o expoente da potência:\n");
  scanf("%f %i", &base, &expoente);

  printf("\nA potência é: %.4f", potencia(base, expoente));

  return 0;
}
