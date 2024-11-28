#include <stdio.h>

int main()
{
    int a, b, c = 0;

    printf("Digite os valores dos triangulos:");
    scanf("%d %d %d", &a, &b, &c);

    if (a < (b + c) && b < (c + a) && c < (a + b))
    {
        if (a == b == c)
        {
            printf("o triangulo e equilatero");
        }
        else if (a == b || b == c || a == c)
        {
            printf("O triangulo e isosceles");
        }
        else if (a != b != c)
        {
            printf("o triangulo e escaleno");
        }
    }
    else
    {
        printf("o valor inserido nao e valido para um triangulo");
    }
}