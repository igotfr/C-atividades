#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mortalidadeInfantil()
{
  int qtdCriancasNascidas, qtdCriancasMortas= 0, qtdMachosMortos= 0, qtdCriancasMenos24Meses= 0, mesesdeVida;
  char *sexoCriancaMorta= malloc(9);

  // ENTRADA DO USUÁRIO
  printf("Quantidade de crianças nascidas no período: ");
  scanf("%i", &qtdCriancasNascidas);

  for(;1;)
  {
    printf("\nSexo da criança morta: ");
    scanf("%s", sexoCriancaMorta);

    if( !strcmp(sexoCriancaMorta,"vazio") )
      break;

    printf("Meses de vida: ");
    scanf("%i", &mesesdeVida);

    // CÁLCULO
    if( !strcmp(sexoCriancaMorta,"masculino") )
      qtdMachosMortos++;

    qtdCriancasMortas++;

    if( mesesdeVida<=24 )
      qtdCriancasMenos24Meses++;
  }

  // APRESENTAÇÃO DE RESULTADOS
  printf("\n\nPorcentagem de crianças mortas no período: %.4f\n", (float) qtdCriancasMortas/qtdCriancasNascidas *100);

  // porcentagem total assumida como todas as crianças nascidas, não todas as crianças mortas
  printf("Porcentagem de crianças do sexo masculino mortas no período: %.4f\n",
  (float) qtdMachosMortos/qtdCriancasNascidas *100);

  printf("Porcentagem de crianças que viveram 24 meses ou menos: %.4f",
  (float) qtdCriancasMenos24Meses/qtdCriancasNascidas *100);

  free(sexoCriancaMorta);
}

int main()
{
  mortalidadeInfantil();

  return 0;
}
