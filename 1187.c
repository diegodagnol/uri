#include <stdio.h>

int main()
{

    char operacao[2];
    double M[12][12], soma = 0.0;
    int i, j, cont = 0;

    scanf("%s", operacao);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
            if (i<j && i+j<11)
            {
                soma += M[i][j];
                cont += 1;
            }
        }
    }

    if (operacao[0] == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        printf("%.1lf\n", (soma / cont));
    }

    return 0;
}