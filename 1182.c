#include <stdio.h>

float somaElementos(float m[12][12], int C)
{
    float soma = 0;
    int i;
    for (i = 0; i < 12; i++)
    {
        soma += m[i][C];
    }
    return soma;
}

int main()
{
    float m[12][12], soma = 0;
    int i, j, C;
    char T;

    scanf("%d %c", &C, &T);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }

    if (T == 'S')
    {
        soma = somaElementos(m, C);
        printf("%.1f\n", soma);
    }
    else
    {
        if (T == 'M')
        {
            soma = somaElementos(m, C);
            printf("%.1f\n", soma / 12);
        }
    }

    return 0;
}