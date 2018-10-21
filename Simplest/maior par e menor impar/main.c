#include<stdio.h>

struct ModeloAtributosNumericos
{
  int qtdPares, qtdImpares,
  maiorPar, menorImpar;
};

/* neste exercício há 2 alternativas, optei pela primeira
    1ª: criar uma struct na função main e igualá-la a função selecaoAtributosNumericos(). Assim, como a função selecaoAtributosNumericos() faz cálculos e retorna uma struct, a struct da função main receberá o retorno da função

    2ª: criar uma única struct na função main e passá-la por referência (através de ponteiro) para a função selecaoAtributosNumericos(). Na passagem por referência, qualqer mudança feita na variável passada para a função, modificará o valor da variável que foi passada como parâmetro para a função
*/

struct ModeloAtributosNumericos selecaoAtributosNumericos(int numero)
{
  struct ModeloAtributosNumericos atributosNumericos= {0, 0, -1, 32767};

  while(n!=-2)
  {
    scanf("%i", &numero);

    if(numero%2 == 0 && numero!=-2)
    {
      atributosNumericos.qtdPares++;
      if(numero > atributosNumericos.maiorPar)
        atributosNumericos.maiorPar= n;
    }
    else if(n!=-2)
    {
      atributosNumericos.qtdImpares++;
      if(numero < atributosNumericos.menorImpar)
        atributosNumericos.menorImpar= numero ;
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
          Ímpares: %i\n\
          Menor ímpar: %i",
          receberAtributosNumericos.qtdPares,  receberAtributosNumericos.maiorPar,receberAtributosNumericos.qtdImpares,receberAtributosNumericos.menorImpar
        );

  return 0;
}
