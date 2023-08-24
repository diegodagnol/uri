#include <stdio.h>

int main()
{
    int numero, soma, i, j;
    char leds[101];

    int vetor[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &numero);

    for (j = 0; j < numero; j++)
    {
        scanf("%s", leds);
        soma = 0;
        for (i = 0; leds[i] != '\0'; i++)
        {
            soma = soma + vetor[(int)leds[i] - '0'];
        }
        printf("%d leds\n", soma);
    }

   
    return 0;
}
