/**

Lista 1:

Exercício 12.

Faça um programa que lê uma sequência de números naturais do teclado (terminada por zero) e
imprime a quantidade de números pares e ímpares da sequência.
Imprima também o maior e o menor ímpar e o maior e o menor par encontrados na sequência.

Mesmo problema que o anterior; mas agora o tamanho n da sequência é conhecido previamente.
Antes de tudo você deve ler n, e depois ler os n números.

**/

#include<stdio.h>

/* neste exercício há 2 alternativas, optei pela primeira
    1ª: criar uma struct na função main e igualá-la a função selecaoAtributosNumericos().
    Assim, como a função selecaoAtributosNumericos() faz cálculos e retorna uma struct,
    a struct da função main receberá o retorno da função

    2ª: criar uma única struct na função main e passá-la por referência (através de ponteiro)
    para a função selecaoAtributosNumericos().
    Na passagem por referência, qualqer mudança feita na variável passada para a função,
    modificará o valor da variável que foi passada como parâmetro para a função
*/

struct ModeloAtributosNumericos
{
  int qtdPares, qtdImpares,
  menorPar, maiorPar,
  menorImpar, maiorImpar;
};

struct ModeloAtributosNumericos selecaoAtributosNumericos()
{
  int numero, qtdNumeros;

  struct ModeloAtributosNumericos atributosNumericos= {0, 0, 32767, -1, 32767, -1};

  printf("Digite a quantidade de números a serem recebidos:");
  scanf("%i", &qtdNumeros);

  printf("\nDigite vários números para verificação de paridade:\n");

  // condição de saída da iteração é digitar -2
  for(int i= 0; i<qtdNumeros; i++)
  {
    scanf("%i", &numero);

    if(numero%2 == 0 && numero != -2)
    {
      // aqi é feita a contagem dos números pares
      atributosNumericos.qtdPares++;

      if(numero > atributosNumericos.maiorPar)
        atributosNumericos.maiorPar= numero;

      if(numero < atributosNumericos.menorPar)
        atributosNumericos.menorPar= numero;
    }
    else if(numero != -2)
    {
      // aqi é feita a contagem dos números ímpares
      atributosNumericos.qtdImpares++;

      if(numero > atributosNumericos.maiorImpar)
        atributosNumericos.maiorImpar= numero;

      if(numero < atributosNumericos.menorImpar)
        atributosNumericos.menorImpar= numero;
    }
  }

  return atributosNumericos;
}

int main()
{
  int conjuntoNumeros, qtdNumeros;

  struct ModeloAtributosNumericos receberAtributosNumericos= selecaoAtributosNumericos(); ;

  printf("\n");

  printf("Pares: %i\n\
          Maior par: %i\n\
          Menor par: %i\n\n\
          Ímpares: %i\n\
          Maior ímpar: %i\n\
          Menor ímpar: %i",
          receberAtributosNumericos.qtdPares,  receberAtributosNumericos.maiorPar,
          receberAtributosNumericos.menorPar,
          receberAtributosNumericos.qtdImpares,
          receberAtributosNumericos.maiorImpar,
          receberAtributosNumericos.menorImpar
        );

  return 0;
}
