#include <stdio.h>

int main()
{

    float m[12][12], soma = 0;
    int i, j, cont = 0;
    char T;

    scanf("%c", &T);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }
    if (T == 'S')
    {
        for (i = 0; i < 12; i++)
        {
            for (j = 0; j < 12; j++)
            {
                if (j < i)
                {
                    soma += m[i][j];
                }
            }
        }
        printf("%.1f\n", soma);
    }
    else
    {
        if (T == 'M')
        {
            for (i = 0; i < 12; i++)
            {
                for (j = 0; j < 12; j++)
                {
                    if (j < i)
                    {
                        soma += m[i][j];
                        cont++;
                    }
                }
            }
            printf("%.1f\n", soma / cont);
        }
    }

    return 0;
}