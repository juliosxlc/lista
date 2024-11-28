#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, intervalo_1 = 0, intervalo_2 = 0, intervalo_3 = 0, intervalo_4 = 0;

    do
    {
        printf("digite um valor para n:(digite um valor negativo p/ sair)\n");
        scanf("%d", &n);

        if (n < 0)
        {
            break;
        }

        if (n > 0 && n <= 25)
        {
            intervalo_1++;
        }

        if (n > 25 && n <= 50)
        {
            intervalo_2++;
        }
        if (n > 50 && n <= 75)
        {
            intervalo_3++;
        }
        if (n > 75 && n <= 100)
        {
            intervalo_4++;
        }
        else if (n > 100)
        {
            printf("Valor nao permitido\n");
        }
    } while (n > 0);
    printf("Os valores encontrador no intervalo 1: (0 - 25) foi de: %d\n", intervalo_1);
    printf("Os valores encontrador no intervalo 2: (26 - 50) foi de: %d\n", intervalo_2);
    printf("Os valores encontrador no intervalo 3: (51 - 75) foi de: %d\n", intervalo_3);
    printf("Os valores encontrador no intervalo 4: (76 - 100) foi de: %d\n", intervalo_4);
}