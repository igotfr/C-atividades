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
  return ++qtdPares;
}

int contarImpares(int numero, int qtdImpares)
{
  return ++qtdImpares;
}

int maiorPar(int numero, int maiorPar)
{
  if(numero > maiorPar)
    return maiorPar= numero;
  else
    return maiorPar;
}

int menorPar(int numero, int menorPar)
{
  if(numero < menorPar)
    return menorPar= numero;
  else
    return menorPar;
}

int maiorImpar(int numero, int maiorImpar)
{
  if(numero > maiorImpar)
    return maiorImpar= numero;
  else
    return maiorImpar;
}

int menorImpar(int numero, int menorImpar)
{
  if(numero < menorImpar)
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

struct ModeloAtributosNumericos selecaoAtributosNumericos()
{
  int numero;

  struct ModeloAtributosNumericos atributosNumericos= {0, 0, 32767, -1, 32767, -1};
  
  printf("Digite vários números para verificação de paridade: (-2 para sair)\n");

  // condição de saída da iteração é digitar -2
  while(numero != -2)
  {
    scanf("%i", &numero);

    if(numero%2 == 0 && numero != -2)
    {
      // aqi é feita a contagem dos números pares
      atributosNumericos.qtdPares= contarPares(numero, atributosNumericos.qtdPares);

      atributosNumericos.maiorPar= maiorPar(numero, atributosNumericos.maiorPar);
      
      atributosNumericos.menorPar= menorPar(numero, atributosNumericos.menorPar);
    }

    else if(numero != -2)
    {
      // aqi é feita a contagem dos números ímpares
      atributosNumericos.qtdImpares= contarImpares(numero,atributosNumericos.qtdImpares);

      atributosNumericos.maiorImpar= maiorImpar(numero, atributosNumericos.maiorImpar);

      atributosNumericos.menorImpar= menorImpar(numero, atributosNumericos.menorImpar);
    }
  }

  printf("\n");

  return atributosNumericos;
}

int main()
{
  struct ModeloAtributosNumericos receberAtributosNumericos;

  receberAtributosNumericos= selecaoAtributosNumericos();

  printf("Pares: %i\n\
          Maior par: %i\n\
          Menor par: %i\n\n\
          Ímpares: %i\n\
          Maior ímpar: %i\n\
          Menor ímpar: %i",
          receberAtributosNumericos.qtdPares,
          receberAtributosNumericos.maiorPar,
          receberAtributosNumericos.menorPar,
          receberAtributosNumericos.qtdImpares,
          receberAtributosNumericos.maiorImpar,
          receberAtributosNumericos.menorImpar
        );

  return 0;
}
