#include<stdio.h>

void serie()
{
  double soma= 0, subtracao= 0;

  // CÁLCULO
  for(int i= 0, a= 1000; i<4; i++, a-=3)
  {
    if( i%2==0 )
    {
      soma+= (double) a/(i+1);
    }
    else
      subtracao-= (double) a/(i+1);
  }

  // APRESENTAÇÃO DE RESULTADOS
  printf("%.12lf", soma+subtracao);
}

int main()
{
  serie();

  return 0;
}
