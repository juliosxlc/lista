#include <stdio.h>

int main()
{
    int n, soma = 0;

    printf("digite um numero:");
    scanf("%d", &n);

    if (n > 0)
    {
        while (n != 0)
        {
            soma += n % 10; /* essa funcao faz com q peguemos o valor n, e achemos o resto da divisao por 10. ex: 241 /10 = 24 r= 1*/
            n /= 10;        /*essa funcao faz com que o ultimo numero da divisao por 10 seja excluido essa funcao /= é a mesma coisa de C /= A => C = C / A. Logo, 241 fica 24.*/
        }
        printf("%d", soma);
    }
    else
    {
        printf("numero invalido");
    }
}