/**

Lista 1:

Exercício 11.

Faça um programa que lê uma sequência de números naturais do teclado (terminada por zero) e
imprime a quantidade de números pares e ímpares da sequência.
Imprima também o maior e o menor ímpar e o maior e o menor par encontrados na sequência.

**/

#include<stdio.h>

int contarPares(int numero, int qtdPares)
{
  if(numero%2 == 0 && numero != -2)
    return ++qtdPares;
  else
    return qtdPares;
}

int contarImpares(int numero, int qtdImpares)
{
  if(numero%2 != 0 && numero != -2)
    return ++qtdImpares;
  else
    return qtdImpares;
}

int maiorPar(int numero, int maiorPar)
{
  if(numero%2 == 0 && numero > maiorPar && numero != -2)
    return maiorPar= numero;
  else
    return maiorPar;
}

int menorPar(int numero, int menorPar)
{
  if(numero%2 == 0 && numero < menorPar && numero != -2)
    return menorPar= numero;
  else
    return menorPar;
}

int maiorImpar(int numero, int maiorImpar)
{
  if(numero%2 != 0 && numero > maiorImpar && numero != -2)
    return maiorImpar= numero;
  else
    return maiorImpar;
}

int menorImpar(int numero, int menorImpar)
{
  if(numero%2 != 0 && numero < menorImpar && numero != -2)
    return menorImpar= numero;
  else
    return menorImpar;
}

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

struct ModeloAtributosNumericos selecaoAtributosNumericos(int numero)
{
  struct ModeloAtributosNumericos atributosNumericos= {0, 0, 32767, -1, 32767, -1};

  // as 2 variáveis abaixo serão usadas mais abaixo para verificar se a contagem de números pares ou ímpares alterou
  int qtdParesAnterior, qtdImparesAnterior;

  // condição de saída da iteração é digitar -2
  while(numero!=-2)
  {
    scanf("%i", &numero);

    qtdParesAnterior= atributosNumericos.qtdPares;
    qtdImparesAnterior= atributosNumericos.qtdImpares;

    // aqi é feita a contagem dos números pares
    atributosNumericos.qtdPares= contarPares(numero, atributosNumericos.qtdPares);

    if(atributosNumericos.qtdPares != qtdParesAnterior)
    {
      atributosNumericos.maiorPar= maiorPar(numero, atributosNumericos.maiorPar);
      
      atributosNumericos.menorPar= menorPar(numero, atributosNumericos.menorPar);
    }

    // aqi é feita a contagem dos números ímpares
    atributosNumericos.qtdImpares= contarImpares(numero,atributosNumericos.qtdImpares);

    if(atributosNumericos.qtdImpares != qtdImparesAnterior)
    {
      atributosNumericos.maiorImpar= maiorImpar(numero, atributosNumericos.maiorImpar);

      atributosNumericos.menorImpar= menorImpar(numero, atributosNumericos.menorImpar);
    }
  }

  return atributosNumericos;
}

int main()
{
  int conjuntoNumeros;
  struct ModeloAtributosNumericos receberAtributosNumericos= selecaoAtributosNumericos(conjuntoNumeros);

  printf("Pares: %i\n\
          Maior par: %i\n\
          Menor par: %i\n\
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
