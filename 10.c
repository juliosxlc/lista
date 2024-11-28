#include <stdio.h>

int main()
{
    int n;
    printf("Digite um valor para n:\n");
    scanf("%d", &n);

    int num1 = 1, num2 = 4;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", num1);
            num1++;
        }
        else
        {
            printf("%d ", num2);
            if ((i + 1) % 2 == 0)
            {
                num2++;
            }
        }
    }
    printf("\n");
    return 0;
}
