#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

void dadosdePessoas()
{
  int qtdMulheres= 0, qtdHomens= 0;
  float altura, somaAlturaMulheres= 0, maiorAltura= 0, menorAltura=  32767;
  char *sexo= malloc(0);

  for(int i=0; i<6; i++)
  {
    printf("Preencha os dados: \n");
    printf("\tAltura: ");
    scanf("%f", &altura);
    printf("\tSexo: ");
    scanf("%s", sexo);
    printf("\n");

    // maior e menor alturas
    if( altura>maiorAltura )
      maiorAltura= altura;
    else if( altura<menorAltura )
      menorAltura= altura;

    // soma das alturas das mulheres
    if( !strcmp(sexo,"feminino"))
    {
      somaAlturaMulheres+= altura;
      qtdMulheres++;
    }
    else if( !strcmp(sexo,"masculino"))
      qtdHomens++;
  }

  printf("Maior altura: %.4f\nMenor altura: %.4f\nMedia de altura das mulheres: %.4f\nQuantidade de homens: %i",
         maiorAltura, menorAltura, somaAlturaMulheres/qtdMulheres,qtdHomens);

  free(sexo);
}

int main()
{
  dadosdePessoas();

  return 0;
}
