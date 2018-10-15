// essa macro no início eu uso para poder usar as funções scanf e printf, std é de standard e io é de input/output
#include <stdio.h>
 
// função fatorial usada para calcular o fatorial e retornar seu valor
int fatorial(int n)
{
  // declaração da variável fat para armazenar o resultado
  int fat= 1;
 
  // para i de 1 até n, múltiplique os valores 1, 2, 3... a fat
  for(int i= 0; i<=n; i++)
  {
    if(i == 0 || i == 1) fat= 1;
    else fat*= i;

    //fat= fat* i
  }

  return fat;
}
 
// a função main é a função principal, ele é obrigatório em C e normalmente o código para chamar funções e declarar variáveis é escrito dentro dele
int main()
{
    // declaração da variável n que é o valor a calcular o fatorial
    int n;
 
    // lê o valor digitado pelo usuário e armazena na variável n
    printf("Digite um número:");
    scanf("%i", &n);
 
    // exibe o resultado
    printf("%i", fatorial(n));
 
    /* return é o retorno da função main, em frente a função main foi definido que a função retornará um int (inteiro),
    aqui em return é mostrado qual valor o main retornará, nesse caso ele está retornando 0 */
    return 0;
}
