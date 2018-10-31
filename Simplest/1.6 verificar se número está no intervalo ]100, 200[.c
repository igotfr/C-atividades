/**

Lista 1:

Exercício 6.

Faça um algoritmo que receba um número e diga se este está no intervalo entre 100 e 200.

**/

#include<stdio.h>

/* a variável n dentro da função intervaloEntre100e200() não é a mesma qe está dentro da função main();
elas estão em escopos diferentes  */

void intervaloEntre100e200(float n)
{
  if(n > 100 && n < 200)
    printf("\n%.4f está no intervalo entre 100 e 200", n);
  else if(n < 100)
    printf("\n%.4f é menor ou igual a 100", n);
  else if(n == 100)
    printf("\n%.4f é 100", n);
  else if(n == 200)
    printf("\n%.4f é 200", n);
  else
    printf("\n%.4f é maior ou igual a 200", n);
}

int main()
{
  float n;

  printf("Digite 1 número para verificar se está no intervalo entre 100 e 200:\n");
  scanf("%f", &n);

  intervaloEntre100e200(n);

  return 0;
}
