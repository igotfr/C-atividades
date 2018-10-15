// essa macro no início eu uso para poder usar as funções scanf e printf, std é de standard e io é de input/output
#include<stdio.h>
 
// macro usada para usar a função exit que equivale ao interrompa do Portugol
#include<stdlib.h>
 
int potencia(int a, int b)
{
  // declaração da variável pot para armazenar o resultado
  int pot= 1;
 
  if((a==0 && b==0) || b<0)
  {
    printf("Número Inválido");
 
    // interrompa do Portugol
    exit(0);
  }
 
  // para i de 1 até b, múltiplique os valores a, a, a... b vezes a pot
  else if(b == 0) pot= 1;
  else for(int i= 1; i<=b; i++) pot*= a;
 
  return pot;
}
 
// a função main é a função principal, ele é obrigatório em C e normalmente o código para chamar funções e declarar variáveis é escrito dentro dele
int main()
{
    // declaração das variáveis a: base, b: expoente
    int a, b;
 
    scanf("%i %i", &a, &b);
 
    // exibe o resultado
    printf("%i", potencia(a,b));
 
    /* return é o retorno da função main, em frente a função main foi definido que a função retornará um int (inteiro),
    aqui em return é mostrado qual valor o main retornará, nesse caso ele está retornando 0 */
    return 0;
}
