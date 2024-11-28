#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[11][6];
    int b[11][11];

    printf("Bloco 1:\n");
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            a[i][j] = i * j;
        }
    }
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d x %d = [%d] ", i, j, a[i][j]);
        }
        printf("\n");
    }

    printf("Bloco 2\n");
    for (int i = 0; i < 11; i++)
    {
        for (int j = 6; j < 11; j++)
        {
            b[i][j] = i * j;
        }
    }
    for (int i = 0; i < 11; i++)
    {
        for (int j = 6; j < 11; j++)
        {
            printf("%d x %d = [%d] ", i, j, b[i][j]);
        }
        printf("\n");
    }
}