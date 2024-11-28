#include <stdio.h>

int main()
{
    int n, quant = 3;

    printf("digite a quantidade da sequencia:\n");
    scanf("%d", &n);

    int serie[n];
    serie[0] = 1;

    for (int i = 1; i < n; i++) /*mesmo intuito do codigo passado, definimos o primeiro conteudo da serie como 1, deixamos pre-definido quant = 3 (esse e o somador que estamos utilizando), e posteriormente fazemos o calculo da serie[0] = 1 + 3 = 4, o codigo salva a array e posteriormente acessa o vetor adicionando no quant + 2 a cada loop do for até o n-esimo numero*/
    {
        serie[i] = serie[i - 1] + quant;
        quant += 2;
    }

    for (int i = 0; i < n; i++) /*for para print do code*/
    {
        printf("%d ", serie[i]);
    }

    return 0;
}