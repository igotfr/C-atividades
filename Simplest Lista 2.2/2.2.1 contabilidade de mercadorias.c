#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mercadorias()
{
	char *nomeMercadoria= malloc(0);
	int lucroPercentual, qtdMercadoriascomMenos10porcentoLucro= 0, qtdMercadoriascomLucroentre10e20= 0,
	qtdMercadoriascomMais20porcentoLucro= 0;
	float precoCompra, precoVenda, totalCompra= 0, totalVenda= 0, lucroTotal= 0;

	for(int i= 0;; i++)
	{
		// ENTRADA DO USUÁRIO
		printf("Nome da mercadoria: ");
		scanf("%s", nomeMercadoria);
		if( !strcmp(nomeMercadoria,"cancelar") )
			break;

		printf("Preço de compra: ");
		scanf("%f", &precoCompra);
		printf("Preço de venda: ");
		scanf("%f", &precoVenda);

    		printf("\n");

		// CÁLCULO
		totalCompra+= precoCompra;
		totalVenda+= precoVenda;

		lucroTotal+= precoVenda - precoCompra;
		lucroPercentual= 100*((precoVenda/precoCompra) -1);

		if( lucroPercentual<10 )
			qtdMercadoriascomMenos10porcentoLucro++;
		else if( lucroPercentual>=10 && lucroPercentual<=20 )
			qtdMercadoriascomLucroentre10e20++;
		else if( lucroPercentual>20 )
			qtdMercadoriascomMais20porcentoLucro++;
	}

	// APRESENTAÇÃO DE RESULTADOS
	printf("\n");

	printf("Quantidade de mercadorias com lucro menor que 10%%: %i\n", qtdMercadoriascomMenos10porcentoLucro);
	printf("Quantidade de mercadorias com lucro entre 10%% e 20%%: %i\n", qtdMercadoriascomLucroentre10e20);
	printf("Quantidade de mercadorias com lucro maior que 20%%: %i\n\n", qtdMercadoriascomMais20porcentoLucro);
	printf("Valor total de compra de mercadorias: %.4f\n", totalCompra);
	printf("Valor total de venda de mercadorias: %.4f\n\n", totalVenda);
	printf("Lucro total: %.4f\n", lucroTotal);
}

int main()
{
	mercadorias();

	return 0;
}
