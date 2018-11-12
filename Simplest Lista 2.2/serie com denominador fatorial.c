#include<stdio.h>

void seriecomFatorial()
{
  double soma= 0;
  int fatorial= 1;

  // CÁLCULO
  for(int i= 0, a= 100; i<4; i++, a--)
  {
    if( i==0 || i==1)
      fatorial= 1;
    else
      fatorial*= i;

    soma+= (float) a/fatorial;
  }

  // APRESENTAÇÃO DE RESULTADOS
  printf("%lf", soma);
}

int main()
{
  seriecomFatorial();

  return 0;
}
