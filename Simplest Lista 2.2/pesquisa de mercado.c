#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void pesquisa()
{
	char *sexo= malloc(0), *resposta= malloc(0);
	int qtdPessoas= 0, qtdPessoasRespostaSim= 0, qtdPessoasRespostaNao= 0, qtdMulheresRespostaSim= 0, qtdHomensRespostaNao= 0;
	float porcentagemMulheresRespostaSim, porcentagemHomensRespostaNao;

	printf("Entrevistados:\n\n");

	for( int i= 0; i<3; i++ )
	{
		// ENTRADA DO USUÁRIO
		printf("Sexo: ");
		scanf("%s", sexo);
		printf("Gostou da parada? ");
		scanf("%s", resposta);
		printf("\n");

		// CÁLCULO
		qtdPessoas++;

		if( !strcmp(resposta,"sim") )
		{
			qtdPessoasRespostaSim++;

			if( !strcmp(sexo,"feminino") )
				qtdMulheresRespostaSim++;
		}
		else if( !strcmp(resposta,"nao") )
		{
			qtdPessoasRespostaNao++;

			if( !strcmp(sexo,"masculino") )
				qtdHomensRespostaNao++;
		}
	}

	// estou assumindo a porcentagem total como todas as pessoas, não todas as mulheres
	porcentagemMulheresRespostaSim= (float) qtdMulheresRespostaSim/qtdPessoas *100;
	porcentagemHomensRespostaNao= (float) qtdHomensRespostaNao/qtdPessoas *100;

	// APRESENTAÇÃO DE RESULTADOS
	printf("Numero de pessoas que responderam sim: %i\n", qtdPessoasRespostaSim);
	printf("Numero de pessoas que responderam não: %i\n\n", qtdPessoasRespostaNao);
	printf("Porcentagem de mulheres que responderam sim: %f\n", porcentagemMulheresRespostaSim);
	printf("Porcentagem de homens que responderam não: %f\n", porcentagemHomensRespostaNao);
}

int main()
{
	pesquisa();

	return 0;
}
