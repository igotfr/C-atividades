#include<stdio.h>
#include<string.h>

// [9] 3,4,5,8,8,9,8,9,4
// [9] {3,4,5,8,8,9,8,9,4}
// [11] 3,9,9,6,9,9,8,9,10,2,10

void idadeeOcorrencia()
{
  //char nome[9];
  char *nome;
  int idade, qtdPessoas= 0, somaIdades= 0, maiorIdade= 0, maiorIdadeAnterior, segundaMaiorIdade= 0, segundaMaiorIdadeAnterior, ocorrenciaMaiorIdade= 0, occs= 1;
  float altura;

  while(1)
  {
    printf("Preencha os dados abaixo: \n");
    printf("\tNome: ");
    scanf("%s", nome);

    if( !strcmp(nome,"vazio") )
      break;

    printf("\tIdade: ");
    scanf("%i", &idade);

    printf("\n");

	qtdPessoas++;
	somaIdades+= idade;

    maiorIdadeAnterior= maiorIdade;
    segundaMaiorIdadeAnterior= segundaMaiorIdade;

    if( idade>maiorIdade )
    {
      segundaMaiorIdade= maiorIdade;
      maiorIdade= idade;
    }

    if( idade>segundaMaiorIdade && idade!=maiorIdade )
      segundaMaiorIdade= idade;

    if( maiorIdade>maiorIdadeAnterior )
      ocorrenciaMaiorIdade= 0;

    if( idade==maiorIdade )
      ocorrenciaMaiorIdade++;
  }

  printf("\n\nMaior idade: %i\n\tOcorrencia: %i\n\nSegunda maior idade: %i\n", maiorIdade, ocorrenciaMaiorIdade, segundaMaiorIdade);
	printf("Media de idade do grupo: %f", (float) somaIdades/qtdPessoas);
}

int main()
{
  idadeeOcorrencia();

  return 0;
}
