#include<stdio.h>
#include<stdlib.h>

struct Boi
{
  char *nome;
  float peso;
};

struct PropriedadesBois
{
  int freqMaiorPeso, freqMenorPeso, *idsMaioresPesos, *idsMenoresPesos; //qtdBois
  float maiorPeso, menorPeso;
};

struct Boi* listaBois()
{
  struct Boi *bid= malloc(0);

  bid[0] = (struct Boi)
  {
    .nome= "roboaldo",
    .peso= 800
  };

  bid[1]= (struct Boi)
  {
    .nome= "guinu",
    .peso= 900
  };

  bid[2]= (struct Boi)
  {
    .nome= "preto",
    .peso= 800
  };

  bid[3]= (struct Boi)
  {
    .nome= "fraldinha",
    .peso= 750
  };

  bid[4]= (struct Boi)
  {
    .nome= "churrasco",
    .peso= 900
  };

  return bid;
}

struct PropriedadesBois calculoPropBois()
{
  struct PropriedadesBois propBois= {0, 0, malloc(0), malloc(0), 0, 32767};
  struct Boi *bid= listaBois();

  int maiorPesoAnterior, qtdBois= 5;

  for(int i= 0; i<qtdBois; i++)
  {
    // cálculo de maior peso
    if(bid[i].peso > propBois.maiorPeso)
    {
      propBois.maiorPeso= bid[i].peso;
      propBois.freqMaiorPeso= 1;

      propBois.idsMaioresPesos[propBois.freqMaiorPeso - 1]= i;
    }
    // cálculo de frequência de ocorrência do maior peso
    else if(bid[i].peso == propBois.maiorPeso)
    {
      propBois.freqMaiorPeso++;
      propBois.idsMaioresPesos[propBois.freqMaiorPeso - 1]= i;
    }

    // cálculo de menor peso
    if(bid[i].peso < propBois.menorPeso)
    {
      propBois.menorPeso= bid[i].peso;
      propBois.freqMenorPeso= 1;

      propBois.idsMenoresPesos[propBois.freqMenorPeso - 1]= i;
    }
    // cálculo de frequência de ocorrência do menor peso
    else if(bid[i].peso == propBois.menorPeso)
    {
      propBois.freqMenorPeso++;
      propBois.idsMenoresPesos[propBois.freqMenorPeso - 1]= i;
    }
  }

  return propBois;
}

int main()
{
  struct PropriedadesBois propBois= calculoPropBois();
  struct Boi *bid= listaBois();

  printf("Maior peso entre os bois: %.4f\n\n\
  Bois com esse peso: %i\n\n", propBois.maiorPeso, propBois.freqMaiorPeso);

  for(int i= 0; i<propBois.freqMaiorPeso; i++)
    printf("ID: %i Nome: %s\n", propBois.idsMaioresPesos[i], bid[propBois.idsMaioresPesos[i]].nome);

  printf("\n\nMenor peso entre os bois: %.4f\n\n\
  Bois com esse peso: %i\n\n", propBois.menorPeso, propBois.freqMenorPeso);

  for(int i= 0; i<propBois.freqMenorPeso; i++)
    printf("ID: %i Nome: %s\n", propBois.idsMenoresPesos[i], bid[propBois.idsMenoresPesos[i]].nome);
}
