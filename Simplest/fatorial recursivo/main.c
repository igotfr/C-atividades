// essa macro no início eu uso para poder usar as funções scanf e printf, std é de standard e io é de input/output
#include <stdio.h>

int fatorial(int n)
{
    if(n==0 || n==1) return 1;
    else return n*fatorial(n-1);
}

// a função main é a função principal, ele é obrigatório em C e normalmente o código para chamar funções e declarar variáveis é escrito dentro dele
int main()
{
    int a;

    scanf("%i", &a);
    printf("%i", fatorial(a));

    /* return é o retorno da função main, em frente a função main foi definido que a função retornará um int (inteiro),
    aqui em return é mostrado qual valor o main retornará, nesse caso ele está retornando 0*/
    return 0;
}
