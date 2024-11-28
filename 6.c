#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, calc = 1;

    printf("Digite algum valor:\n");
    scanf("%d", &n);

    do
    {
        calc *= n;
        n--;
    } while (n > 0);

    printf("o fatorial do numero é: %d", calc);
}