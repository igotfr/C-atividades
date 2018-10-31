/**

Lista 1:

Exercício 12.

Faça um programa que lê do teclado uma sequência de números inteiros não-nulos (terminada por zero) e os soma e subtrai
alternadamente - por exemplo, para a sequência [5, 7, 1, -4, 9], seu programa deverá calcular 5 - 7 + 1 - (-4) + 9.

**/

#include<stdio.h>

float sum(float numero, float soma)
{
  soma+= numero;

  return soma;
}

float subtraction(float numero, float subtracao)
{
  subtracao-= numero;

  return subtracao;
}

float somaSubtrAlternada()
{
  float numero, soma= 0, subtracao= 0;
  int i= 0;

  do
  {
    if(i%2 == 0)
    {
      printf("Digite um número para somar:\t+");
      scanf("%f", &numero);

      if(numero == -2)
        break;

      soma= sum(numero, soma);
    }

    else
    {
      printf("Digite um número para subtrair:\t-");
      scanf("%f", &numero);

      if(numero == -2)
        break;

      subtracao= subtraction(numero, subtracao);
    }

    i++;

  } while(1);

  return soma + subtracao;
}

int main()
{
  float resultadoSumSub= somaSubtrAlternada();

  printf("Resultado: %.4f", resultadoSumSub);
}
