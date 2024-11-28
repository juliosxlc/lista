#include <stdio.h>

int main()
{
    int a1, a2, n;

    printf("Digite um valor para a1:\n");
    scanf("%d", &a1);
    printf("Digite um valor para a2:\n");
    scanf("%d", &a2);
    printf("Digite um valor para o termo n (maior que 3):\n");
    scanf("%d", &n);

    if (n < 3)
    {
        printf("Numero invalido, n precisa ser maior que 3;");
        return 1;
    }

    int serie[n]; /*criei um int para um vetor de serei[n] na qual cria espacos para os proximos valores a serem gerados*/

    serie[0] = a1;
    serie[1] = a2;

    for (int i = 2; i < n; i++) /*for para ir de i ate n, e fazer a serie, passando por divisoes e salvando as arrays*/
    {
        if (i % 2 == 0)
        {
            /*par*/
            serie[i] = serie[i - 1] - serie[i - 2];
        }
        else
        {
            /*impar*/
            serie[i] = serie[i - 1] + serie[i - 2];
        }
    }

    printf("a sequecia é:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", serie[i]); /*printa a sequencia em ordem de vetor do for */
    }
    printf("\n");

    return 0;
}