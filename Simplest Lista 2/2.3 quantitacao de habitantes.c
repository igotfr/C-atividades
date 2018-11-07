#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fmaiorIdade(int idade, int maiorIdade)
{
  if( idade>maiorIdade)
    maiorIdade= idade;

  return maiorIdade;
}

int fqtdMulheres(char sexo[], int qtdMulheres)
{
  if( !strcmp(sexo,"feminino") )
    return ++qtdMulheres;
}

int fqtdOcorrencias(int qtdOcorrencias, int idade, char sexo[],char cordosOlhos[], char cordosCabelos[])
{
  if(idade>=18 && idade<=35 && !strcmp(sexo,"feminino") && !strcmp(cordosOlhos,"verdes") && !strcmp(cordosCabelos,"louros"))
    return ++qtdOcorrencias;
}

void dadosHabitantes()
{
  char *sexo= malloc(0), *cordosOlhos= malloc(0), *cordosCabelos= malloc(0);
  int idade, maiorIdade= 0, maiorIdadeAnterior, qtdMulheres= 0, qtdOcorrencias= 0;

  for(; idade!=-1;)
  {
    maiorIdadeAnterior= maiorIdade;

    printf("Preencha o cadastro: \n");
    printf("\tSexo: ");
    scanf("%s", sexo);
    printf("\tCor dos olhos: ");
    scanf("%s", cordosOlhos);
    printf("\tCor dos cabelos: ");
    scanf("%s", cordosCabelos);
    printf("\tIdade: ");
    scanf("%i", &idade);
    printf("\n");

      if( idade==-1 )
        break;

    maiorIdade= fmaiorIdade(idade, maiorIdade);

    qtdMulheres= fqtdMulheres(sexo, qtdMulheres);

    qtdOcorrencias= fqtdOcorrencias(qtdOcorrencias,idade,sexo,cordosOlhos,cordosCabelos);
  }

  printf("Maior idade: %i\n", maiorIdade);

  printf("qtd mulheres: %i\n", qtdMulheres);

  printf("qtd ocorrencias: %i\n", qtdOcorrencias);

  printf("Porcentagem entre as mulheres que possuem de 18 a 35 anos e que tenham olhos verdes e cabelos louros: %.4f", (float) qtdOcorrencias*100 /qtdMulheres);
}

int main()
{
  dadosHabitantes();

  return 0;
}
