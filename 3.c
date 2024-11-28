#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, tempo_de_servico;
    char genero;

    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Informe seu genero (M ou F):");
    scanf(" %c", &genero);
    printf("Informe seu tempo de servico:");
    scanf("%d", &tempo_de_servico);

    switch (genero)
    {
    case 'm':
        if (idade > 62 && tempo_de_servico > 35)
        {
            printf("Voce pode se aposentar. Voce atende aos requisitos de idade, e tempo de servico\n");
        }
        else
        {
            if (idade > 62 && tempo_de_servico < 35)
            {
                printf("Voce nao pode se aposentar pois nao atende aos requisitos (tempo de servico minimo: (35 anos)\n");
            }
            else if (idade < 62 && tempo_de_servico > 35)
            {
                printf("Voce nao pode se aposentar pois nao atende aos requisitos: (idade minima: (65 anos)\n");
            }
        }
        break;
    case 'f':
        if (idade > 60 && tempo_de_servico > 30)
        {
            printf("Voce pode se aposentar. Voce atende aos requisitos de idade, e tempo de servico\n");
        }
        else
        {
            if (idade > 60 && tempo_de_servico < 30)
            {
                printf("Voce nao pode se aposentar pois nao atende aos requisitos (tempo de servico minimo (35 anos))\n");
            }
            else if (idade < 60 && tempo_de_servico > 30)
            {
                printf("Voce nao pode se aposentar pois nao atende aos requisitos (idade minima (65 anos)\n");
            }
        }
        break;

    default:
        break;
    }
}